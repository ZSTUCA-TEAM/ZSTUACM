#include <stdio.h>

int main(int argc, char *argv[]) {
    int n,m,t,i,s,k,j,l; 
	int a[100];
    while (scanf("%d",&t)!=EOF&&t<=20)  {
        for(i=1;i<=t;i++){
            scanf("%d",&a[i]);     
        }
        scanf("%d %d",&s,&k);
		a[t+1]=s;
		a[0]=0; 
        for(j=0;j+1<=t;j++){
	        if(a[j]<s&&a[j+1]>=s){
	            for(l=t+1;l>=j+2;l--){
					a[l]=a[l-1];
	            }
	            a[j+1]=s; 
	            break; 
	        }
		}
	    for(i=1;i<=t+1;i++){
	        if(i!=t+1)  
	        	printf("%d ",a[i]);
	        else
	        	printf("%d\n",a[i]);
	    }
	    printf("%d\n",a[k+1]);
    }
    return 0;
}
