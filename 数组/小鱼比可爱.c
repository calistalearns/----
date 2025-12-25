# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    //看谁比自己小
    for(int i=0;i<n;i++)
    {
        int j=i;
        int count=0;
        while(j>=0)
        {
            if(arr[i]>arr[j])
            {
                count++;
            }
            j--;
        }
        printf("%d ",count);
    }
    return 0;
}