#include <stdio.h>
#include <stdlib.h>

int main()
{   //constant tax rates as per problem definition.
    double statetax,sales,total_collect,State_tax_rate = 0.04; // THis is just 4%.
    double totaltax,countytax,County_tax_rate =0.05;// This is for 5%.
    char month[20];

    // prompt to prime the sentinel-controlled loop.
    printf("Enter total amount collected (-1 to end): ");
    scanf("%lf", &total_collect); // this loop will continue until the user enters -1.
    while (total_collect !=-1.0){
           printf("Enter the name of the month: ");
           scanf("%s",month); // it reads the string for the month.

    sales = total_collect / (1.00 + State_tax_rate +County_tax_rate);
    countytax = sales * County_tax_rate;
    statetax = sales * State_tax_rate;
    totaltax = countytax + statetax;

            //Displays the result result tha matches the exact output formatting.
            printf("Total Collections: $ %.2f\n",total_collect);
            printf("Sales: $%.2f\n",sales);
            printf("County Sales Tax: $ %.2f\n",countytax);
            printf("State Sales Tax: $ %.2f\n",statetax);
            printf("Total Sales Tax: $ %.2f\n",totaltax);

              //now we can prompt the user to enter next iteration .
            printf("Enter Total Collected(-1 to end) : ");
            scanf("%lf", &total_collect);
    }




return 0;
}
