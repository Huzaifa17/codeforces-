#include<stdio.h>
#include<string.h>
int main()
{
    int c=0,i,j;
    char s1[150],s2[150];
    scanf("%s",s1);
    scanf("%s",s2);
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]>='A'&&s1[i]<='Z'){
            s1[i]=s1[i]+32;
        }
        if(s2[i]>='A'&&s2[i]<='Z'){
            s2[i]=s2[i]+32;
        }
        if(s1[i]>s2[i]){
            c=1;
            printf("1\n");
            break;
        }
        else if(s1[i]<s2[i]){
            c=1;
            printf("-1\n");
            break;
        }
    }
    if(c==0)
        printf("0\n");
    return 0;
}
