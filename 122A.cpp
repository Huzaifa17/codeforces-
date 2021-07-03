#include<stdio.h>
int main()
{
    int c=0,i,num,j,array[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    scanf("%d",&num);
    for(i=0;i<14;i++){
        if(num%(array[i])==0){
            c=1;
            break;
        }
    }
    c==1?printf("YES\n"):printf("NO\n");
    return 0;
}
