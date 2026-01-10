# include <stdio.h>
# include <math.h>
//主要确实是递归想法
void she(int arr[][1024],int x,int y,int size)
{
    if(size==1)return;
    int half=size/2;
    for(int i=x;i<x+half;i++)
    {
        for(int j=y;j<y+half;j++)
        {
            arr[i][j]=0;//赦免
        }
    }
    she(arr,x+half,y,half);
    she(arr,x,y+half,half);
    she(arr,x+half,y+half,half);
}

int main()
{
    int n;
    scanf("%d",&n);
    //开始全是1？
    int c=pow(2,n);
    int arr[1024][1024];
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr[i][j]=1;
        }
    }

    she(arr,0,0,c);

    for(int i=0;i<c;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}