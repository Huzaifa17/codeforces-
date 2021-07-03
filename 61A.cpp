#include<stdio.h>
int main()
{
    int i,j;
    char s1[150],s2[150],s3[150];
    scanf("%s",s1);
    scanf("%s",s2);
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]!=s2[i])
            s3[i]='1';
        else
            s3[i]='0';
    }
    s3[i]='\0';
    printf("%s\n",s3);
    return 0;
}
