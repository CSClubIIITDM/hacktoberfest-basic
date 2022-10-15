#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

   int n1,n2,n3,i=0,j=0,k=0,l;
   // float n3;
   printf("\n Enter size of first array \n");
   scanf("%d",&n1);
   printf("\n Enter size of second array \n");
   scanf("%d",&n2);
    n3=n1+n2;
   int a[n1],b[n2],c[n3];
   printf("\n Enter the first array elements \n");
   for(l=0;l<n1;l++)
   scanf("%d",&a[l]);
   printf("\n Enter the second array elements \n");
   for(l=0;l<n2;l++)
   scanf("%d",&b[l]);
  
    
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
        c[k]=a[i];
        i++;
        }
        else
        {
        c[k]=b[j];
        j++;
        }
        k++;
       
    }
   
     if(i<n1)
        {
          while(i<n1)
          {
            
            c[k]=a[i];
            i++;
              k++;
          }
           
            }
            
        
        else if(j<n2)
        {
           while(j<n2)
           {
            c[k]=b[j];
            j++;
               k++;
           }
            
            
        }
    
    printf("\n The sorted array is \n");
    for(k=0;k<n3;k++)
    {
        printf("%d\n",c[k]);
    }
    
    return (0);
}
