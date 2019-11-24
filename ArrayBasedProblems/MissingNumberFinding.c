//How do you find
    //the missing number
        //in a given integer array of 1 to 100?

#include<stdio.h>
int missing_number(int a[],int n)
{

    int total = (n+2)*(n+1)/2;
    for (int i=0;i<n;i++)
    {
        total=total-a[i];


    }
  return total;
}
int main()
{

    int a[]={1, 2,3, 4, 5, 6, 8 ,9 };
    int n = sizeof(a)/sizeof(a[0]);
    int result = missing_number(a,n);
    printf("The missing number is = %d",result);
    return 0;

}
