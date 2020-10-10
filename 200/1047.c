#include <stdio.h>

int main(int argc, char *argv[]) {
    int n,y;
    y=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
     	for(int j=1;j<=i;j++){
        	y=y+j;
    	}
    }
    printf("%d",y);
    return 0;
}
