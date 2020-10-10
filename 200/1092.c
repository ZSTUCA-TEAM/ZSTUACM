#include <stdio.h>

int main(int argc, char *argv[]) {
    int n,i;
	int a[100];
    while (scanf("%d",&n)!=EOF){
        int max;
        for(i=1;i<=n;i++){
            scanf("%d",&a[i]);   
        }
        max=1;
        for(i=1;i<=n;i++){
            if(a[i]>a[max])
            	max=i;
        }
        printf("%d %d\n",a[max],max-1);
    }
    return 0;
}
