#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,count1=0,count2=0,count3=0,count_plus=0,length;
    char s1[150],s2[150];
    scanf("%s",s1);
    length=strlen(s1);
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]=='1')
            count1++;
        else if(s1[i]=='2')
            count2++;
        else if(s1[i]=='3')
            count3++;
        else
            count_plus++;
    }
    for(i=0;i<length;i++){
        if(count1){
            s2[i]='1';
            if(count_plus){
                s2[i+1]='+';
                i++;
                count_plus--;
            }
            count1--;
        }
        else if(count2){
            s2[i]='2';
            if(count_plus){
                s2[i+1]='+';
                i++;
                count_plus--;
            }
            count2--;
        }
        else if(count3){
            s2[i]='3';
            if(count_plus){
                s2[i+1]='+';
                i++;
                count_plus--;
            }
            count3--;
        }
    }
    s2[i]='\0';
    printf("%s\n",s2);
    return 0;
}
