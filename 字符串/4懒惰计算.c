# include <stdio.h>
# include <string.h>
int a(int n,int k){return n+k;}
int b(int n,int k){return n-k;}
int c(int n,int k){return n*k;}

int main()
{
    int i;
    scanf("%d",&i);
    getchar();
   /*
   思路：
   先定义第一个char 字符，以及初始量第一个字母，还有int num1与num2
   还有对应的result，加减乘的符号，还有算长度的len
   做题。先输入第一个存进firstword
   循环
   1.如果是字母（按照那个比大小的来判断），然后输入num1与num2。
   之后注意更新 字母
     如果是数字，利用sscanf存进num1，然后就那么写
    2.利用sprintf算长度。
   */
    char firstword[100]={0};
    char zimu='a';
    int num1,num2;
    int result;
    char len[100]={0};
    char fuhao;
for(int y=0;y<i;y++)
{
    scanf("%s",firstword);
    if(firstword[0]>='a'&&firstword[0]<='c')
    {
        scanf("%d %d",&num1,&num2);
        if(firstword[0]=='a')
        {
            result=a(num1,num2);
            fuhao='+';
            zimu='a';
        }
        if(firstword[0]=='b')
        {
            result=b(num1,num2);
            fuhao='-';
            zimu='b';
        }
        if(firstword[0]=='c')
        {
            result=c(num1,num2);
            fuhao='*';
            zimu='c';
        }
    }
    else
    {
        sscanf(firstword,"%d",&num1);
        scanf("%d",&num2);
        if(zimu=='a')
        {
            fuhao='+';
            result=a(num1,num2);
        }
        if(zimu=='b')
        {
            fuhao='-';
            result=b(num1,num2);
        }
        if(zimu=='c')
        {
            fuhao='*';
            result=c(num1,num2);
        }
    }
    sprintf(len,"%d%c%d=%d",num1,fuhao,num2,result);
    printf("%s\n",len);
    printf("%d\n",(int)strlen(len));
}
    
    return 0;
}