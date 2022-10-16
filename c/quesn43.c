#include<stdio.h>
#include<string.h>

int main()
{
  int n,i,k,j;
  char str[100];
  printf("\n Enter the size of the string");
  scanf("%d",&n);
  
  printf("\n Enter the string \n");
  getchar();
  scanf("%s",str);
  for(i=0;i<n;i++)
  {
  for(j=i+1;j<n;j++)
  {
    if(str[i]==str[j])
    {
      for(k=j;k<n-1;k++)
      str[k]=str[k+1];
      n=n-1;
    }
  }
  }
  for(i=0;i<n;i++)
  printf("%c",str[i]);
  printf("\n");
  
  return (0);
}
