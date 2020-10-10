#include <stdio.h>

int main(int argc, char *argv[]) {
    int n,x,y;
    y=0;
    scanf("%d",&n);
    for(x=1;x<=n;x++) {
        if(x%2==0)
        	y=y-x;
        else
        	y=y+x;
    } 
    printf("%d",y);
    return 0;
}
