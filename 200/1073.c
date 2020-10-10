#include <stdio.h>
 
int gcd(int x,int y){
    int z,r;
    if(x<y){
        z=x;
        x=y;
        y=z; 
    }
    while(y!=0){
        r=x%y;
        x=y;
        y=r; 
    }
    return x;
}
int main(int argc, char *argv[]) {
    int x,y;
    while(scanf("%d %d",&x, &y)!=EOF&&x!=0&&y!=0){
         printf("%d %d\n",gcd(x,y),x*y/gcd(x,y));
    }
    return 0;
}
 

