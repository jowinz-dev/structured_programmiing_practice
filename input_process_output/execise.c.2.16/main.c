#include <stdio.h>
#include <stdlib.h>
//Here the main function begins the program execution.
int main()
{   int num1,num2;//defining the variables that will be used where num1 means first number and num2 means second number.

    int sum,remainder,diff;//Here diff means difference and sum means total of the two numbers entered by the user.

    float quotie;//quotie means quotient and then remainder.


        printf("Enter the first number: ");//Here we are prompting the user to do something
        scanf("%d", &num1);// reads the integers.

        printf("Enter the second number: ");//Here we are prompting the user to do something
        scanf("%d", &num2);// reads the integers.

        quotie = num1/num2;//defining quotient.

        sum= num1+num2;//defining sum.

        remainder =num1%num2;//defining remainder.

        diff = num1 -num2;//defining difference.

        printf("\nThe Quotient    : %.2f\n",quotie);
        printf("\nThe Sum         : %d\n",sum);
        printf("\nThe Remainder   : %d\n",remainder);
        printf("\nThe Difference  : %d\n",diff);

    return 0;
}// This is the end of the function main. Here now we call the code lines inside the braces a block.
