#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    int i,s,t;
    while (scanf("%d",&n)!=EOF&&n!=0){
        s=0;
        t=1;
	    for(i=1;i<=n;i++){
	        t*=i;
	        s+=t;
	    }
	    printf("%d\n",s);  
    } 
    return 0;
}
