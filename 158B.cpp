#include<stdio.h>
int main()
{
    int i,j,count=0,t,k,array[4]={0,0,0,0};
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&k);
        if(k==1)
            array[0]++;
        else if(k==2)
            array[1]++;
        else if(k==3)
            array[2]++;
        else
            array[3]++;
    }
    count=count+array[3];
    if(array[2]>0){
        if(array[0]>0){
            if(array[0]>array[2]){
                count=count+(array[2]);
                array[0]=array[0]-array[2];
                array[2]=array[2]-array[2];
            }
            else{
                count=count+(array[0]);
                array[2]=array[2]-array[0];
                array[0]=array[0]-array[0];
            }
        }
        count=count+array[2];
    }
    if(array[1]>0){
        if(array[1]>=2){
            count=count+(array[1]/2);
            array[1]=array[1]%2;
        }
        if(array[1]!=0){
            count++;
            array[1]=array[1]-1;
            array[0]=array[0]-2;
        }
    }
    if(array[0]>0){
        if(array[0]>4){
            count=count+(array[0]/4);
            array[0]=array[0]%4;
        }
        if(array[0]>0)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
