# include <stdio.h>
# include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[1001][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }       
    }
    int all[1001];
    for(int i=0;i<n;i++)
    {
        all[i]=arr[i][0]+arr[i][1]+arr[i][2];
    }
    int count=0;
    //不是只比对相邻的学生。。
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int safe=1;
            for(int k=0;k<3;k++)
            {
                if(abs(arr[i][k]-arr[j][k])>5)
                {
                    safe=0;
                    break;
                }
            }
            if(safe&&abs(all[i]-all[j])<=10)
                count++;
        }
    }   
    printf("%d",count);
    return 0;
}