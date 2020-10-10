#include <stdio.h>
int main(int argc, char *argv[]) {
    int n,s,x;
	scanf("%d",&n);
	s=1;
	for(x=1;x<=n;x++){
	    s=s*x;
	}
 	printf("%d",s);
    return 0;
}
