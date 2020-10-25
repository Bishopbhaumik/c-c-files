#include<stdio.h>
//NAME-Bishop Bhaumik Roll-1928024
#define N 6
int queue [N];
int front =-1;
int rear=-1;
void  Enqueue(int x)
{
	if(front==-1&&rear==-1)
	{
		front=rear=0;
		queue[rear]=x;
	}
	else if(((rear+1)%N )==front)
	{
		printf("queue is full \n");
	}
	else
	{
		rear=(rear+1)%N;
		queue[rear]=x;
	}
}
void Dequeue()
{
	if (front==-1&&rear==-1)
	{
		printf("queue empty \n");
	}
	else if(front==rear)
	{

		front=rear=-1;
	 }
	 else
	 {
	 	printf("element to be deleetd %d\n", queue[front]);
	 	front=(front+1)%N;
	 }
}
void display()
{
	int i=front;
	if (front==-1 && rear==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("queue is \n");
		while(i!=rear)
		{
			printf(" %d \n", queue[i]);
			i=(i+1)%N;
		}
		printf("%d\n", queue[rear]);
	}
}
void front_show()
{
    printf("the front is :%d\n",queue[front]);
}
void rear_show()
{
	printf("the rear value is %d\n",queue[rear]);
}
int main()
{

    int a,c=1,d;
    while(c==1)
    {
        printf("1.for Enqueue\n2.for deque\n3.for display.\n4.front show\n5.rear show.\n6.exit");
        scanf("%d",&d);
        switch(d)
        {
        case 1:
            printf("\nenter value:");
            scanf("%d",&a);
            Enqueue(a);
            break;
        case 2:
           Dequeue();
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
            return 0;
        }
    }
    return 0;
}
