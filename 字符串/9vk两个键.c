# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char str[n+1];
    scanf("%s",str);
//可以把已经处理的数组也标记
    int count=0;
    int found=0;
    int used[n];
    for(int i=0;i<n;i++)
    {
        used[i]=0;
    }
    for(int i=0;i<n-1;i++)
    {
        if(!used[i]&&str[i]=='V'&&str[i+1]=='K')
        {
            count++;
            used[i]=1;
            used[i+1]=1;
            i++;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if((!used[i]&&!used[i+1]&&str[i]=='V'&&str[i+1]=='V')||(!used[i]&&!used[i+1]&&str[i]=='K'&&str[i+1]=='K'))
        {
            found=1;
            used[i]=1;
            used[i+1]=1;
            break;
        }
    }
    printf("%d\n",found+count);
    return 0;
}