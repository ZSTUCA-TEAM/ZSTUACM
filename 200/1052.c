#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    double a[1100];
    double b[1100];
    b[0]=a[0]=1;
    b[1]=1;
    a[1]=2;
    double s=2;
    for(int i=2;i<=n;i++){
    	a[i]=a[i-1]+a[i-2];
    	b[i]=b[i-1]+b[i-2];
    	s=s+a[i]/b[i]; 
	}
	printf("s=%.2f\n",s);
    return 0;
}
