#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int top=-1;
int n;
int stk[100];
int min,max;
void getMin(int stk[],int n)
{
    top++;
    if(top==0)
    {
       scanf("%d",&stk[top]);
        min=stk[top];
        max=stk[top];
        top++;
    }
    else{
        scanf("%d",&stk[top]);
        if(stk[top]<min)
            min=stk[top];
        top++;
    }
}
int main() 
{
    scanf("%d",&n);
    if(n==1)
    {
        printf("*");
    }
    for(int i=0;i<n;i++)
    {
        getMin(stk,n);
    }
    printf("The minimum of the elements in the given stack is::%d\n",min);
    return 0;
}
