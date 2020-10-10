#include <stdio.h>

int main(int argc, char *argv[]) {
    int n,m,t,i,s;
	int a[100];
    scanf("%d",&t);
    while (t--){
    	scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d",&a[i]);     
        }
        for(i=1;i<=n;i++){ 
    		if(i!=n) 
            	printf("%d ",a[i]);
            else
            	printf("%d",a[i]);
        }
        printf("\n");    
    }
    return 0;
}
