#include <stdio.h>
int main(int argc, char *argv[]) {
    int y1,y2,m1,m2,d1,d2;
    scanf("%d-%d-%d%d-%d-%d",&y1,&m1,&d1,&y2,&m2,&d2);
	printf("%d",d2-d1-1);
}
