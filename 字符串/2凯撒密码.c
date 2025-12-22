# include <stdio.h>
int main()
{
    int n;
    char arr[51]={0};
    scanf("%d",&n);
    getchar();
    scanf("%s",arr);
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]>='a'&&arr[i]<='z')
        {
            arr[i]=(arr[i]-'a'+n)%26+'a';
            //这里是关键
        }
    }
    printf("%s",arr);
    return 0;
}