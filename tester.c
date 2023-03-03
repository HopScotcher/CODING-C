#include <stdio.h>
#include <stdio.h>

int check_sign(int num) {
    if (num > 0) {
        return 1;
    } else if (num < 0) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int num = -5;
    int sign = check_sign(num);
    printf("The sign of %d is %d\n", num, sign);
    return 0;
}


// #include <stdlib.h>int check_sign(int num) {
    

// #include <time.h>

// int random_num_generator()
// {
//     srand(time(NULL)); 
//     int random_int = rand() % 5;

//     return random_int;
// }

//  int main()
//  {
//     int result = guessing_prompt();
//     printf("%d",result);

//  }

//  int guessing_prompt()
//  {
//     int users_guess;
//     int random_int = random_num_generator();

//     printf("Guess a number\n");
//     scanf("%d",&users_guess);

//     // printf("secret number = %d; your guess = %d", random_int, users_guess);
    
//      if(users_guess == random_int)
//     {
//         printf("you guessed right!!!");
//         return 0;
//     }
//     else{
//         printf("wrong");
//         return 999;
//     }
//  }
 