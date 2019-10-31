
#include<stdio.h>
int linear_search(int a[],int x,int n)
{
    int i=0;
    for(i=0 ; i<n ;i++)
{
    if(a[i]==x)
     {
         return i;
         break;
     }
}
i=-1;
return i;


}
int main()
{

int a[]={1,5,9,6,3};
int n=sizeof(a)/sizeof(a[0]);
int x=3;
int p=linear_search(a,x,n);
if(p==-1)
printf("Not Found");
    else
     printf("index=%d ",p);


return 0;
}
