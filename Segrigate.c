#include<stdio.h>

void swap(int*,int *);
void segrigate(int[],int);

int main(){
	int i,n,a[100];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	segrigate(a,n);
	
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	
	return 0;
}

void segrigate(int a[],int x)
{
	int left=0,right=x-1;
	
	while(left<right)
	{
		while(a[left]%2==0 && left<right)
		{
			left++;
		}
		
		while(a[right]%2!=0 && left<right)
		{
			right--;
		}
		
		if(left<right)
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
