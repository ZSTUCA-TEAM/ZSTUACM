#include <stdio.h>

int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
         //�������0 0�ͽ���
        if(a==0 && b==0)
            break;
       	printf("%d\n",a+b);//���������벻�ǽ������ݵĴ���
    }
}
