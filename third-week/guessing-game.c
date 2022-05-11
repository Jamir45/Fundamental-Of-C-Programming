#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main () {
    srand(time(0));
    int hidden = rand()%100+1;
    printf("%d\n", hidden);

    int user_tern = 6;
    while (user_tern >= 1) {
        int user_number;
        scanf("%d", &user_number);

        if (user_number == hidden) {
            printf("Congratulation, your number is matched and you won the game\n");
            break;
        }else if (user_number < hidden) {
            printf("Your number is small\n");
        }else if (user_number > hidden) {
            printf("Your number is large\n");
        }

        user_tern--;

        if (user_tern > 0) {
            printf("Your remaining tern is = %d\n", user_tern);
        }else {
            printf("Your tern is over and you failed\n");
        }
    }

    return 0;
}
