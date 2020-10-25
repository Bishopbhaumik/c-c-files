#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct poly{
int data;
int pow;
struct poly *next;
};
struct poly1{
int data;
int pow;
struct poly1 *next;
};
struct polyr{
int data;
int pow;
struct polyr *next;
};
struct poly *head;
struct poly1 *head1;
struct polyr *head2;
void create()
{
    struct poly *newnode,*temp;
    head=NULL;
     int c=1;
      while(c==1)
      {
     newnode=(struct poly*)malloc(sizeof(struct poly));
      printf("\n Enter the coefficient:");
        scanf("%d",&newnode->data);
        printf("\nenter the power of  the corresponding coefficient:");
        scanf("%d",&newnode->pow);
        newnode->next=0;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
 {
        temp->next=newnode;
        temp=newnode;
}
 printf("\n Do you want to continue?\n press 1 for continue 0 for exit: ");
 scanf("%d",&c);
 }
}
void display()
{
    struct poly *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
    if(ptr->next==NULL)
        printf("%dx^%d",ptr->data,ptr->pow);
        else if(ptr->pow==0)
        {
            printf("%d",ptr->data);
        }
    else{
          printf("%dx^%d",ptr->data,ptr->pow);
       printf("+");
    }
    ptr=ptr->next;
  }
}
void create1()
{
    struct poly1 *newnode,*temp;
    head1=NULL;
     int c=1;
      while(c==1)
      {
     newnode=(struct poly1*)malloc(sizeof(struct poly1));
      printf("\n Enter the coefficient:");
        scanf("%d",&newnode->data);
        printf("\nenter the power of  the corresponding coefficient:");
        scanf("%d",&newnode->pow);
        newnode->next=0;
    if(head1==NULL)
    {
        head1=temp=newnode;
    }
    else
 {
        temp->next=newnode;
        temp=newnode;
}
 printf("\n Do you want to continue?\n press 1 for continue 0 for exit: ");
 scanf("%d",&c);
 }
}
void display1()
{
    struct poly1 *ptr;
    ptr=head1;
    while(ptr!=NULL)
    {

 if(ptr->next==NULL)
        printf("%dx^%d",ptr->data,ptr->pow);
        else if(ptr->pow==0)
        {
            printf("%d",ptr->data);
        }
    else{
          printf("%dx^%d",ptr->data,ptr->pow);
       printf("+");
    }
    ptr=ptr->next;
  }
}

void polyadd()
{
    struct polyr *rear,*m;
    struct poly *c;
    struct poly1 *temp;
    head2=NULL;
    c=head;
    temp=head1;
    m=head2;
    while(c!=NULL&&temp!=NULL)
    {
        rear=(struct polyr*)malloc(sizeof(struct polyr));
        if(c->pow==temp->pow)
        {
            rear->data=c->data+temp->data;
            rear->pow=c->pow;
             c=c->next;
        temp=temp->next;
        }
     else if(c->pow>temp->pow)
        {
            rear->data=c->data;
            rear->pow=c->pow;
             c=c->next;
        }
        else if(c->pow<temp->pow)
        {
            rear->data=temp->data;
            rear->pow=temp->pow;
             temp=temp->next;
        }
        rear->next=NULL;
        if(head2==NULL)
        {
            head2=m=rear;
        }
        else{
                m->next=rear;
                m=rear;

        }
    }

}
void polysub()
{
     struct polyr *rear,*m;
    struct poly *c;
    struct poly1 *temp;
    head2=NULL;
    c=head;
    temp=head1;
    m=head2;
    while(c!=NULL&&temp!=NULL)
    {
        rear=(struct polyr*)malloc(sizeof(struct polyr));
         if(c->pow==temp->pow)
        {
            rear->data=c->data-temp->data;
            rear->pow=c->pow;
             c=c->next;
        temp=temp->next;
        }
     else if(c->pow>temp->pow)
        {
            rear->data=c->data;
            rear->pow=c->pow;
             c=c->next;
        }
        else if(c->pow<temp->pow)
        {
            rear->data=temp->data;
            rear->pow=temp->pow;
             temp=temp->next;
        }

        rear->next=NULL;
        if(head2==NULL)
        {
            head2=m=rear;
        }
        else{
                m->next=rear;
                m=rear;

        }
    }
}
void disp()
{
     struct polyr *ptr;
    ptr=head2;
    while(ptr!=NULL)
    {
        if(ptr->next==NULL)
        printf("%dx^%d",ptr->data,ptr->pow);
        else if(ptr->pow==0)
        {
            printf("%d",ptr->data);
        }
    else{
          printf("%dx^%d",ptr->data,ptr->pow);
       printf("+");
    }
    ptr=ptr->next;
  }

}

int main()
{
    create();
    display();
    printf("\n\nthe second polynomial :");
    create1();
    display1();
    printf("\n\t enter your choice\n\t 1 for addition\t 2for substruction.");
    int n;
    scanf("%d",&n);
    switch(n)
    {
case 1:
    printf("\n after adding---->\n");
    polyadd();
    disp();
    break;
case 2:
    printf("\nAfter substracting--->");
    polysub();
    disp();
    break;
default:
    printf("\nenter a correct choice.");
    }
    return 0;
}
