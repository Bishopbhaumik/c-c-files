#include<stdio.h>
#include<conio.h>
int stack[5];
int top = -1;
void push(){
	if(top == 5-1){
		printf("STACKOVERFLOW");
	}
	else{
			int x;
			printf("Enter data");
	scanf("%d",&x);
		top=top+1;
	stack[top] = x;
	}
}

void pop(){
	if(top == -1)
	{
		printf("stack is underflow");
	}
	else{
			int item;
		item = stack[top];
        top=top-1;
		printf("The top most element of stack is %d",item);
	}
}

void peek(){
	
	if(top == -1){
		printf("STACK is empty");
	}
	else{
		printf("The top most element of the stack is %d", stack[top]);
	}
}

void display(){
	int i;
	for(i=top; i>=0; i--){
		printf("%d\n",stack[i]);
	
		
	}
}
int main(){
	int x;
	x=1;
//	printf("press 0 for menu");
//	scanf("%d",x);
	int ch;
	while(x==1){
		printf("\npress 1 for push\n");
		printf("press 2 for pop\n");
		printf("press 3 for peek\n");
		printf("press 4 for display\n");
        printf("\nEner 5 to exit.");
		
			printf("\n Enter your choice - ");
			scanf("%d", &ch);
	
	switch (ch)
	{
		case 1:
		push();
		break;
		case 2:
			pop();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
            break;
		case 5:
        return 0;
		break;
		default :
		printf("enter a correct option");
	}
	}
}