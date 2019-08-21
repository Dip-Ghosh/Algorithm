#include<stdio.h>


void insertion(int a[], int n);
int main()
{

    int a[1000],n,i;
    printf("Enter the value::");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Enter the array value::");
        scanf("%d",&a[i]);
    }

    insertion(a,n);


    for(i=1;i<=n;i++)
    {

        printf("%d\n",a[i]);
    }
    return 0;
}


void insertion(int a[],int n)
{
    int i,j,x;
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

}
