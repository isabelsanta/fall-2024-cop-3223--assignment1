// This is assignment 1 of COP3223C-24Fall 0V06
// OBJECTIVE: effectively use fracturing with my functions to perform math about a CIRCLE
#include <math.h>
#include <stdio.h>

#define PI 3.14159

// define my functions first so that main will recognize them
double askForUserInput();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();


int main(int argc, char **argv) {
//call my functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
    }

double askForUserInput(){

    //define my variables
    double x1, y1, x2, y2, userInput;

    //ask user to input the two points
    printf("Please enter x1 and x2: ");
    scanf("%lf", &x1);
    scanf("%lf", &x2);

    printf("Please enter y1 and y2: ");
    scanf("%lf", &y1);
    scanf("%lf", &y2);

    //the distance formula for a circle
    userInput = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);

    return userInput;
}

double calculateDistance(){

    double distance = askForUserInput();

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
    double area = pow((distance/2) * PI, 2);

    printf("The area of the city encompassed by your request is %lf\n", area);

    return 2.0;
}

double calculateWidth(){

    double x1, x2;

    askForUserInput();
    double width = fabs(x2-x1);

    printf("The width of the city encompassed by your request is %lf\n", width);

    return 5.0;
}

double calculateHeight(){

    double y1, y2;

    askForUserInput();
    double height = fabs(y2-y1);

    printf("The height of the city encompassed by your request is %lf\n", height);

    return 5.0;
}