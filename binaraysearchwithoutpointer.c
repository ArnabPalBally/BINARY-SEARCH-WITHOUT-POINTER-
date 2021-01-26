#include<stdio.h>
void binsearch(int a[],int n,int start,int end,int key)
{
	if(start<end)
	{
		int mid=(start+end)/2;
		if(a[mid]==key)
		{
			printf("key is at a position:%d",mid);
		}
		else if(key>(a[mid]))
		{
			start=mid+1;
			binsearch(a,n,start,end,key);
		}
		else if(key<(a[mid]))
		{
			end=mid-1;
			binsearch(a,n,start,end,key);
		}
	
	}
	else
	{
		printf("invalid input");
	}
}
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(a)/sizeof(a[0]);
	int key;
	printf("ENTER A KEY TO SEARCH:");
	scanf("%d",&key);
	int start = 0;
	int end = sizeof(a)/sizeof(a[0])-1;
	binsearch(a,n,start,end,key);
}
