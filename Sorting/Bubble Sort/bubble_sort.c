#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp;
    printf("Enter the number:");
    scanf("%d",&n);

   //scanning the array
   for(i=1;i<=n;i++)
   {
       printf("Enter the Array number:");
       scanf("%d",&a[i]);
   }

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
    for(i=1;i<=n;i++)
    {

        printf("%d\n",a[i]);
    }

    return 0;

}

