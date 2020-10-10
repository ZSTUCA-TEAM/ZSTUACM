#include <stdio.h>
#include <string.h>
/*
int main(int argc, char *argv[]) {
    int x;
    int a,b,c,d,e,f;
    scanf("%d",&x);
    a=0;
    b=x;
    int m[6];
    while(b!=0){
        m[5-a]=b%10;
        b=b/10;
        a++;
    }
    c=0;
    printf("%d\n",a);
    while(c<a){
	    printf("%d",m[5-c]);
	    c++;   
	}
    return 0;
}
*/
int main(int argc, char *argv[]) {
    char num[100];
    scanf("%s",num);
    int len=strlen(num);
    printf("%d\n",len);
    for(int i=len-1;i>=0;i--){
	    printf("%c",num[i]);
	}
    return 0;
}
