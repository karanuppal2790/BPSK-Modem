#include<iostream.h>
#include<fdacoefs.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int n=0;
clrscr();
const int num=33;
real64_T sum=0;
real64_T coef[33];
int inp[33];

for(int i=0;i<33;i++)
{
coef[i]=B[i];
}

for(i=0;i<33;i++)
{
inp[i]=0;
}

while(n<100)
{
sum=0;
for(int j=32;j>=1;j--)
{
inp[j]=inp[j-1];
}
inp[0]=x[n];
for(int k=0;k<32;k++)
{
sum+=(coef[k]*inp[k]);
}
cout<<sum<<endl;
n++;
}
}//end of main