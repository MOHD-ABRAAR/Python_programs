#include <stdio.h>

int main() {
   
   int n,i,j,k;
   i=0;
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
       for(j=1;j<=n-i;j++)
       {
           printf(" ");
       }
       printf("*");
       for(k=1;k<=2*i-1;k++)
       {
           printf(" ");
           if(k==2*i-1)
           {
               printf("*");
           }
           
       }
       printf("\n");
   }
   for(i=n-1;i>=0;i--)
   {
       for(j=1;j<=n-i;j++)
       {
           printf(" ");
       }
       printf("*");
       for(k=1;k<=2*i-1;k++)
       {
           printf(" ");
           if(k==2*i-1)
           {
               printf("*");
           }
           
       }
       printf("\n");
   }
   if(i==0)
   {
       for(j=1;j<=n-i;j++)
       {
           printf(" ");
       }
       printf("*");
   }

    return 0;
}
