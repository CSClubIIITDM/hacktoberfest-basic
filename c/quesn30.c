#include<stdio.h>
int main()
{
  int n,count=0,k,i,j;
  printf("\n Enter no.of elements in an array \n");
  scanf("%d",&n);
  int a[n];
  
  printf("\n Enter the elements \n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  printf("\n Enter the value of k \n");
  scanf("%d",&k);
  
  for(i=0;i<n-1;i++)
  {
   for(j=i+1;j<n;j++)
   {
    if(a[i]+a[j]==k)
    {
    count++;
    }
   
   }
  }
  
  printf("\n No.of combinations whose sum is %d is %d\n ",k,count);

  return (0);
}
