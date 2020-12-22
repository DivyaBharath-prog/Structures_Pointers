//Calculate the Average 
//Input: 10 20 
//Output: 30




#include <stdio.h>
#include <stdlib.h>
struct math {
    float num1;
    float num2;
    float num3;
    float average;
};


int main()
{
    struct math enternum;
    struct math avg;
    printf("Enter a number1,number2,number3:\n");
    scanf("%f %f %f ", &enternum.num1,&enternum.num2,&enternum.num3);
     avg.average = (enternum.num1 + enternum.num2 + enternum.num3)/3;
     printf("The average is: %.2f",avg.average);
    return 0;
} 
