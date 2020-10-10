/*
*浙江理工大学计算机协会
*严禁直接复制提交
*作弊行为将会被ACM校队禁止入队 
*@Author:   STZG
*@Language: C
*@Time:     2019年8月1日 
*/
/*======================================代码开始=====================================*/ 
#include <stdio.h>

int main(int argc, char *argv[]) {
	int a[]={6, 28, 496, 8128, 33550336};
	int b[10];
	int m,n,cnt=0;
	while(~scanf("%d%d",&m,&n)&&m+n){
		cnt=0;
		for(int i=0;i<5;i++)
			if(m<=a[i]&&a[i]<=n)b[++cnt]=a[i];
		if(cnt)
			for(int i=1;i<=cnt;i++){
				if(i==cnt) 
                    printf("%d\n",b[i]);     
                else
                    printf("%d ",b[i]);   
			}
		else 
			printf("No\n");
	}
	
    return 0;
}		
/*======================================代码结束=====================================*/ 
/*
*暴力枚举是跑不出来的，能计算到地球毁灭信不信
*所以本题根据提示
*判断每个数是不是在所给的区间范围即可 
*/
