#include<stdio.h>
int abs(int);
int main()
{
	int i,flag=0,size,arr[100];
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		if(arr[abs(arr[i])]>0 && arr[abs(arr[i])]!=999)
		{
			arr[abs(arr[i])]=arr[abs(arr[i])]*(-1);
		}
		else if(arr[abs(arr[i])]<0 || arr[abs(arr[i])]==999)
		{
			printf("yes");
			flag=1;
			break;
		}
		else
		{
			arr[abs(arr[i])]=999;
		}
	
	}
		if(flag==0)
		printf("no");
		return 0;
}
int abs(int a)
{
	if(a>0)
	return a;
	else
	return a*(-1);
}
