#ifndef	__QUEUE_H
#define	__QUEUE_H
typedef	struct	queue	*Q;
//void	QUEUEdump(Q);
Q	QUEUEinit(int maxN);
int 	QUEUEempty(Q);
void	QUEUEQUEUEput(Q,Item);
Item	QUEUEget(Q);

#endif
