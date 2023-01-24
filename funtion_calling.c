#include<stdio.h>
int revnum(int num)
{
    int rev=0,rem;
    while(num!=0)
    {
        rem = num%10;
        rev =(rev*10)+rem;
        num/=10;
    }
     return rev;
}
int main()
{
    int n,newnum;
    printf("enter a number to be reversed\n");
    scanf("%d\n",&n);
    newnum = revnum(n); 
    printf("reversed number is %d" ,newnum);
    return 0;
}