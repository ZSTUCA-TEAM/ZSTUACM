#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    int i,j;
    while (scanf("%d",&n)!=EOF&&n>=1&&n<=9){
	    for(i=1;i<=n;i++){
	     	for(j=1;j<=n-i;j++){
	            printf(" ");
	        }
	        for(j=i;j<=3*i-2;j++){
	        	printf("*");
	        }
	        printf("\n");
	    } 
	}
    return 0;
}
