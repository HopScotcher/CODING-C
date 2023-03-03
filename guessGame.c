#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_num_generator();
int user_input();

int main()
{
    //uses the random number generator program 
    // the user enters a value which is then compared to the random number generated
    // logic : if guess is wrong while loop works lika charm

    // int result = user_input();

    // if(result == 0){
    //     for(int i = 2; i<= 3; i++){
    //         printf("try %d:",i);
    //         user_input();
    // }

    // }

    int users_guess;
    int random_int = random_num_generator();

    printf("Guess a number\n");
    scanf("%d",&users_guess);

    if(users_guess != random_int){
        for(int i = 2; i<= 3; i++){

            printf("try %d:",i);
            printf("Guess a number\n");
            scanf("%d",&users_guess);
    } 

    if(users_guess == random_int){
        printf("You won!!\n your guess = %d\n secret number = %d\n", users_guess, random_int);
    }else{
        printf("secret number = %d; your guess = %d\n", random_int, users_guess);
    |}
     

    }
    
    
}

int random_num_generator()
{
    srand(time(NULL)); 
    int random_int = rand() % 5;

    return random_int;
}

// int user_input()
// {
//     int users_guess;
//     int random_int = random_num_generator();

//     // printf("Guess a number\n");
//     // scanf("%d",&users_guess);


//     // printf("secret number = %d; your guess = %d", random_int, users_guess);

//     main(users_guess, random_int);
// }