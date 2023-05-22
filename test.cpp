#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>


void func()
{
  printf("no\n");
}


int main(int argc, char* argv[])
{
  if(argc!=3)
  {
    func();
    return 1;
  }
  else 
  {
    int pid=atoi(argv[1]);
    int si=atoi(argv[2]);
    kill(pid,si);
    printf("is kill\n");
  }
  return 0;
}
/*void func(int st)
{
  printf("hello %d\n",st);
}
int main(void)
{
  for(int i=1;i<=31;i++)
  {
    signal(i,func);
  }
  while(1)
  {
    printf("hello\n");
    sleep(1);
  }

  int a=0;
  a/=0;
  return 0;
}*/
