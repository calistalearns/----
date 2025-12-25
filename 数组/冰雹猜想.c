# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    //我拿数组把他们存起来？然后倒序输出？？
    int count=0;
    int arr[1000];
     arr[count]=n;
    while(n!=1)
    {
        if(n%2!=0)
        {
            n=n*3+1;        
        }
        else
        {
            n/=2;
        }
        count++;
        arr[count]=n;
    }
    for(int i=count;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}