#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int n;
    while (~scanf("%d",&n)){
    	int s=1;
		int x;
		for(int i=1;i<=n;i++){
			scanf("%d",&x);
			if(abs(x)%2==1)s*=x;
		}      
		printf("%d\n",s);
    }
    return 0;
}															
