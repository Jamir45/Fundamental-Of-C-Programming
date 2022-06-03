#include <stdio.h>

void rectArea(int w, int h)
{
    int area = w*h;
    printf("The are of rectangle is = %d", area);
}

int main()
{
    int w, h;
    scanf("%d %d", &w, &h);
    rectArea(w, h);

    return 0;
}
