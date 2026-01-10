# include <stdio.h>
int year(int n)
{
    if(n%400==0||(n%4==0&&n%100!=0))
    return 1;//是闰年
    else
    return 0;
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int count=0;
    int arr[1000];
    for(int i=x;i<=y;i++)
    {
        int result=year(i);
        if(result)
        {
            arr[count]=i;
            count++;
        }
    }
    printf("%d\n",count);
    for(int i=0;i<count;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}