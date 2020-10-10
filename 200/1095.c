#include <stdio.h>

int main(int argc, char *argv[]) {
    int n,m,t,i,s;   
    int a[100];
    int b[100];
    while (scanf("%d",&t)!=EOF&&t<20){
        for(i=1;i<=t;i++){
            scanf("%d",&a[i]);
        }
    	m=-1;
    	int cnt=0;
        scanf("%d",&s); 
        for(i=1;i<=t;i++){
            if(a[i]!=s||m==0){
             	b[++cnt]=a[i];
        	}else m=0;
        } 
        for(i=1;i<=cnt;i++){
        	if(i==cnt)    
            	printf("%d\n",b[i]);
            else
        		printf("%d ",b[i]);
		}
    }
    return 0;
}
