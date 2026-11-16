#include<stdio.h>
int main()
{  
  int a[10],n,i,sum=0;
  printf("Enter the limit");
  scanf("%d",&n);
  printf("Enter the element");
  for(i=0;i<n;i++)
{ 
  scanf("%d",&a[i]);
}
  printf("The elements are:");
  for(i=0;i<n;i++)
{
  printf("%d\t",a[i]);
}
  for(i=0;i<n;i++)
{
sum=sum+a[i];
} 
 printf("\nsum=%d\t",sum);
 return 0;
 }
