#include<stdio.h>
int s=0,c=0;
void swap(int *q,int *p)
{
 int t=*q;
 *q=*p;
 *p=t;
 s++;
}
int partition(int *ar,int lb,int ub)
{
    int pivot,start,end;
    pivot=ar[lb];
    start=lb;
    end=ub;
    while(start<end)
    {
    while(ar[start]<=pivot)
    {
        start++;
    }
    while(ar[end]>pivot)
    {
        end--;
    }
    
   if(start<end)
   {
     swap(&ar[start],&ar[end]);
   }
   c++;
 }
 swap(&ar[lb],&ar[end]);
  return end;
}
void quick(int *ar,int lb,int ub)
{
    int loc;
    if(lb<ub)
    {
       loc=partition(ar,lb,ub);
       quick(ar,lb,loc-1);
       quick(ar,loc+1,ub);
    }
}
void display(int arr[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void comp_swap(int *ar)
{
	printf("\nNo. of comparisons made : %d",ar[0]);
	printf("\nNo. of Swap Operations made : %d",ar[1]);	
}
int main()
{
    int n,i,b[2];
	int arr[]={22,44,55,33,11,99,66,77,88};
	n=sizeof(arr)/sizeof(int);
    printf("\n before sorting----->");
    display(arr,n);
    quick(arr,0,n);
    b[0]=c;
    b[1]=s;
    printf("\n After sorting------>");
    display(arr,n);
    comp_swap(b);
    return 0;
}
