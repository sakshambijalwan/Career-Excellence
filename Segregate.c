#include<stdio.h>
void swap(int*,int*);
void segregate(int[],int);
int main()
{
	int size,i,arr[100];
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	segregate(arr,size);
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
	void segregate(int a[],int n)
	{
		int left=0,right=n-1;
		while(right>left)
		{
			while(a[left]%2==0 && right>left)
			{
			left++;
			}
			while(a[right]%2!=0 && right>left)
			{
				right--;
			}
			if(right>left)
			{
				swap(&a[left],&a[right]);
				left++;
				right--;
			}
		}
	}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
		
