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
//求最大公约数 
int max_public_num(int s1,int s2)
{
    if(s1<s2){
        int tem = s1;
        s1=s2;
        s2=tem;
    }
    if(s1%s2==0){
        return s2;
    }
    return max_public_num(s2,s1%s2);
}
//求最小公倍数 
int min_public_num(int t1,int t2)
{
  return t1/max_public_num(t1,t2)*t2;
}
int main(int argc, char *argv[]) {
	int a,b,c;
	while(~scanf("%d%d%d",&a,&b,&c)){
		if(a==0||b==0||c==0)break;
		int num=min_public_num(min_public_num(a,b),c);//三个数的最小公倍数 
       	printf("%d %d %d\n",num/a,num/b,num/c);
	}
    return 0;
}				
/*======================================代码结束=====================================*/ 
/*
*求最大公约数和最小公倍数 
*碾转相除法-递归法 
*多个数的最小公倍数 
*/
