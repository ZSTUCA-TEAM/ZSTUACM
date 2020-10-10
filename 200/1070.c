#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    while (scanf("%d",&n)!=EOF&&n!=0){
        int a,b,c,m;
        m=n;
        a=n/100;
        n=n%100;
        b=n/10;
        c=n%10;
        if(a*a*a+b*b*b+c*c*c==m)
        	printf("Yes\n");
        else
        	printf("No\n");
    } 
    return 0;
}
