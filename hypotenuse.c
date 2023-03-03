#include <stdio.h>
#include <math.h>

int main(){
    double a , b, c;

    printf("enter the value of sides a and b:");
    scanf("%lf",&a);
    scanf("%lf",&b);

    c = sqrt((a*a) + (b*b));

    printf("hypotenuse =%.2lf", c);

}