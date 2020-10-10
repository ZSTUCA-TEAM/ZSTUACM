#include<stdio.h>
int main()
{
	int a[200];
	long long n;
	int count,i,j,s,x,f;
	while(scanf("%lld",&n)!=EOF)
	{
		if(n<0)n=-n;
		for(i=0;i<200;i++)
		{
			a[i]=0;
		}
		count=1;
		for(i=1;i<=n;i++)
		{
			s=i;
			j=0;
			while(s>0)
			{
				j++;
				x=s%10;
				a[j]=a[j]+x;
				if(a[j]>9)
				{
					a[j+1]=a[j+1]+a[j]/10;
					a[j]=a[j]%10;
					if(j+1>count)
					{
						count=j+1;
					}
				}
				s=s/10;
				if(j>count)
				{
					count=j;
				}
			}
			j=1;
			while(j<=count || a[j]>9)
			{
				if(a[j]>9)
				{
					a[j+1]=a[j+1]+a[j]/10;
					a[j]=a[j]%10;
					if(count<(j+1))
					{
						count=j+1;
					}
				}
				if(j>count)
				{
					count=j;
				}
				j++;
			}	
		}
		
		for(i=count;i>0;i--)
		{
			printf("%d",a[i]);
		}
		printf("\n");
	}
	return 0;
}
