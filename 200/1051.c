#include <stdio.h>

int main(int argc, char *argv[]) {
    int n,s=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
    	if(n%i==0)
    		s=s+i; 
	}
	if(s==n){
		printf("%d is cloze.\n",n);
	}else{
		printf("%d is not cloze.\n",n);
	}
    return 0;
}
