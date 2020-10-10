#include <stdio.h>

int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
         //输入的是0 0就结束
        if(a==0 && b==0)
            break;
       	printf("%d\n",a+b);//这里是输入不是结束数据的处理
    }
}
