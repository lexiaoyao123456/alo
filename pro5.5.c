#include <stdio.h>
typedef struct node* link;
struct node {
  int data;
  link next;
};

int main()
{
  link head=malloc(sizeof *head), t=head, n=head,temp;
  if (head == NULL)
    {
      printf(" MAOOLC ERROR!\n");
      return 0;
    }
  head->next = NULL;
  int i;
  for( i= 0;i<10;i++)
    {
      t->data = i+3;
      //      temp = malloc(sizeof(link));
//temp->next= t->next;
//   t->next = temp;
//   t= t->next;
t->next = malloc(sizeof(link));
 t=t->next;
     t->next = NULL;
    }
  while( n!= NULL)
    {
      printf("%d\n",n->data);
      n= n->next;
    }

  printf("\n");

  return 0;
}
