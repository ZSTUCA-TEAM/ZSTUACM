/*
*浙江理工大学计算机协会
*严禁直接复制提交
*作弊行为将会被ACM校队禁止入队 
*@Author:   STZG
*@Language: C
*@Time:     2019年8月6日 
*/
/*======================================代码开始=====================================*/ 
#include<stdio.h>
#include<string.h>
int main(){
	char a[150];
	int zm,sz,kg,qt,i;
	while(gets(a)!=NULL){
		zm=0;sz=0;kg=0;qt=0;
		for(i=0;a[i]!='\0';i++){
			if('A'<=a[i] && a[i]<='Z' || 'a'<=a[i] && a[i]<='z'){
				zm++;
			}else if('0'<=a[i] && a[i]<='9'){
				sz++;
			}else if(' '==a[i]){
				kg++;
			}else{
				qt++;
			}
		}
		printf("%d %d %d %d\n",zm,sz,kg,qt);
	}
	return 0;
}
/*======================================代码结束=====================================*/ 
/*
*简单题
*本题未知原因不能用i<strlen(a)作为判断条件
*否则会发生运行错误 
*/
