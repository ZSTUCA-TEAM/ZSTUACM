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
int main()
{
	int n,a,e,i,o,u,j,k;
	while(scanf("%d",&n)!=EOF){
		getchar();
		for(k=1;k<=n;k++){
			char s[150];
			a=0;e=0;i=0;o=0;u=0;
			gets(s);
			for(j=0;j<=strlen(s)-1;j++){
				if(s[j]=='a'){
					a++;
				}else if(s[j]=='e'){
					e++;
				}else if(s[j]=='i'){
					i++;
				}else if(s[j]=='o'){
					o++;
				}else if(s[j]=='u'){
					u++;
				}
			}
			if(k==n){
				printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,e,i,o,u);
			}else{
				printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n\n",a,e,i,o,u);
			}	
		}
	}
	return 0;
}
/*======================================代码结束=====================================*/ 
/*
*简单题
*在输入n以后会输入一个回车符
*回车符可以被gets()函数读取
*所以需要用getchar()函数读取输入n后的一个回车符
*防止gets读到一个空字符串 
*/
