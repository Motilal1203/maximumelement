#include<stdio.h>
int main()
{
int a[20],i,n,largest;
printf("Enter the numbers:\n");
scanf("%d",&n);
printf("enter %d integer:\n",n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
largest=a[0];
for(i=0;i<=n;i++)
{
if(a[i]>largest)
{
largest=a[i];
}
}
printf("The largest element in array is %d:\n",largest);
return 0;
}





