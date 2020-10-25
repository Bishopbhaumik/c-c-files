#include<stdio.h>
#include<stdlib.h>
struct node{
             int a;
             struct node *ne;

           };
struct node* createlist()
{
 struct node *temp=(struct node*)malloc(sizeof(struct node));
  temp->a=0;
  temp->ne=NULL;
  return temp;

}
struct node* head = NULL;

void insert(int x)
{
   struct node* new_node = (struct node*) malloc(sizeof(struct node));
   new_node->a = x;
   new_node->ne = head;
   head = new_node;
}
void display()
{
    int c=0;
   struct node* ptr;
   ptr = head;
   while(ptr!=NULL)
   {
       printf("%d\n",ptr->a);
       ptr=ptr->ne;
       c++;
   }
   printf("the number of members in the list is %d",c);
}

 void inserthead(int data)
{
struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->a = data; // Link data part
        newNode->ne = head; // Link address part

        head = newNode;          // Make newNode as first node

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}

int  main()
{
    int n,p,t;
    struct node *L;
    L=createlist();
    printf(L);
    printf("enter the range :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\n enter the number :");
    scanf("%d",&p);
        insert(p);

    }
     int q;
    printf(" \n enter a value :");
    scanf("%d",&q);
    display();
    printf(" \n enter a value to add :");
    scanf("%d",&t);
     inserthead(t);
     display();

     return 0;
}
