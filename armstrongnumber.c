#include <stdio.h>
int main()
 {
    int num,  rem;
    int result =0;
    printf("Enter a 3 digit integer\n");
    scanf("%d", &num);
    

    while (num != 0) 
    {
        rem = num % 10;
        
       result = result + rem * rem * rem;
        
       num =  num/10;
    }

    if (result == num)
        printf("%d number entered is an Armstrong number", num);
    else
        printf("number entered is not an Armstrong number", num);

    return 0;
}
if()
{
    hello then i am going then i am not then i am not then armstromg number then i am not
}
