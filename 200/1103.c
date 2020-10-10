#include <stdio.h>
#include <stdlib.h>
  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
  
int main(int argc, char *argv[]) {
    int n;
    int a[100];
	while(scanf("%d",&n)!=EOF&&n>0&&n<=20)    {
	    int i,j;
	    for(i=0;i<=n-1;i++){
	        scanf("%d",&a[i]);
	    }
	    int b[n-1];
	    for(i=0;i<=n-1;i++){ 
	        b[i]=0;
	    }
        for(i=0;i<=n-1;i++){
            for(j=0;j<=n-1;j++){
                if(a[i]==a[j]){
                    b[i]+=1; 
                }    
            } 
        }
        int max;
        max=0;
        for(i=1;i<=n-1;i++){
            if(b[max]<b[i]){
            	max=i;
            }       
        }    
        printf("%d\n",a[max]);     
    }         
    return 0;
}
 
