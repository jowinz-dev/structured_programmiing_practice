#include <stdio.h>
#include <stdlib.h>

int main()
{   int sum;
    printf("Evaluating numbers from 1 to 100: \n");
    for (int num=7; num<=100;num+=7){
    sum+= num;
    }
    printf("\nThe sum of all multiples of 7 between 1 and 100 is : %d\n",sum);//this give direct output.

    return 0;
}
