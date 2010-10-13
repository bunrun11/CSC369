/*
 * CSC 369 Fall 2010 - Excercise 2
 *
 * Zeeshan Qureshi
 * g0zee@cdf.toronto.edu
 * $td$
 */

#include<types.h>
#include<lib.h>
#include<thread.h>

void sys__exit(int exitcode){
  /* Call thread_exit with exitcode to cleanup */
  thread_exit(exitcode);
}

int sys_printchar(char c){
  if(kprintf("%c", c) == 1)
    return 1;
  else
    return -1;
}
