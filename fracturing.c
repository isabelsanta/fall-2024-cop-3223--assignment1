// This is assignment 1 of COP3223C-24Fall 0V06
// OBJECTIVE: effectively use fracturing with my functions to perform math about a CIRCLE
#include <math.h>
#include <stdio.h>

#define PI 3.14159

// Function to calculate the distance between two points in a circle

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();


int main(int argc, char **argv) {

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
    }

double calculateDistance(){
    //define my variables
    double x1, y1, x2, y2, distance;

    //ask user to input the two points
    printf("Please enter x1 and x2: ");
    scanf("%lf", &x1);
    scanf("%lf", &x2);

    printf("Please enter y1 and y2: ");
    scanf("%lf", &y1);
    scanf("%lf", &y2);

    //the distance formula for a circle
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    printf("The distance between the two points is %lf\n", distance);

    return distance;

}

double calculatePerimeter() {

    //define my variables and call the calculateDistance function
    double distance = calculateDistance();
    double perimeter = PI * distance;

    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);

    return 5.0;
}

double calculateArea(){

    double distance = calculateDistance();
    double area = pow(distance * PI, 2);

    printf("The area of the city encompassed by your request is %lf\n", area);

    return 2.0;
}

double calculateWidth(){

    double distance = calculateDistance();
    double width = distance * 2;

    printf("The width of the city encompassed by your request is %lf\n", width);

    return 5.0;
}

double calculateHeight(){

    double distance = calculateDistance();
    double height = distance * 2;

    printf("The height of the city encompassed by your request is %lf\n", height);

    return 5.0;
}