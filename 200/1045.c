#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
	scanf("%d",&n);
	int a[110];
    int maxl=-1e9;
	int minl=1e9; 
    for(int i=1;i<=n;i++) {
    	scanf("%d",&a[i]);
        if(maxl<a[i])maxl=a[i];
        if(minl>a[i])minl=a[i];
    } 
    printf("max=%d, min=%d",maxl,minl);
    return 0;
}
