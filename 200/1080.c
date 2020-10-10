#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int n,m,x;
    while (~scanf("%d%d",&n,&m)){
    	double s=0;
    	double t=n;
		for(int i=1;i<=m;i++){
			s=s+t;
			t=sqrt(t);
		}      
		printf("%.2f\n",s);
    }
    return 0;
}															
