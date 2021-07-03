#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,length;
    char s[500];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s);
        length=strlen(s);
        if(length>10){
            printf("%c%d%c\n",s[0],(length-2),s[length-1]);
        }
        else{
            printf("%s\n",s);
        }
    }
    return 0;
}
