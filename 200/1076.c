#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    int i,j;
    while (scanf("%d",&n)!=EOF&&n>=0&&n<=9){
	    for(i=1;i<=n;i++){
	     	for(j=1;j<=i;j++){
		        if(i==j)
		        	printf("%d*%d=%-2d",j,i,i*j);
		        else
		            printf("%d*%d=%-2d ",j,i,i*j);   
		    }
	    	printf("\n");  
	    }
	    printf("\n"); 
    } 
    return 0;
}
