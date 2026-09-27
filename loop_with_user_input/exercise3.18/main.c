#include <stdio.h>
#include <stdlib.h>

int main()
{   float sales =0.00,salary =0.00;//sales are the gross sales for week and salary the total earnings .
    printf("Enter Sales in Dollars (-1 end): ");
    scanf("%f",&sales);

        //loop cntinues processing until when user inputs -1.
    while (sales !=-1.0){
            //calculating our earnings
        salary=200.00 + (sales * 0.09);

    printf("Salary is: $ %.2f\n", salary);

    printf("Enter Sales in Dollars (-1 end): ");//prompting the user again until they enter -1.
    scanf("%f",&sales);
    }

    return 0;
}
