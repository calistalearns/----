# include <stdio.h>
int zhishu(int n)
{
    if(n==2)
    return 1;//是质数
    else if(n<2||n%2==0)
    return 0;
    else
    {
        for(int i=3;i*i<=n;i+=2)//可以等
        {
            if(n%i==0)
            return 0;
        }
        return 1;
    }
}
int main()
{
    char word[101]={0};
    int count[26]={0};
    scanf("%s",word);
    int min=1000;
    int max=0;
    for(int i=0;word[i]!='\0';i++)
    {
        if(word[i]>='a'&&word[i]<='z')
        {
            count[word[i]-'a']++;
            //字符辐射数字
        }
        
    }
    //要考虑字母是出现过的字母
    for(int i=0;i<26;i++)
    {
        if(count[i]>0)
        {
            if(count[i]>max)max=count[i];
            if(count[i]<min)min=count[i];
        }
    }
    int n=max-min;
    if(zhishu(n))
    {
        printf("Lucky Word\n");
        printf("%d\n",n);
    }
    
    else
    {
        printf("No Answer\n");
        printf("0\n");
    }
    
    return 0;
}