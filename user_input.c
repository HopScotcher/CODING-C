#include <stdio.h>
#include <string.h>

int main(){
    char name[25];
    
    printf("whats your name?");
    fgets(name, 25, stdin);//fgets is used for taking user input with white spaces
    name[strlen(name)-1] = '\0';//this removes the new line xter at the end of the line

    printf("your name is %s", name);
    return 0;
}
