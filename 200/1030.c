#include <stdio.h>

int main(int argc, char *argv[]) {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z); 
    if(x*x+y*y==z*z || z*z+y*y==x*x || z*z+x*x==y*y )
    	printf("yes");
    else
    	printf("no");
    return 0;
}
