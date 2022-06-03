#include <stdio.h>

struct Result {
    int vagfol;
    int vagsesh;
};

struct Result divide(int a, int b){
    struct Result data;
    data.vagfol = a/b;
    data.vagsesh = a%b;

    return data;
};

int main()
{
    struct Result result = divide(20, 4);
    printf("%d %d", result.vagfol, result.vagsesh);

    return 0;
}
