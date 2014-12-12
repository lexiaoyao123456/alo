#include <stdio.h>

int puzzle(int N)
{
  if(N==1)
    {
	return 1;
    }

  if(N%2 == 0)
    {
      printf("%d\t", N/2);
      return puzzle(N/2);
    }
  else
    {
      printf("%d\t",3*N+1);
      return puzzle(3*N+1);
    }
}

int main()
{
  int m;
  printf("\n");
  printf("*********************\n");
  printf("输入证书值: ");
  scanf("%d",&m);
  puzzle(m);
  printf("\n*********************\n");
  printf("\n");
  return 0;
}
