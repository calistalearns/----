# include <stdio.h>
# include <string.h>
int main()
{
    int q;//操作次数
    scanf("%d",&q);
    getchar();
    char str[200]={0};
    scanf("%s",str);
    int len=strlen(str);//记录原字符串长度
    int first;//记录第一个序号
    getchar();

    for(int i=0;i<q;i++)
    {
        scanf("%d",&first);//第一个输好了，开始分类
        getchar();

        if(first==1)//插入在最后，连结
        {
            char str1[100]={0};
            scanf("%s",str1);
            int len1=strlen(str1);//弄加的字符有多长
            int len3=len+len1;//总共多长
            char str2[200]={0};//最终呈现的字符

            for(int j=0;j<len;j++)
            {
                str2[j]=str[j];
            }
            for(int j=0;j<len1;j++)
            {
                str2[len+j]=str1[j];
            }
            str2[len + len1] = '\0';
            printf("%s\n",str2);

            strcpy(str,str2);
            len=len3;//更新
        }

        else if(first==2)//从哪到哪，保留
        {
            int num1,num2,len4;
            scanf("%d%d",&num1,&num2);
            char str3[100]={0};//更新后的
            for(int j=0,k=num1;j<num2&&k<len;k++,j++)//str3 and str的存储循环
            {
                str3[j]=str[k];
            }
            str3[num2] = '\0';
            printf("%s\n",str3);

            len4=strlen(str3);
            strcpy(str,str3);
            len=len4;//更新
        }

        else if(first==3)//插入在之前
        {
            int num3;
            char str4[100]={0};
            scanf("%d%s",&num3,str4);

            int len5=strlen(str4);//新插入字符串的长度
            int len6=len5+len;//总长
            char str5[200]={0};//新的补的字符串
            for(int j=0;j<num3;j++)
            {
                str5[j]=str[j];
            }
            // 第二个循环：插入新字符串
            for(int j = 0; j < len5; j++) 
            {
                str5[num3 + j] = str4[j];
            }
            
            // 第三个循环：复制插入点后的部分
            for(int j = num3; j < len; j++) 
            {
                str5[len5 + j] = str[j];
            }
            str5[len6] = '\0';
            printf("%s\n",str5);

            strcpy(str,str5);
            len=len6;//更新
        }

        else if(first==4)
        {
            char str7[100]={0};
            scanf("%s",str7);
            int len7 = strlen(str7);
            
            int p=-1;
            for(int j=0;j<=len-len7;j++)
            {
                int found=1;
                for(int k=0;k<len7;k++)
                {
                    if(str[j+k]!=str7[k])
                    {
                        found=0;
                        break;
                    }
                }
                if(found)
                {
                    p=j;
                    break;
                }  
            }
            printf("%d\n",p);
        }

    }
    return 0;
}