#include <stdio.h>
#include <math.h>

void areaofSquare(float length);
void areaofCircle(float radius);
void areaofRectangle(float a, float b);

int main(){
    char type;
    float length, radius, a,b;
    printf("Enter which type area you want (S for square, C for circle, R for rectangle): ");
    scanf(" %c",&type);

    if(type == 'S'|| type == 's'){
        printf("Enter the value of side length: ");
        scanf("%f",&length);
        areaofSquare(length);
    }
    else if(type == 'C'|| type=='c'){
        printf("Enter the value of radius: ");
        scanf("%f", &radius);
        areaofCircle( radius);
    }
    else if (type == 'R' || type == 'r'){
        printf("Enter the values of two sides: ");
        scanf("%f %f", &a,&b);
        areaofRectangle( a,b);
    }
    return 0;
}

void areaofSquare(float length){
    float area = pow(length,2);
    printf("The area of the square is: %f \n",area);
}

void areaofCircle(float radius){
    float area = 3.1416 * pow(radius,2);
    printf("The area of the circle is: %f \n",area);
}

void areaofRectangle(float a , float b){
    float area = a *b;
    printf("The area of the Rectangle is: %f \n",area);
}