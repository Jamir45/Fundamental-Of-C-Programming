#include<stdio.h>

int main () {
    char c;
    scanf("%c", &c);

    int lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    int uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lowercase || uppercase) {
        printf("vowel");
    }
    else {
        printf("consonant");
    }

    return 0;
};

