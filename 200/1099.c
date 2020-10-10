#include <stdio.h>

int main(int argc, char *argv[]) {
    int n,m,t,i,s,j;
    int max;
    while (scanf("%d",&t)!=EOF&&t<=100) {
        int a[t];
        for(i=1;i<=t;i++){
            scanf("%d",&a[i]);      
        }
        for(i=1;i<=t;i++){
	        max=i;
	        for(j=t;j>i;j--){
	            if(a[j]>a[max])
	            max=j;      
	        }
	        if(max!=i){
	            m=a[i];
	            a[i]=a[max];
	            a[max]=m;
	        }      
        }
	    int sum=0;
	    float ave;
	    for(i=2;i<=t-1;i++){
	        sum+=a[i];      
	    }
	    ave=(float)sum/(t-2);
        printf("%.2f\n",ave);
	}
    return 0;
}
