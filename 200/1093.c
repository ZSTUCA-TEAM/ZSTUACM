#include <stdio.h>
   
int fn(int x){
    int a[50];
    int j;
    a[1]=0;
    a[2]=1;
    for(j=3;j<=x+1;j++) {
        a[j]=a[j-1]+a[j-2];
    }
    return a[x+1];
}
int main(int argc, char *argv[]) {
	
    int n,t;
    scanf("%d",&t);
    while (t--){
        scanf("%d",&n);
		printf("%d\n",fn(n));
    }
    return 0;
}

