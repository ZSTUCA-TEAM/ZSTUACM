/*
*�㽭����ѧ�����Э��
*�Ͻ�ֱ�Ӹ����ύ
*������Ϊ���ᱻACMУ�ӽ�ֹ��� 
*@Author:   STZG
*@Language: C
*@Time:     2019��8��1�� 
*/
/*======================================���뿪ʼ=====================================*/ 
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
/*======================================�������=====================================*/ 
/*
*���ж�a+b==c
*����ǣ��ֽ�ÿһ����λ������vis��¼ÿ�����ֵĳ��ִ��� 
*�ж�ÿһ�����ǲ��Ǵ��� 
*/														
