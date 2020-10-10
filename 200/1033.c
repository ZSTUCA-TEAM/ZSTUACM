#include <stdio.h>
 
int main(int argc, char *argv[]) {
    int a,b,c;
    scanf("%d %d",&a,&b);
	if((a<=6||b<=2)||(a<=20&&b<5))
    	printf("yes");
    else
        printf("no");
    return 0;
}
