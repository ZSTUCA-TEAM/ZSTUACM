#include <stdio.h>

int main(int argc, char *argv[]) {
    int a,b;
   	while(scanf("%d%d",&a,&b)!=EOF)     //特别注意这行的写法
   	{
       	printf("%d\n",a+b);
   	}
    return 0;
}
