#include <stdio.h>

int main(void) {
    // Declare angles as integer variables in whole degrees
    int angle1, angle2, angle3; 

    /*Input: Enter and read the two known angles*/
    printf("Enter the first angle (degrees): ");
    scanf("%d", &angle1);
    printf("Enter the second angle (degrees): ");
    scanf("%d", &angle2);

    /*Validation: both angles must be positive and sum to less than 180 degrees*/
    if (angle1 <= 0 || angle2 <= 0 || (angle1 + angle2) >= 180) {
        printf("Invalid input: these angles cannot form a triangle. \n");
        return 1;
    }

    /*Process: the angles of a triangle addup to 180 degrees*/
    angle3 = 180 - (angle1 + angle2);
    printf("The third angle is %d degrees. \n", angle3);

    /*Decision: a right-angled triangle has one angle of 90 degrees */
    if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
        printf("The triangle IS a right-angled triangle. \n");
    } else {
        printf("The triangle is NOT a right-angled triangle. \n");
    }

    return 0;

}