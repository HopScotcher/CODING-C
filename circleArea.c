#include <stdio.h>
#include <math.h>

int main(){
    const float pi = 3.142;
    int radius;
    printf("enter radius\n");
    scanf("%d",&radius);

    float area = pi * radius * radius;

    printf("area = %.2f",area);


}