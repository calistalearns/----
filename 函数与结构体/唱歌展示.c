#include <stdio.h>
int main()
{
    //n学生，m个评委
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }//全部输入好了
    
    //现在处理单独同学的平均分
    int shu=0;
    int max[n],min[n];
    double ave[n];
    int all[n];

    // 初始化数组
    for(int i=0;i<n;i++)
    {
        all[i] = 0;
        max[i] = arr[i][0]; // 初始化为第一个分数
        min[i] = arr[i][0]; // 初始化为第一个分数
    }

    // 修正最大最小值查找逻辑
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j] > max[i])
                max[i] = arr[i][j];
            if(arr[i][j] < min[i])
                min[i] = arr[i][j];
            all[i] += arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        ave[i]=(double)(all[i]-min[i]-max[i])/(m-2);//平均分
    }

    int found=0;
    for(int i=1;i<n;i++)
    {
        if(ave[i]>ave[found])
        found=i;
    }

    printf("%.2f\n",ave[found]);
    return 0;
}