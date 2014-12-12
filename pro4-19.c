#include <stdio.h>
#include <stdlib.h>
#include "Item.h"
#include "QUEUE.h"

#define M 10

main(int argc,char *argv[])
{
	int i,j,N=atoi(argv[1]);
	int k;
	Q queues[M];
	for(i=0;i<M;i++)
		queues[i] = QUEUEinit(N);
	
	for(i=0;i<N; i++)
	{
		k = rand()%M;
		QUEUEput(queues[k],j);
		printf( "-*%5d %5d\n", k,i);
		//printf( "%5d ", queues[k]->head);
	}
	printf("********\n\n");

	for(i=0;i<M;i++,printf("*** %d ***\n",i))
		for(j=0;!QUEUEempty(queues[i]); j++ )
			printf("** %3d ", QUEUEget(queues[i]));
}
