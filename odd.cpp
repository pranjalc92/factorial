#include<stdio.h>
int main()
{
int n,z,a;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
scanf("%d",&a);
z=1;
do
{
z=2*z;
}while(z<a);
z=z/2;
printf("%d\n",z);
}
return 0;
}
  
