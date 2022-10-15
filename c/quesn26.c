#include<stdio.h>
int main()
{
 int n,i,j,k,l=0,sum;
 
 printf("\n Enter size of array \n");
 scanf("%d",&n);
 int a[n];
 printf("\n Enter elements of array \n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 
 printf("\n Enter size of sub array \n");
 scanf("%d",&k);
 int max[n-k+1];
 
 for(i=0;i<n;i++)
 {
  sum=0;
  max[l]=a[i];
  for(j=i;j<i+k;j++)
  {
    
    if(a[j]>max[l])
    {
     max[l]=a[j];   
    }   
  
  }
  l++;
 }
 
 for(i=0;i<n-k+1;i++)
 {
 printf("%d\n",max[i]);
 
 }
 
  return (0);
}
