#include<stdio.h>
int main()
{
	int N=1000,n,A[N],c=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		scanf("%d ",&A[n]);
	}
for(int i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	{
		for(int h=0;h<n;h++)
		{
			if(A[h]==A[j]+A[i])
			{
			c++;
		}}
	}
}
printf("%d",c);
return 0;
}
