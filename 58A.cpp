#include<stdio.h>
int main()
{
    int i,j,k=0,count=0;
    char s[]="hello",s1[150],fixed;
    scanf("%s",s1);
    for(j=0,i=0;s1[i]!='\0';i++){
        if(i==0){
            fixed=s[j];
            j++;
        }
        if(s1[i]==fixed){
            count++;
            fixed=s[j];
            j++;
            if(count==5){
                k=1;
                printf("YES\n");
                break;
            }
        }
    }
    if(k==0)
        printf("NO\n");
    return 0;
}
