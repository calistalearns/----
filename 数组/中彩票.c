# include <stdio.h>
int main()
{
    int n;//购买张数
    scanf("%d",&n);
    getchar();
    int arr[7];
    int zh[7]={0};
    for(int i=0;i<7;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        int count=0;//相同数
        int ch[7]={0};

        for(int i=0;i<7;i++)
        {
            scanf("%d",&ch[i]);
        }
        for(int k=0;k<7;k++)
        {
            for(int j=0;j<7;j++)
            {
                if(ch[k]==arr[j])
                    count++;
            }
        }
        
        if(count==7)
        zh[0]++;
        else if(count==6)
        zh[1]++;
        else if(count==5)
        zh[2]++;
        else if(count==4)
        zh[3]++;
        else if(count==3)
        zh[4]++;
        else if(count==2)
        zh[5]++;
        else if(count==1)
        zh[6]++;
    }
    //if (count >= 1 && count <= 7) {
    //zh[7 - count]++;
    //}简洁多了
    for(int i=0;i<7;i++)
    {
        printf("%d ",zh[i]);
    }
    return 0;
}