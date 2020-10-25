#include<stdio.h>
#include<stdlib.h>
#define size 5
void enqueue();
void dequeue();
void display();
void front_show();
void rear_show();
int front=-1,rear=-1;
int queue[size];
void main ()
{
    int ch;
    while(ch!=6)
    {
        printf("\n1. Enqueue an element\n2. Dequeue an element\n3. Display the queue\n4. Display Front \n5. Display Rear \n6. Exit\n");
        printf("\nEnter your choice  :  ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            front_show();
            break;
            case 5:
            rear_show();
            break;
            case 6:
            exit(0);
            break;
            default:
            printf("\nEnter valid choice??\n");
        }
    }
}
void enqueue()
{
    int item;
    printf("\nEnter the element\n");
    scanf("%d",&item);
    if((rear+1)%size==front)
    {
        printf("\nOVERFLOW");
        return;
    }
    else if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
    }
    else
    if(rear==size-1&&front!=0)
    {
        rear=0;
    }
    else
    {
        rear=(rear+1)%size;
    }
    queue[rear]=item;
    printf("\nValue inserted ");
}
void dequeue()
{
    int item;
    if(front==-1&rear==-1)
    {
        printf("\nUNDERFLOW\n");
        return;
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    if(front==size-1)
    {
        front=0;
    }
    else
        front=front+1;
}
void display()
{
   int i;
   if(front==-1)
      printf("\nCircular Queue is Empty!!!\n");
   else
   {
      i=front;
      printf("\nCircular Queue Elements are : \n");
      if(front<=rear)
      {
          while(i<=rear)
          printf("%d\n",queue[i++]);
      }
      else
      {
          while(i<=size-1)
            printf("%d\n", queue[i++]);
          i=0;
          while(i<=rear)
            printf("%d\n",queue[i++]);
      }
   }
}
void front_show()
{
    printf("Front : %d",queue[front]);
}
void rear_show()
{
    printf("Rear : %d",queue[rear]);
}