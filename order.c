#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,n,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
c++;
}  }}
if(c==0){
printf("The array is  sorted");
      }
else
{
printf("the array is not sorted");
}
getch();
}
