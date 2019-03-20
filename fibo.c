#include "types.h"
#include "stat.h"
#include "user.h"

int fib(int n) 
{ 
  int a = 0, b = 1, c, i, j=0; 
  if( n == 0) 
    return a; 
	
while(j < 10){
  for (i = 2; i <= n; i++) 
  { 
     c = a + b; 
     a = b; 
     b = c; 
  } 
  return b; 
} 
}

int main(int argc, char **argv){
	int n;
	n = atoi(argv[1]);
	printf(1, "The value is: %d \n", fib(n));
	exit();
}