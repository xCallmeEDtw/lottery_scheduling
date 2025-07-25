#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <lib.h>
#include <time.h>

void proc(int id);
int main(void)
{
  //create 3 process
  for (int i = 1; i < 4; i++)
  {
    if (fork() == 0)
    {
      proc(i);
    }
  }
  return 0;
}
void proc(int id)
{
  int loop;
  switch (id)
  {
  case 1: //process1
    
    printf("proc1 set success\n");
    sleep(1);
    break;
  case 2: //process2
    
    printf("proc2 set success\n");
    sleep(1);
    break;
  case 3: //process3
    
    printf("proc3 set success\n");
    break;
  }
  for (loop = 1; loop < 20; loop++)
  {
    //process 1
    if (id == 1 && loop == 5)
    {
      printf("Change proc1 Run\n");
    }
    //process 3
    if (id == 3 && loop == 10)
    {
      printf("Change proc3 Run\n");
    }
    sleep(1); //sleep 
    printf("prc%d heart beat %d\n", id, loop);
  }
  exit(0);
}
