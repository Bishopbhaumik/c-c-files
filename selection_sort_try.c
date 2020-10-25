#include<stdio.h>
void swap(int *m, int *n)
{
    int t=*m;
    *m=*n;
    *n=t;
}
void sort(int arr[],int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min = i;
        for (j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        swap(&arr[min],&arr[i]);
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
int main()
{
    int n,i;
    printf("Enter the length of the array : \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    display(arr,n);
}