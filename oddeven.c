#include<stdio.h>
int main() 	              
{ 
   int a[15],i,n;
   printf("Enter the limit");
   scanf("%d",&n);
   Printf("Enter the Elements:");
   for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
}
   printf("Even numbers are:");
   for(i=0;i<n;i++)
 {
   if(a[i]%2!=0)
 {
   printf("%d\t",a[i]);
  }
}
   return 0;
   } 
   
