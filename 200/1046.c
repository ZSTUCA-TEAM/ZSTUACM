#include <stdio.h>

int main(int argc, char *argv[]) {
    int n,s;
    scanf("%d",&n);
    s=0;
    while(n!=1){
        if(n%2==0){
            n=n/2;
            s=s+1;
        }else{
            s=s+1;
            n=3*n+1;
        } 
    }
    printf("%d",s);
    return 0;
}
