#include<stdio.h>

int ans(int ,int);
int main(void)
{
    int cycle_length=0,a,b;

    while(scanf("%d %d",&a,&b)==2)
    {
        printf("%d %d %d\n",a,b,ans(a,b));

    }
    return 0;

}
int ans(int i,int j)
{
    int length=1,min,max,max_cycle=0,k=0;
    if(i>j)
    {
        min=j;max=i;
    }else
        {
            min=i;max=j;
        }
    for(min;min<=max;min++)
    {
        k=min;
        while(k!=1)
        {
            length++;
            if(k%2==1)
                k=k*3+1;
            else
                k=k/2;
        }
        if(length>max_cycle)
            max_cycle=length;
        length=1;
    }
    return max_cycle;
}
