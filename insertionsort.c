#include<stdio.h>
void insertion_sort(int arr[],int size)
{
int i,j,n;
for(i=1;i<size;i=i+1)
	{
	n=arr[i];
	j=i-1;
	while(j>=0&&arr[j]>n)
		{
		arr[j+1]=arr[j];
		j=j-1;
		}
	arr[j+1]=n;
	}

}
void main()
{
int arr[10]={12,33,44,11,22,55,9,45,67,9};
int i;
insertion_sort(arr,10);
for(i=0;i<10;i=i+1)
	printf("%d ",arr[i]);

}
