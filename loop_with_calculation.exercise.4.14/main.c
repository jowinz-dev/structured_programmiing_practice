#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Factorials of integers from 1 to 5:\n");
    printf("New Number\tFactorial Value\n");
        for(int i=1; i<=5;++i){
            long factorial =1;
            for(int j=1; j<=i;++j){
                factorial *= j;// this is the iteration calculation process.
            }
            printf("%d\t\t%lld\n",i,factorial);
        }
    return 0;
}
