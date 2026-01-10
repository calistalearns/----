# include <stdio.h>
# include <math.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    scanf("%d %d",&x1,&y1);
    getchar();
    scanf("%d %d",&x2,&y2);
    getchar();
    scanf("%d %d",&x3,&y3);
    double dis1,dis2,dis3;
    dis1=sqrt((pow(x1-x2,2))+(pow(y1-y2,2)));
    dis2=sqrt((pow(x3-x2,2))+(pow(y3-y2,2)));
    dis3=sqrt((pow(x1-x3,2))+(pow(y1-y3,2)));
    double dis=dis1+dis2+dis3;
    printf("%.2lf",dis);
    return 0;
}