#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node *link;
};
 
struct node *first, *second, *third;

void printlist(struct node *n)
{
	while(n!= NULL){
	printf("%d ", n->data);
	n=n->link;
	}
}
  

void insertion ( int new_data )
{
	struct node *nnode = (struct node*)malloc(sizeof(struct node));
	nnode->data=new_data;
	nnode->link=first;
	first=nnode;
	printlist(first);
}

void insertmid(struct node *prev, int mid_data)
{
struct node *mnode = (struct node*)malloc(sizeof(struct node));
	mnode->data=mid_data;
	mnode->link=prev->link;
	prev->link=mnode;
	printlist(first);
}

void insertEnd( struct node *last, int end_data)
{
struct node *enode = (struct node*)malloc(sizeof(struct node));
	enode->data=end_data;
	last->link=enode;
	enode->link=NULL;
	printlist(first);
}

void Deletefirstnode()
{
    
    struct node *toDelete;
    toDelete = first;
        first = first->link;

        printf("\nData deleted = %d\n", toDelete->data);

 free(toDelete);
printlist(first);

        printf("SUCCESSFULLY DELETED FIRST NODE FROM LIST\n");
    }

void Deletelastnode()
{
struct node *toDelete, *Secondlastnode;
 toDelete= first;
Secondlastnode=first;
while(toDelete->link != NULL)
        {
            Secondlastnode = toDelete;
            toDelete = toDelete->link;
        }
            Secondlastnode->link= NULL;
      
        free(toDelete);
       printlist(first);
        printf("SUCCESSFULLY DELETED LAST NODE OF LIST\n");
}


void DeleteMiddleNode(int position)
{
    int i;
    struct node *toDelete, *prevNode;

        toDelete = first;
        prevNode = first;

        for(i=2; i<=position; i++)
        {
            prevNode = toDelete;
            toDelete = toDelete->link;
         }
           

            prevNode->link = toDelete->link;
            toDelete->link = NULL;

            
            free(toDelete);
            printlist(first);
            printf("SUCCESSFULLY DELETED NODE FROM MIDDLE OF LIST\n");
      
}


int main()
{
  int new_data, mid_data, end_data;
  first= (struct node*)malloc(sizeof(struct node));
  second= (struct node*)malloc(sizeof(struct node));
third= (struct node*)malloc(sizeof(struct node));
first->data=5;
first->link=second;
second->data=10;
second->link=third;
third->data=15;
third->link=NULL;
printlist(first);
scanf("%d %d %d", &new_data, &mid_data, &end_data);
  insertion( new_data);
  insertmid ( second, mid_data);
  insertEnd ( third, end_data);

  Deletefirstnode();
  Deletelastnode();
  DeleteMiddleNode(3);
printf(" new list is ");
 printlist(first);




return 0;
}

















