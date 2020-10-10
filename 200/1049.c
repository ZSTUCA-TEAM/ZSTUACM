#include <stdio.h>
int main(int argc, char *argv[]) {
    int n,x,t,y;
    y=0;
    t=1;
    scanf("%d",&n);
    for(x=1;x<=n;x++){
    	t=t*x;
    	y=y+t;   
    }
    printf("%d",y);
    return 0;
}
