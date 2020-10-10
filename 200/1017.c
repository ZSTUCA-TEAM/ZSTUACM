#include <stdio.h>
int main(int argc, char *argv[]) {
    int y1,y2,m1,m2,d1,d2;
    scanf("%d:%d\n%d:%d",&m1,&d1,&m2,&d2);
    printf("%d",60*(m2-m1)+d2-d1-1);
}
