#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int n,m,x;
    while (~scanf("%d%d",&n,&m)){
    	if(n>m){
    		int t=m;
    		m=n;
    		n=t;
		}
		int se=0;
		int so=0;
		for(int i=n;i<=m;i++){
			if(abs(i)%2==1)so=so+i*i*i;
			else se=se+i*i;
		}      
		printf("%d %d\n",se,so);
    }
    return 0;
}															
