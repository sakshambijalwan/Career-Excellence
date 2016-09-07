#include<stdio.h>
int main()
{
	int size,i,maximum=0,arr[100],index;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		arr[arr[i]%size]+=size;
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]/size>maximum)
		{
		maximum=arr[i]/size;
		index=i;
		}
	}
	printf("%d",index);
	return 0;
}
