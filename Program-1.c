//Input : 23  34 
//Output: Sum of distances = 57


//Program to add two distances (feet-inch)
#include <stdio.h>
struct Distance
{
    int feet;
} dist1, dist2, sum;

int main()
{
      printf("Enter feet for 1st and 2nd distance: ");
    scanf("%d","%d", &dist1.feet, &dist2.feet);

    // adding feet
    sum.feet = dist1.feet + dist2.feet;
    // adding inches

    printf("Sum of feet = %d”,sum.feet);
    
}
