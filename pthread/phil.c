#include <semaphore.h>
#include <time.h>
#include <unistd.h>

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define NUM_PHIL 5
#define NUM_FORK 5

sem_t forks[NUM_FORK];

int randomInRange(int min, int max){
	return min + random()%(max-min+1);
}

void *life(void *threadid)
{
   long tid;
   tid = (long)threadid;
	srand((tid+1)*time(NULL));

	while(1){
		printf("Soy el phil %ld y quiero mis tenedores \n",tid);
		if(tid%2 == 0){
			//Tomar izquierdo
			sem_wait(&forks[(tid+1)%NUM_FORK]);
			//Tomar derecho
			sem_wait(&forks[tid]);
		}else{
			//Tomar derecho
			sem_wait(&forks[tid]);
			//Tomar izquierdo
			sem_wait(&forks[(tid+1)%NUM_FORK]);
		}
		//Comer
		printf("Soy el phil %ld y voy a comer\n", tid);
		sleep(randomInRange(5, 25));
		
		//Regresa tenedores
		sem_post(&forks[tid]);
		sem_post(&forks[(tid+1)%NUM_FORK]);
		
		//Piensa
		printf("Soy el phil %ld y voy a pensar\n", tid);
		sleep(randomInRange(5, 25));
	}
}

int main(int argc, char *argv[])
{
   pthread_t philosophers[NUM_PHIL];
   int rc;
   long t;
	
	for(t=0; t<NUM_FORK;t++){
		sem_init(&forks[t], 0, 1);
	}
	
   for(t=0;t<NUM_PHIL;t++){
     printf("In main: creating thread %ld\n", t);
     rc = pthread_create(&philosophers[t], NULL, life, (void *)t);
     if (rc){
       printf("ERROR; return code from pthread_create() is %d\n", rc);
       exit(-1);
       }
     }
   /* Last thing that main() should do */
   pthread_exit(NULL);
}