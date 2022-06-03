#include <stdio.h>

int main()
{
    int ft_marks[] = {45, 89, 37, 46, 28, 93, 47, 23, 44};
    int st_marks[] = {59, 76, 34, 62, 34, 56, 78, 99, 65};
    int final_marks[] = {23, 45, 67, 89, 80, 76, 54, 32, 87};

    int total_marks[9];

    for(int i=0; i<9; i++){
        total_marks[i] = (ft_marks[i]/4)+(st_marks[i]/4)+(final_marks[i]/2);
    }

    for(int i=0; i<9; i++){
        printf("Roll %d = %d\n", i+1, total_marks[i]);
    }


    return 0;
}
