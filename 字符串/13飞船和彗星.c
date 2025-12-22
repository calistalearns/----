# include<stdio.h>
# include <string.h>
int main()
{
    char star[7]={0};
    char group[7]={0};
    scanf("%s",star);
    getchar();
    scanf("%s",group);
    int len1=strlen(star);
    int len2=strlen(group);
    int arr1[len1];
    int arr2[len2];
    int fia_star=1;
    int fia_group=1;
    
    //不能乱除，还是要搞len出来，防止和\0乘了
    for(int i=0;i<len1;i++)
    {
        arr1[i]=star[i]-'A'+1;
        fia_star*=arr1[i];
    }
    for(int i=0;i<len2;i++)
    {
        arr2[i]=group[i]-'A'+1;
        fia_group*=arr2[i];
    }
    if(fia_star%47==fia_group%47)printf("GO\n");
    else printf("STAY\n");
    return 0;
}