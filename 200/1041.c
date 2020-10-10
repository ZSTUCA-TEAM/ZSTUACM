#include <stdio.h>
int main(int argc, char *argv[]) {
    int n,s,x;
	scanf("%d",&n);
	s=0;
	for(x=1;x<=n;x++){
	    s=s+x;
	}
 	printf("sum=%d",s);
    return 0;
}
