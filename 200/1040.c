#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int x,y,m,n,k;
	scanf("%d %d",&n,&m);
	x=1;
	y=n-x;
	k=-1;
	while(k==-1){
		if(2*x+4*y!=m){
		    x++;
		    y=n-x;
		    if(x>=n) k=0;
		}else{
		    k=1;  
		}
	}
	if(k==1)
		printf("%d %d",x,y);
	if(k==0)
		printf("No");
	return 0; 
}
