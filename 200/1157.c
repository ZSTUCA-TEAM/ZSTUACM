#include<stdio.h>
#include<string.h>
int main()
{
	int n,f,i;
	char a[200];
	while(~scanf("%s",a))
	{
		n=strlen(a);
		f=n;
		for(i=0;i<n;i++)
		{
			if(a[i]!='*') f=i;
		}
		for(i=0;i<f;i++)
		{
			if(a[i]!='*')
			{
				printf("%c",a[i]);
			}
		}
		for(i=f;i<n;i++)
		{
			printf("%c",a[i]);
		}
		printf("\n");
	}
	return 0;
}
