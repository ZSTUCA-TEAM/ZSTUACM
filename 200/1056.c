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
            scanf("%d",&a);//ÿ������һ��������ѭ��n�Σ���Ҫ��ʱ������������
            b=b+a; 
        }
		printf("%d\n",b);
    }
}
