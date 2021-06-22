#include<stdio.h>
#include<stdlib.h>
int c=0,d=0;
void swap(int *arr,int start,int min)
{
	int temp;
	temp=arr[min];
	arr[min]=arr[start];
	arr[start]=temp;
	d++;
}
int minIndex(int *arr,int i,int size)
{
	int j,min=i,b[2];
	for(j=i+1;j<size;j++)
	{
		if(arr[j]<arr[min])
		min=j;
		c++;
	}
	return min;
}
void printarr(int *arr,int n)
{
	int k;
	for(k=0;k<n;k++)
	printf("%d\t",arr[k]);
}
void selectionsort(int *arr,int n)
{
	int min,i,p=0;
	for(i=0;i<n-1;i++)
	{
		min=minIndex(arr,i,n);
		swap(arr,i,min);
	}
}
void comp_swap(int *ar)
{
	printf("\nNo. of comparisons made : %d",ar[0]);
	printf("\nNo. of Swap Operations made : %d",ar[1]);	
}
int main()
{
	int n,b[2];
	int arr[]={22,44,55,33,11,99,66,77,88};
	n=sizeof(arr)/sizeof(int);
	printarr(arr,n);
	selectionsort(arr,n);
	b[0]=c;
	b[1]=d;
	printf("\nSorted Array in ascending order:\n");
	printarr(arr,n);
	comp_swap(b);
	return 0;
}
