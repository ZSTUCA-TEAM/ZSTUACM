/*
*�㽭����ѧ�����Э��
*�Ͻ�ֱ�Ӹ����ύ
*������Ϊ���ᱻACMУ�ӽ�ֹ��� 
*@Author:   STZG
*@Language: C
*@Time:     2019��8��6�� 
*/
/*======================================���뿪ʼ=====================================*/ 
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
/*======================================�������=====================================*/ 
/*
*����
*������n�Ժ������һ���س���
*�س������Ա�gets()������ȡ
*������Ҫ��getchar()������ȡ����n���һ���س���
*��ֹgets����һ�����ַ��� 
*/
