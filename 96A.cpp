#include<stdio.h>
int main()
{
    int i,j,count=0,c=0;
    char s[150],fixed;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if(i==0){
            fixed=s[i];
            count++;
        }
        else{
            if(s[i]==fixed){
                count++;
                if(count==7){
                    c=1;
                    break;
                }
            }
            else{
                count=1;
                fixed=s[i];
            }
        }
    }
    if(c==1)
        printf("YES\n");
    else{
        printf("NO\n");
    }
    return 0;
}
