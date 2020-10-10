#include <stdio.h>

int main(int argc, char *argv[]) {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z); 
    if(x>y)
        if(y>z)
			printf("%d\n",x);
		else
			if(x>z)
				printf("%d\n",x);
            else
                printf("%d\n",z);
    else
        if(y<z)
            printf("%d\n",z);     
        else
            if(x>z)
                printf("%d\n",y);
            else
                printf("%d\n",y);
    return 0;
}
