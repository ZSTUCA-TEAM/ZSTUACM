#include <stdio.h>

int main(int argc, char *argv[]) {
	int n; 
	while(scanf("%d",&n)!=EOF){
		double s=0;
	    for(int i=1;i<=n;i++){
	    	s=s+1.0/((i+1)*i/2);
		}
		printf("%.4f\n",s);  
    } 
    return 0;
}
