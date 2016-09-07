#include<stdio.h>
int main()
{
	int arr[100],i,size,a=0;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
		for(i=0;i<size;i++)
	{
		a=a^arr[i];
	}

	printf("%d",a);
	return 0;
}

