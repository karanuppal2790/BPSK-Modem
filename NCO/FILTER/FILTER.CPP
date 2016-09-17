#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<fdacoefs.h>
#include<iostream.h>
struct node
{
struct node*data;
sruct node*next;
}*ptr,start=NULL,ptr2;

void main()
{
int c=0,i=0;
clrscr();
const int num=33;
real64_T sum=0;
real64_T coef[33];
while(c<33)
{
if(start==NULL)
{
ptr->data=arr[i++];
c++;
start=ptr;
ptr2=ptr;
ptr=ptr->next;
}
else
{
ptr->data=arr[i++];
ptr=ptr->next;
start=ptr;
}
if(c==32)
{
ptr->data=arr[i++];
ptr=ptr2;
start=ptr;
}




int inp[33];
for(int i=0;i<33;i++)
{
coef[i]=B[i];
}
for(int j=0;j<33;j++)
{
inp[j]=;
}
for(int n=0;n<32;n++)
{
sum=sum+(coef[n]*inp[n]);
}
cout<<"the filter is \t"<<sum;
}
