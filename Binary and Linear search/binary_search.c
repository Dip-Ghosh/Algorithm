//binary search
#include<stdio.h>
int binary_search(int a[],int x,int n)
{
  int l,r,m;
  l=0;
  r=n-1;
 // printf("%d",r);
  while(l<=r)
  {
        m=(l+r)/2;
        if(a[m]==x)
          {
              return m;
          }
        if(a[m]<x)
           {
                l=m+1;
           }
        else
           {
                r=m-1;
           }
  }
return -1;
}
int main()
{

int a[]={1,5,9,6,3};
int n=sizeof(a)/sizeof(a[0]);
int x=3;
int p=binary_search(a,x,n);
if(p==-1)
printf("Not Found");
    else
     printf("index=%d ",p);


return 0;
}

