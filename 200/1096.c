#include <stdio.h>

int main(int argc, char *argv[]) {
    int n,m,t,i,s;
    int a[100];
    while (scanf("%d",&t)!=EOF&&t<20){
        for(i=1;i<=t;i++){
            scanf("%d",&a[i]);      
        }
        m=1;
        scanf("%d",&s); 
        for(i=1;i<=t;i++){
        	if(a[i]!=s){
                if(m==1)    
                	printf("%d",a[i]);
                else
            		printf(" %d",a[i]);
            	m=2;
        	}    
        }
        printf("\n");
    }
    return 0;
}
