#include <stdio.h>

int main(int argc, char *argv[]) {
    int n,x;
    int sum=0;
    for(x=1;x<=10;x++) {
    	scanf("%d",&n);
        sum=sum+n;
    } 
    printf("ave=%0.1f",sum/10.0);
    return 0;
}
