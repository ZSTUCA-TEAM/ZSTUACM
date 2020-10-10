#include <stdio.h>

int main(int argc, char *argv[]) {
    int x;
    int a,b,c,d,e,f;
    scanf("%d",&x);
    a=1;
    b=x;
    int m[5];
    while(b!=0){
        m[5-a+1]=b%10;
        b=b/10;
        a++;
    }
    if(m[5]==m[1] &&m[4]==m[2])
		printf("Yes");
	else
		printf("No");
    return 0;
}
