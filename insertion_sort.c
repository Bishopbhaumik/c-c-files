#include<stdio.h>
# define MAX 8
void inertion_sort(int m,int *arr)
{    int j,temp;
    for(int i=1;i<m;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
void display(int *arr)
{
  for(int i=0;i<MAX;i++)
     {
         printf("\n ENTER DATA %d:",i+1);
         printf("%d",arr[i]);   
}
}
int main()
{
    int arr[MAX];
    int i;
    printf("Enter the value in the array in unsorted manner :");
     for(i=0;i<MAX;i++)
     {
         printf("\n ENTER DATA %d:",i+1);
         scanf("%d",& arr[i]);
     }
     inertion_sort(MAX,arr);
     printf("\n After insertion sort :");
     display(arr);
}