#include <stdio.h>

int main(int argc, char *argv[]) {
    int n,s,t;
    scanf("%d,%d",&n,&s);
    if(n>s){
        t=s;    
    }else{
        t=n;
    }
    while(t>0){
        if(n%t==0 && s%t==0){
            printf("%d",t);
            break;
        }else{
            t=t-1;
        }
    }
    return 0;
}
