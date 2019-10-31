//selection_sort search
#include<stdio.h>
int selection_sort(int a[],int n)
{
   int min,temp,i,j;
   for(i=0;i<n-1;i++)
   {
       min=i;
       for(j=i+1;j<n;j++)
       {

           if(a[j]<a[min])
           {
               min=j;
           }
       }
       if(min!=i)
       {
           temp=a[i];
           a[i]=a[min];
           a[min]=temp;
       }

   }
}
int print_selection(int a[], int n)
{
    int i;
    for (i=0; i <n; i++)
    {
        printf("%d",a[i]);
    }
}

int main()
{

int a[]={1,5,9,6,3};
int n=sizeof(a)/sizeof(a[0]);
selection_sort(a,n);
print_selection(a,n);

return 0;
}


