# include <stdio.h>

int main()
{
   int arr[100]={0};
   int count=0;
   int input;
   while(scanf("%d",&input)!=EOF)
   {
    if(input==0)break;
    arr[count]=input;
    count++;
   }
    for(int i=count-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}