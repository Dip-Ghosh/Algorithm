#include<stdio.h>
int main()
{

    int a[]={8,5,7,3,2},x,n=5,i,j;

    for(i=1;i<=n;i++)
    {
        x=a[i];
        j=i-1;
        while(j>=1 && a[j]>x)
        {

            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;

    }
    for(i=1;i<=n;i++)
    {

        printf("%d\n",a[i]);
    }
    return 0;
}
