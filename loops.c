#include <stdio.h>
#include <string.h>

int main(){
    char name[25];

    printf("whats your name?");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("your name is %s", name);
}