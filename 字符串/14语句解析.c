# include <stdio.h>
int main()
{
    int a=0,b=0,c=0;
    char one,two;
    
    while(scanf("%c:=%c;",&one,&two)==2)
    {
        int num;
        if(two<='9'&&two>='0')
        {
            num=two-'0';
        }
        else
        {
            if(two=='a')num=a;
            else if(two=='b')num=b;
            else num=c;
        }
        if(one=='a')a=num;
        else if(one=='b')b=num;
        else c=num;
    }
    printf("%d %d %d",a,b,c);
    return 0;
}