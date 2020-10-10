#include <stdio.h>

int main(int argc, char *argv[]) {
    int n,i,min,x;
  	int t,m;
    scanf("%d",&m);//输入测试数据组数
    while(scanf("%d",&n)!=EOF && n!=0 && m!=0)
    { 
    	min=1e9;
        for(i=1;i<=n;i++){ 
           	scanf("%d",&x);
            if(x<min)
            	min=x; 
        }
        m=m-1;
    	printf("%d\n",min);
    }
    return 0;
}
