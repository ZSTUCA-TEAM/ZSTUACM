#include <stdio.h>

int main()
{
    int n,i;
    int a,b;
    while(scanf("%d",&n)!=EOF && n!=0)
    {
    	b=0;
        for(i=1;i<=n;i++)
        { 
            scanf("%d",&a);//每次输入一个数，共循环n次，需要的时候做其他处理
            b=b+a; 
        }
		printf("%d\n",b);
    }
}
