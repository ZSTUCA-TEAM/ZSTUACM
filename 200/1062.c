#include <stdio.h>

int main(int argc, char *argv[]) {
    int n,i,sum,x;
  	int t,m;
    scanf("%d",&m);//输入测试数据组数
    while(scanf("%d",&n)!=EOF && n!=0 && m!=0)
    { 
    	sum=0;
        for(i=1;i<=n;i++){ 
           	scanf("%d",&x);
            sum=sum+x;
        }
        m=m-1;
    	printf("%.2f\n",(double)sum/n);
    }
    return 0;
}
