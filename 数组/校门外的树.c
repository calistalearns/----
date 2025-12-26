# include <stdio.h>
int main()
{
    int l,m;//马路长度，区域数目
    scanf("%d%d",&l,&m);
    int arr[100][2];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int  used[10001]={0};//没被标记的树


    int count=0;
    for(int i=0;i<m;i++)
    {
        int start=arr[i][0];
        int end=arr[i][1];
        for(int j=start;j<=end;j++)
        {
            used[j]=1;
        }
    }
    for(int i=0;i<=l;i++)
    {
        if(used[i]==0)
        count++;
    }
    printf("%d\n",count);
    return 0;
}