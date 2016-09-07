#include<stdio.h>
int main()
{
	int arr[100],sum=0,seriesSum=0,size,missing,i;
	scanf("%d",&size);
	for(i=0;i<size-1;i++)
	   scanf("%d",&arr[i]);
	for(i=0;i<size-1;i++)
	   sum=sum+arr[i];
	seriesSum=(size*(size+1))/2;
	missing=seriesSum-sum;
	printf("%d",missing);
	return 0;
}
	

