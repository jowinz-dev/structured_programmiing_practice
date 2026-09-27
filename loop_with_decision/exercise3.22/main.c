#include <stdio.h>
#include <stdlib.h>

int main()
{   int passes=0,failures=0,studentcounter=1,result=0;
    while (studentcounter <=10){
        printf("Enter result(1=pass, 2 = fail): ");
        scanf("%d",&result);
        //Functional decision point for the loops.
        if (result ==1){
            passes= passes + 1;
        }else {
        failures = failures + 1;
        }
        studentcounter = studentcounter + 1;//this is the output summary part.
        }
        printf("Passed : %d \n",passes);
        printf("Failed : %d\n",failures);
        //check point based on the loop aggregation data (contextual).
        if (passes>8){
            printf("\n");


        }


    return 0;
}
