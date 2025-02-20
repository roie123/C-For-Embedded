#include <math.h>
#include <stdio.h>

/**
 * @file main.c
 * @brief
 * This program will take two points from the user, and calculate the third point using some basic linear equations and trigonometry
 * it will calculate the side lengths of the triangle, the perimeter and the area
 * @author Roie Natan Ivri
 * @date 20/02/2025 16:34
 * @version 1.0
 *
 * @details
 *
 *
 */

int main(void) {

double x1,y1,x2,y2;
    printf("Enter the first point numbers in this format number<space> number: \n");
    scanf("%lf%lf",&x1,&y1);
    printf("Enter the second point numbers in this format  number<space> number \n");
    scanf("%lf%lf",&x2,&y2);
    printf("the first point is %lf %lf \n"
           "the second point is %lf %lf \n", x1,y1,x2,y2);

    if (x1==x2 && y1==y2) {
        printf("The points are the same, there can be no triangle \n");
        return 1;

    }
    double original_function_slope =x1-x2>0.0? (y1-y2)/(x1-x2) :0;// the slope of the function
    double y_intercept= -((-original_function_slope)*x2-y2);//the slope is negative to get the right angle linear function
    printf("the linear function to get the third point is : y=%lfx +%lf \n",(-original_function_slope),y_intercept);
    double relative_x = x2 +3;// to get some distance from the x2,y2 point, every value here is acceptable except 0
    double relative_y = relative_x*(-original_function_slope)+y_intercept;
    printf("The triangle is a right triangle because the slope of the original two points, is equal to (-1)*m, that means its perpendicular to the point \n");
    printf("the third pint is : (%lf %lf) \n",relative_x,relative_y);
    double first_side_length = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    double second_side_length = sqrt(pow((relative_x-x2),2)+pow((relative_y-y2),2)); //distance between two points where the m
    double third_side_length = sqrt(pow(first_side_length,2)+pow(second_side_length,2));//pythagorean theorem
    printf("The first side length is %lf \n",first_side_length);
    printf("The second side length is %lf \n",second_side_length);
    printf("The perimeter is : %lf  \n" ,(first_side_length+second_side_length+third_side_length));
    printf("The area : %lf", (first_side_length*second_side_length/2.0));



    return 0;
}
