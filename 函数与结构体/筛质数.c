# include <stdio.h>
int zhishu(int z)
{
    if(z==2)
    return 1;//是质数
    else if(z<=1||z%2==0)
    return 0;
    else
    {
        for(int i=3;i*i<=z;i+=2)
        {
            if(z%i==0)
            return 0;
        }
        return 1;
    }
}

int main()
{
    int n;//整数个数
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int result=zhishu(arr[i]);
        if(result)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}