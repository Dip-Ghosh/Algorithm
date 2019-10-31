//Find the Missing Number
#include<stdio.h>
int missing_number(int A[],int n)
{
    int sum = (n+2)*(n+1)/2;
    printf("%d",sum);
    for(int i=0;i<n;i++)
    {
        sum=sum-A[i];

    }
     return sum;

}
int main()
{
    int A[] = {1,2,4,5};
    int n =  sizeof(A) / sizeof(A[0]);
    int result=missing_number(A,n);
    printf("%d",result);
    return 0;

}
