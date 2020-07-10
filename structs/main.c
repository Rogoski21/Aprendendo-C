#include <stdio.h>
#include <stdlib.h>

typedef struct rectangle{
    int length;
    int width;
    double me
}rectangle;

typedef struct pos{
    int x;
    int y;
}position;

typedef struct buildingPlan{
    char owner[30] = "c,a,r,l,o,s,\0";
    rectangle rectangle;
    position position;
}buildingPlan;
int main()
{
    rectangle mypos = {5,10,8.4};
    pos mypos =  {10,25};
    buildingPlan buildingPlan;
    //printf("Lngth:%d\nWidth:%d\nMedia:%f"), myRec.length, myRec.width,myRec.me);
    printf("Owner: %c\nLength:%d",mypos.owner,myrec.length);
    return 0;
}
