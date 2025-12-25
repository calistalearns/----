# include <stdio.h>
# include <string.h>
int main()
{
    char str[100]={0};
    fgets(str,sizeof(str),stdin); 
    int len=strlen(str);
    //scanf读取不了空格
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '||str[i]=='\n')
        {
            count++;
        }
    }
    printf("%d\n",len-count);
    return 0;
}