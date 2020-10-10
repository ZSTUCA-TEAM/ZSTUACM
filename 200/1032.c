#include <stdio.h>
 
int main(int argc, char *argv[]) {
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=1500+(a+b)*5;
    if(c<1600)
    	printf("D");
    else if(c<1699)
        printf("C");
    else if(c<1799)
    	printf("B");
    else
        printf("A");
    return 0;
}
