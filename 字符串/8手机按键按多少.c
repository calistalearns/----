# include <stdio.h>
# include <string.h>

int main()
{
    char str[201]={0};
    fgets(str,sizeof(str),stdin);//那句话
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str);//长度

    int arr[]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};//字母对应次数
    
    int count=0;
    
    for(int k=0;k<len;k++)
    {
        if(str[k]==' ')
        {
            count++;
        }

        else if(str[k]>='a'&&str[k]<='z')
        {
            int index=str[k]-'a';//关键
            count+=arr[index];
        }
    }
    printf("%d\n",count);

    return 0;
}