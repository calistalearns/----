# include <stdio.h>
# include <string.h>
int main()
{
    char str[256]={0};
    scanf("%s",str);
    int len=strlen(str);
    int boy=0,girl=0;
    int used[len];
    
    for(int i=0;i<len;i++)
    {
        if (str[i]=='b')boy++;
        else if(str[i]=='o'&&i>1&&str[i-1]!='b')boy++;
        else if(str[i]=='y'&&i>2&&str[i-1]!='o')boy++;
    }
    for(int i=0;i<len;i++)
    {
        if (str[i]=='g')girl++;
        else if(str[i]=='i'&&i>1&&str[i-1]!='g')girl++;
        else if(str[i]=='r'&&i>2&&str[i-1]!='i')girl++;
        else if(str[i]=='l'&&i>3&&str[i-1]!='r')girl++;
    }
    printf("%d\n",boy);
    printf("%d\n",girl);

    return 0;
}