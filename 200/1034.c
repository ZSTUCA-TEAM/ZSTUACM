#include <stdio.h>

int main(int argc, char *argv[]) {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z); 
    if(x>y)
        if(y>z)
            printf("%d %d %d",x,y,z);
        else
			if(x>z)
                printf("%d %d %d",x,z,y);
            else
                printf("%d %d %d",z,x,y);
    else
     	if(y<z)
            printf("%d %d %d",z,y,x);
        else
            if(x>z)
                printf("%d %d %d",y,x,z);
            else
                printf("%d %d %d",y,z,x);
    return 0;
}
