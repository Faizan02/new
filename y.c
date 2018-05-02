#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
void main()
{
  printf("pid :%d!\n",getpid());
  printf("uid: %d\n",getuid());
  printf("groupid: %d\n",getgid());
  printf("enviroment variable(USER): %s\n",getenv("USER"));
}