#include<stdio.h>
#include<stdlib.h>
//NAME-Bishop Bhaumik Roll-1928024
struct queue
{
    int *arr;
    int front;
    int rear;
};
struct queue* allot(int m)
{
    struct queue *temp=(struct queue*)malloc(sizeof(struct queue));
    temp->arr=(int*)malloc(m*sizeof(int));
    temp->front=-1;
    temp->rear=-1;
    return temp;
};
void enqueue(struct queue *t,int m,int x)
{
    if(t->rear==m-1)
    {
        printf("\nQueue is full\n");
    }
    else
        if(t->front==-1 && t->rear==-1)
        {
            t->front=0;
            t->rear=0;
            t->arr[t->rear]=x;
        }
        else
        {
            t->rear=t->rear+1;
            t->arr[t->rear]=x;
        }
}
void dequeue(struct queue *t)
{
    int d;
    if(t->front==-1 && t->rear==-1)
    {
        printf("Queue is empty");
    }
    else
        if(t->front==t->rear)
        {
        d=t->arr[t->front];
        printf("\n%d is the dequed element .",d);
        t->front=t->rear=-1;
        }
        else
        {
            d=t->arr[t->front];
            t->front=t->front+1;
            printf("\n%d is the dequed element .\n",d);
        }
}
void front_show(struct queue *t)
{
    if(t->front==-1&&t->rear==-1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("\nThe front element is : %d \n",t->arr[t->front]);
    }
}
void rear_show(struct queue *t)
{
    if(t->front==-1&&t->rear==-1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("\nThe rear element is : %d \n",t->arr[t->rear]);
    }
}
void display(struct queue *t)
{
    int i;
    if(t->front==-1&&t->rear==-1)
    {
        printf("\n Queue is empty. \n");
    }
    else
    {
        printf("\nThe queue is : \n");
        for(i=t->front;i<t->rear+1;i++)
        {
            printf("\n%d\n",t->arr[i]);
        }
    }
}
void status(struct queue *t,int m)
{
    int i,c=0,j;
    if(t->front==-1&&t->rear==-1)
    {
        printf("\n Queue is empty. \n");
    }
   else if(t->rear==m-1)
    {
        printf("\nQueue is full\n");
    }
    else
    {
    
        for(i=0;i<=t->rear;i++)
        {
            c++;
        }
          j=m-c; 
       
      printf("\nqueue is not empty");
     printf("\n%d spaces left in the queue",j);
      
     
    }
    
}

int main()
{
    int m=0,ch,p,flag=1;
    printf("\nEnter the size of the Queue:");
    scanf("%d",&m);
    struct queue *t=allot(m);
    while(flag==1)
    {
        printf("\nEnter:\n 1. To perform Enqueue \n 2. To perform Dequeue. \n 3. To display the queue. \n 4. To show front elelment. \n 5. To show rear elemnt. \n6.staus display\n 7. Exit \n Enter your choice:\n\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:printf("\n enter value:");
               scanf("%d",&p);
               enqueue(t,m,p);
               break;
        case 2:dequeue(t);
               break;
        case 3:display(t);
               break;
        case 4:front_show(t);
               break;
        case 5:rear_show(t);
               break;
        case 6:status(t,m);
               break;
               case 7:
               return 0;
               break;
        default :printf("\nEnter a correct choice.\n");
        }
    }
    return 0;
}