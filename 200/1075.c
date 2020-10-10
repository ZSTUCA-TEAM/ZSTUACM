#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    int i,j;
    while (scanf("%d",&n)!=EOF&&n>=2&&n<=9){
	    for(i=1;i<=2*n-1;i++){
	        if(i<=n){
	            for(j=1;j<=n-i;j++){
	             	printf(" ");
	            }
	     		for(j=i;j<=3*i-2;j++){
	     			printf("*");
	            }
	    		printf("\n");             
	        }else{
	            for(j=1;j<=i-n;j++){
	             	printf(" ");
	            }
	        	for(j=1;j<=4*n-2*i-1;j++){
	     			printf("*");
	            }
	    		printf("\n");     
	        } 
	    } 
	} 
    return 0;
}
