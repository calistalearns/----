# include <stdio.h>
int main()
{
    //长宽高分别为 w,x,h
    //坐标 (i,j,k)
    //q次切割
    int w,x,h;
    int q;
    scanf("%d%d%d",&w,&x,&h);
    getchar();
    scanf("%d",&q);
    int arr[21][21][21]={0};//用来标记
    
    for(int a=0;a<q;a++)
    {
        int x1,y1,z1,x2,y2,z2;
        scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
        for(int i=x1;i<=x2;i++)
        {
            for(int j=y1;j<=y2;j++)
            {
                for(int k=z1;k<=z2;k++)
                {
                    arr[i][j][k]=1;//被标记
                }
            }
        }
    }
    int count=0;
        for(int i=1;i<=w;i++)
        {
            for(int j=1;j<=x;j++)
            {
                for(int k=1;k<=h;k++)
                {
                    if(arr[i][j][k]==0)
                    count++;
                }
            }
        }
    printf("%d\n",count);
    return 0;
}