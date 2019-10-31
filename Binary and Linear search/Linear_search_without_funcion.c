#include<stdio.h>
int main()
{

int a[]={1,5,9,6,3};
int n=sizeof(a)/sizeof(a[0]);
int x=9;
for(int i=0 ; i<n ;i++)
{

    if(a[i]==x)
     {
          printf("index=%d Find= %d",i,a[i]);
    break;N
     }
}
printf("Not found");
return 0;
}
