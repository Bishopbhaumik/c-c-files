#include<stdio.h>
#include<stdlib.h>
int c=0,s=0;
void Merge(int *arr,int lb,int mid,int ub)
{
	int b[10],i,j,k;
	i=lb;  k=lb;  j=mid+1;
	while(i<=mid && j<=ub)
	{
		if(arr[i]<arr[j])
		{
			b[k]=arr[i];
			i++;
		}
		else if(arr[i]>arr[j])
		{
			b[k]=arr[j];
			j++;
		}
		k++;
		if(i>mid)
		{
			while(j<=ub)
			{
				b[k]=arr[j];
				j++; k++;
			}
		}
		else if(j>ub)
		{
			while(i<=mid)
			{
				b[k]=arr[i];
				i++; k++;
			}
		}
		c++;
	}
	for(i=lb;i<=ub;i++)
	arr[i]=b[i];
}

void printarr(int *arr,int n)
{
	int k;
	for(k=0;k<n;k++)
	printf("%d\t",arr[k]);
}
void Mergesort(int *arr,int lb,int ub)
{
	int mid=(lb+ub)/2;
	if(lb<ub)
	{
		Mergesort(arr,lb,mid);
		Mergesort(arr,mid+1,ub);
		Merge(arr,lb,mid,ub);
	}
}
void comp_swap(int *ar)
{
	printf("\nNo. of comparisons made : %d",ar[0]);
	printf("\nNo. of Swap Operations made : %d",ar[1]);	
}
int main()
{
	int n,me[2];
	int arr[]={22,44,55,33,11,99,66,77,88};
	n=sizeof(arr)/sizeof(int);
	printarr(arr,n);
	Mergesort(arr,0,n-1);
	me[0]=c;
	me[1]=s;
	printf("\nSorted Array in ascending order:\n");
	printarr(arr,n);
	comp_swap(me);
	return 0;
}
