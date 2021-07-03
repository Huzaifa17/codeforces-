#include<stdio.h>
int main()
{
    unsigned long long int i,j,k,even,odd,sum_even,sum_odd,num;
    scanf("%llu",&num);
    if(num%2==0){
        even=num;
        odd=num-1;
    }
    else{
        odd=num;
        even=num-1;
    }
    sum_even=((even/2)*((2+even)/2));
    sum_odd=(((odd+1)/2)*((1+odd)/2));
    if(sum_even>sum_odd)
        printf("%llu\n",sum_even-sum_odd);
    else
        printf("-%llu\n",sum_odd-sum_even);
    return 0;
}
