#include <stdio.h>
 
#include <string.h>
 
#include<stdlib.h>
 
 
 
long long n,a[1010][1010],i,j,m;
double d;
long long s;
int main()
{
    while(scanf("%lld%lld%lf",&n,&m,&d)!=EOF&&n>=1&&1<=m)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%lld",&a[i][j]);
                if(a[i][j]!=0)
                {
                   s=s+1;
                }
            }
        }
        printf("%lld %lld\n",n,m);
        if((s/(double)(n*m))<d)
        {
             
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if(a[i][j]!=0)
                    {
                        printf("%lld %lld %lld\n",i,j,a[i][j]);
                    }
                }
            }
        }
        else
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if(j>0)
                    {
                        printf(" ");
                    }
                    printf("%lld",a[i][j]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
 

