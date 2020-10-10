#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    while (scanf("%d",&n)!=EOF&&n!=0){
        int a,b,c,d,m;
        m=n;
        a=n/1000;
        n=n%1000;
        b=n/100;
        n=n%100;
        c=n/10;
        d=n%10;
        if(a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d==m)
        	printf("Yes\n");
        else
        	printf("No\n");
    } 
    return 0;
}
