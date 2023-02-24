#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomInt()
{
    // srand(time(NULL));                  // seed the random number generator with the current time
    int random_number = rand() % 9 + 1; // generate a random integer
    return random_number;
}

int main()
{
    int x;
    printf("how many random numbers do you want?\n");
    scanf("%d", &x);

    srand(time(NULL)); 

    for (int i = 0; i < x; i++)
    {
        int random_number = randomInt();
        printf("%d", random_number);
    }

    
    
    return 0;
}
