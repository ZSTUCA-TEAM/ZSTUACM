#include <stdio.h>
int main(int argc, char *argv[]) {
    int n;
    while(scanf("%d",&n)!=EOF && n!=0){
        int i;
    	int k;
    	k=0;
     	for(i=n-1;i>1;i--){
        	if(n%i==0)
        		k=1;
        }
    	if(n==1)
    		k=1;
	    if(k==0)
	    	printf("Yes\n");
	    else
	    	printf("No\n");  
    }
    return 0;
}
