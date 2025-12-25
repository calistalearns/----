# include <stdio.h>
# include <string.h>
int main()
{
    char find[12]={0};
    scanf("%11s",find);
    getchar();
    char essay[1000003]={0};
    fgets(essay,sizeof(essay),stdin);
    int len1=strlen(find);
    int len2=strlen(essay);

    int count1=0;
    int count2=0;//次数
    int found=0;
    //我想着把大写都变成小写
    for(int i=0;i<len1;i++)
    {
        if(find[i]>='A'&&find[i]<='Z')
            find[i]=find[i]-'A'+'a';
    }
    for(int i=0;i<len2;i++)
    {
        if(essay[i]>='A'&&essay[i]<='Z')
            essay[i]=essay[i]-'A'+'a';
    }
    //现在都是小写了。找有没有，以及在哪里第一次出现以及次数。
    int used[len2];
    {
        for(int i=0;i<len2;i++)
        used[i]=0;
    }

    for(int i=0;i<len1;i++)
    {
        for(int j=0;j<len2;j++)
        {
            if(!used[j]&&find[i]==essay[j])
            {
                used[j]=1;
                for(int k=i;k<len1;k++)
                {
                    while(find[k]==essay[j]&&k<len1)
                    {
                        found=1;
                        count1=i;
                        k++;
                        j++;
                    }
                }
                count2++;
            }
        }
    }
    if(found)
    {
        printf("%d %d\n",count1,count2);
    }
    else
    printf("-1\n");
    return 0;
}