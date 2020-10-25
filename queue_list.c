#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Name-Bishop Bhaumik ROLL-1928024
struct qule{
int data;
struct qule *next;
};
struct qule  *front=NULL;
struct qule *rear=NULL;

void enque(int x)
{
     struct qule *newd;
    newd=(struct qule*)malloc(sizeof(struct qule));
    newd->data=x;
    newd->next=NULL;
    if(rear==NULL)
    {
        front=rear=newd;
        rear->next=front;
    }
    else
    {
      rear->next=newd;
      rear=newd;
      rear->next=front;
    }  
}
void deque()
{
    struct qule *temp;
    temp=front;
    if(front==NULL && rear==NULL)
    {
      printf("UNDERFLOW");
    }
    else if(front==rear)
    {
        front=rear=NULL;
        free(temp);
    }
    else
    {
      front=front->next;
      rear->next=front;
      free(temp);
    }
    
}
void front_show()
{
   if(front==NULL && rear==NULL)
    {
      printf("QUEUE is empty");
    }
    else
    {
        printf("\n the data in the front is :%d\n",front->data);
    }
    
}
void rear_show()
{
  printf("the data in the rear is %d",rear->data);
}
void disp()
{
    struct qule* ptr;
    ptr=front;
    if(front==NULL && rear==NULL)
    {
      printf("QUEUE IS EMPTY.");
    }
    else
    {
      while(ptr->next!=front)
      {
          printf("data:%d\n",ptr->data);
          ptr=ptr->next;
      }
      printf("data:%d",ptr->data);
    } 
}
int main()
{
    int ch=1,n,p;
    while(ch==1)
    {
        printf("\n::::::::::::MENU::::::::::::");
        printf("\n1.ENQUE.");
        printf("\n2.DEQUE.");
        printf("\n3.DISPLAY.");
        printf("\n4.FRONT SHOW");
        printf("\n 5.REAR SHOW");
        printf("\n6.EXIT.");
        printf("\nENTER CHOICE:-");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            printf("\nenter data:");
            scanf("%d",&p);
            enque(p);
            break;
            case 2:
            deque();
            break;
            case 3:
            disp();
            break;
            case 4:
            front_show();
            break;
            case 5:
            rear_show();
            break;
            case 6:
            return 0;
        }
    }
    return 0;
}