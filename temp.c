#include<stdio.h>
//#include <ctype.h>

int main(){
    char unit;
    float distance;
    float new_distance;

    printf("enter distance\n");
    scanf("%f", &distance);

    printf("kilometres(k) or miles(m)?\n");
    scanf("%c", &unit);

    printf("inputed unit: %c\n", unit);

    int truth = unit == 'k'? 1 : 0;

    printf("truth =%d \n", truth);

    if(unit == 'k'){
       new_distance = distance * 0.8;
        printf("%f km = %f miles", distance, new_distance);

    }
    else if(unit == 'm'){
        new_distance = distance * 1.2;
        printf("%f miles = %f km", distance, new_distance);

    }
    else{
        printf("please enter valid unit of measurement");
    }

    

}