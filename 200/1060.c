#include <stdio.h>

int main(int argc, char *argv[]) {
    int n,i,max,x;
  	int t,m;
    scanf("%d",&m);//输入测试数据组数
    while(scanf("%d",&n)!=EOF && n!=0 && m!=0)
    { 
    	max=-1e9;
        for(i=1;i<=n;i++){ 
           	scanf("%d",&x);
            if(x>max)
            	max=x; 
        }
        m=m-1;
    	printf("%d\n",max);
    }
    return 0;
}
