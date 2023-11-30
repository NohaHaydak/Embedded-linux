#include<stdio.h>
int binarySearch(int*arr,int size, int key)
{
	int low=0;
	int high=size;
	int mid=(low+high)/2;
	while(high>low)
	{
		if(arr[mid]=key)
		{
			return mid;
		}
		else if(arr[mid]<key)
		{
			high=mid-1;
		}
	
		else if(arr[mid]>key)
		{
			low=mid+1;
		}
	}
	return -1;
}

void main(void)
{
	int key=5,index;
	int arr[5]={9,5,3,7,1};	
	index=binarySearch(arr,5,5 );
	printf("found index number=%d",index);
}

