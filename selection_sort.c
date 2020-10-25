#include<stdio.h>
#include<stdlib.h>
struct pis{
int *arr;
};
struct pis* initialise(int n)
{
    struct pis *temp = (struct pis*)malloc(sizeof(struct pis));
    temp->arr = (int*)malloc(n*sizeof(int));
}

void swap(int *q,int *p)
{
 int t=*q;
 *q=*p;
 *p=t;
}
void sort(struct pis*s,int size)
{
   int i,j,min;
    for(i=0;i<size-1;i++)
    {
        min = i;
        for (j=i+1;j<size;j++)
        {
            if(s->arr[j]<s->arr[min])
                min=j;
        }
         swap(&s->arr[min],&s->arr[i]);
    }
}
void entry(struct pis *s,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("\n enter the value: ");
        scanf("%d",&s->arr[i]);
    }
}
void disp(struct pis*s,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\n",s->arr[i]);
    }
}
int main()
{
    int n;
    printf("\n enter the size of array: ");
    scanf("%d",&n);
 struct pis *s=initialise(n);
 printf("\nenter the values in the array:");
  entry(s,n);
  printf("After selection sort:");
  sort(s,n);
disp(s,n);
}