#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    int i,j,k;
    for(i=0;i<=100;i++) {
        for(j=0;j<=100-i;j++) {
        k=100-i-j;
	        if(k%3==0&&i*5+j*3+k/3==100){
		        printf("%d %d %d\n",i,j,k);
	    	}   
    	}    
    }
    return 0;
}
