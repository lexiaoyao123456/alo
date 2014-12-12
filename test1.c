#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
  int i;
  int j=0;
  for(i=0;i<2;i++)
    {
      fork();
      printf("-%d:%d  ",getpid(),j++);
    }
  for(i=0;i<2;i++)
    {
      fork();
      printf("-%d:%d  ",getpid(),j++);
    }

  printf("\n");
  return 0;
}
