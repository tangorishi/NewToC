
#include<stdio.h>
int main()
{
    int a[50],i,num,pos,size;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    printf("enter the array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("entered elements are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    
    printf("enter the number and the position to insert the number\n");
    scanf("%d",&num);
    scanf("%d",&pos);
    if(pos<0||pos>size+1)
    {
        printf("INVALID POSITION");
    }
    else
    //swapping
    for(i=size-1;i>=pos-1;i--)
    {
        a[i+1] = a[i];
    }
    //insertion
    a[pos-1] = num;
   
    //new array is 
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
     //array size updation
    size++;
    printf("size of the array is\n%d",size);
}

