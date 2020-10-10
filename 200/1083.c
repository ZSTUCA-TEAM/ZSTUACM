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
	int a,b,c;
	while(~scanf("%d%d%d",&a,&b,&c)){
		if(a+b!=c){
			printf("NO!\n");
		}else{
			int vis[10];
			for(int i=1;i<10;i++)vis[i]=0; 
			while(a){
				vis[a%10]++;
				a/=10; 
			}
			while(b){
				vis[b%10]++;
				b/=10; 
			}
			while(c){
				vis[c%10]++;
				c/=10; 
			}
			int k=1;
			for(int i=1;i<10;i++)if(!vis[i])k=0;
			if(k)
				printf("YES!\n");
			else
				printf("NO!\n");
		}
	}
	
    return 0;
}	
/*======================================代码结束=====================================*/ 
/*
*先判断a+b==c
*如果是，分解每一个三位数，用vis记录每个数字的出现次数 
*判断每一个数是不是存在 
*/														
