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
//�����Լ�� 
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
//����С������ 
int min_public_num(int t1,int t2)
{
  return t1/max_public_num(t1,t2)*t2;
}
int main(int argc, char *argv[]) {
	int a,b,c;
	while(~scanf("%d%d%d",&a,&b,&c)){
		if(a==0||b==0||c==0)break;
		int num=min_public_num(min_public_num(a,b),c);//����������С������ 
       	printf("%d %d %d\n",num/a,num/b,num/c);
	}
    return 0;
}				
/*======================================�������=====================================*/ 
/*
*�����Լ������С������ 
*��ת�����-�ݹ鷨 
*���������С������ 
*/
