#include <sys/socket.h>
#include <netinet/in.h>

int main()
{
  int res;
  res = SOCK_DGRAM;
  printf("SOCK_DGRAM: %d\n",res);

  res = SOCK_RAW;
  printf("SOCK_RAW: %d\n",res);
  res = SOCK_STREAM;
  printf("SOCK_STREAM: %d\n",res);

  return 0;
}
