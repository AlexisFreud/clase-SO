#include "types.h"
#include "x86.h"
#include "defs.h"
#include "date.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "proc.h"


int
sys_fork(void)
{
  return fork();
}

int
sys_exit(void)
{
  exit();
  return 0;  // not reached
}

int
sys_wait(void)
{
  return wait();
}

int
sys_kill(void)
{
  int pid;

  if(argint(0, &pid) < 0)
    return -1;
  return kill(pid);
}

int
sys_getpid(void)
{
  return myproc()->pid;
}

int
sys_sbrk(void)
{
  int addr;
  int n;

  if(argint(0, &n) < 0)
    return -1;
  addr = myproc()->sz;
  if(growproc(n) < 0)
    return -1;
  return addr;
}

int
sys_sleep(void)
{
  int n;
  uint ticks0;

  if(argint(0, &n) < 0)
    return -1;
  acquire(&tickslock);
  ticks0 = ticks;
  while(ticks - ticks0 < n){
    if(myproc()->killed){
      release(&tickslock);
      return -1;
    }
    sleep(&ticks, &tickslock);
  }
  release(&tickslock);
  return 0;
}

// return how many clock tick interrupts have occurred
// since start.
int
sys_uptime(void)
{
  uint xticks;

  acquire(&tickslock);
  xticks = ticks;
  release(&tickslock);
  return xticks;
}


// Shutdown
int sys_shutdown(void){
	outw(0xb004, 0x2000);
	return 0;
}


// Reboot
int sys_reboot(void){
	outb(0x64, 0xFE);
	return 0;
}

int 
sys_date(struct rtcdate r){
	cmostime(&r);
	uint hora = r.hour;
	uint minuto = r.minute;
	uint segundo = r.second;
	uint dia = r.day;
	uint mes = r.month;
	uint anio = r.year;
	if(hora < 6){
		hora = hora + 18;
		if(dia == 1){
			if(mes <= 8 && mes%2 == 0){
				dia = 31;
			}else if(mes > 7 && mes%2 == 1){
				dia = 31;
			}else if(mes == 3 && anio%4 == 0){
				dia = 29;
			}else if(mes == 3){
				dia = 28;
			}else{
				dia = 30;
			}
			if(mes == 1){
				anio = anio - 1;
				mes = 12;
				dia = 31;
			}else{
				mes = mes - 1;
			}
		}else{
			dia = dia - 1;
		}
	}else{
		hora = hora - 6;
	}
	cprintf("%d : %d : %d\n%d/%d/%d\n",hora,minuto,segundo,dia,mes,anio);
	return 0;
}