#include<stdio.h>
#include<stdlib.h>
int c=0,s=0;
void swap(int *arr,int j)
{
	int temp;
	temp=arr[j];
	arr[j]=arr[j-1];
	arr[j-1]=temp;
	s++;
}

void printarr(int *arr,int n)
{
	int k;
	for(k=0;k<n;k++)
	printf("%d\t",arr[k]);
}
void Insertionsort(int *arr,int n)
{
	int min,i,j,b[2];
	for(i=1;i<n;i++)
	{
		for(j=i;j>=0;j--)
		{
		if(arr[j]<arr[j-1])
		swap(arr,j);
		c++;
		}
	}
}
void comp_swap(int *ar)
{
	printf("\nNo. of comparisons made : %d",ar[0]);
	printf("\nNo. of Swap Operations made : %d",ar[1]);	
}
int main()
{
	int n,in[2];
	int arr[]={22,44,55,33,11,99,66,77,88};
	n=sizeof(arr)/sizeof(int);	
	printarr(arr,n);
	Insertionsort(arr,n);
	in[0]=c;
	in[1]=s;
	printf("\nSorted Array in ascending order:\n");
	printarr(arr,n);
	comp_swap(in);
	return 0;
}
