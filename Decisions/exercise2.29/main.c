#include <stdio.h>
#include <stdlib.h>

int main()
{   int num1,num2,num3;
        printf("Enter the numbers: \n");
        scanf("%d %d %d",&num1,&num2,&num3);

        printf("========================================");
        printf("\nAscending Order\n");//Here am displaying the type of order am dealing with.
        printf("========================================");
        if (num1<num2 && num1<num3)//am litrary making a decision that all the conditions must be true.
            {
            if(num2<num3)//if both conditions above are true and this is also true, then execute in this order.
                printf("\n%d %d %d\n",num1,num2,num3);

            else printf("\n%d %d %d\n",num1,num3,num2);
        } else if (num2 < num1 && num2 <  num3)
        // all condintions must be true.
        {
            if(num1  < num3)
            printf("\n%d %d %d\n",num2,num1,num3);
        else
        printf("\n%d %d %d\n",num2,num3,num1);
        }else{
        if (num2 <  num1)
            printf("\n%d %d %d\n",num3,num2,num1);
        else printf("\n%d %d %d\n",num3,num1,num2);
        }
    return 0;
}//end of function main.
