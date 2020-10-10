#include <stdio.h>
int main(int argc, char *argv[]) {
    int n,x,z;
    float y,t;
    y=0;
    scanf("%d",&n);
    for(x=1;x<=n;x++){
    	t=0;
        for(z=1;z<=x;z++){
		    if(z%2==0)
		    	t=t-z*2+1;
		    else
		        t=t+z*2-1;
    	}
    	y=y+1/t;   
    }
    printf("%.2f",y);
    return 0;
}
