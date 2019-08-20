#include<stdio.h>

int bubble(int a[],int n);


int main()
{
    int a[10],n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
   {
       printf("Enter the Array number:");
       scanf("%d",&a[i]);
   }
    bubble(a,n);
    for(i=1;i<=n;i++)
    {

        printf("%d\n",a[i]);
    }
}



int bubble(int a[10],int n)
{

    int i,j,temp;

    for( i=1;i<=n;i++)
    {

        for(j=1;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}



