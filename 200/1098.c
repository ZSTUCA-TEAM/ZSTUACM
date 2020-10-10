#include <stdio.h>
 
int main(int argc, char *argv[]) {
    int n,m,t,i,s,j;
    int max;
	int a[100];
    while (scanf("%d",&t)!=EOF&&t<=100&&t>=1){
        for(i=1;i<=t;i++){
            scanf("%d",&a[i]);         
        }
        int sum;
        float ave;
        sum=0;
    	for(i=1;i<=t;i++){
			sum+=a[i];    
        }
    	ave=(float)sum/t;
   		m=1;
        for(i=1;i<=t;i++){  
            if(m!=1) {
                if(a[i]<ave){
                    printf(" %d",a[i]);
                }   
            }
            else{
                if(a[i]<ave){
	                printf("%d",a[i]);
	                m=2;
            	}   
        	}
        }
        printf("\n");  
    }
    return 0;
}
