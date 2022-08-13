#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Unique {
    char name[20];
};

int main()
{
    int n;
    scanf("%d", &n);
    struct Unique nums[n];
    int count = 0;

    for(int i=0; i<n; i++){
        char s[20];
        gets(s);
        strcpy(nums[0].name, s);
        bool found = false;

        for(int j=0; j<count; j++){
            printf("prev name = %s\n", nums[j].name);
            printf("curr name = %s\n", s);
            if(nums[j].name == s){
                printf("Yes\n");
                found = true;
                printf("Found");
                return 0;
            }else{
                found = false;
                printf("Not Found\n");
            }
        }

        if(found == false){
            strcpy(nums[i].name, s);
            count++;
        }

    }

    //printf("prev name = %s\n", nums[0].name);

    return 0;
}
