#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159265f

int main(void){
    float radius = 0.0f;
    float diameter = 0.0f;
    float circumference = 0.0f;
    float area = 0.0f;

    printf("Input the diameter of a table: ");
    scanf("%f", &diameter);
    
    radius = diameter /2.0f;
    circumference = 2.0f*PI*radius;
    area = PI *radius*radius;

    printf("\nThe circumference is %.2f.", circumference);
    printf("\nThe area is %.2f.\n", area);
    return 0;
}