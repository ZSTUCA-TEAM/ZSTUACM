#include <stdio.h>

int main(int argc, char** argv) {
    int n,m;
    while (scanf("%d",&n)!=EOF){
	    int a[5];
	    m=n;
	    int i,j,sum=0;
	    for(i=0;i<5;i++){
	        a[i]=n%10;
	        n/=10;
	        sum=sum+a[i]*a[i]*a[i]*a[i]*a[i];
	    } 
	    if(sum==m) printf("Yes\n");
	    else printf("No\n") ;
    } 
    return 0;
}
