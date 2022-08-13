#include<stdio.h>

struct Time {
    int hour;
    int minute;
};

struct Interval{
    struct Time start;
    struct Time end;
};

int main(){
    struct Interval time;

    time.start.hour = 5;
    time.start.minute = 30;

    time.end.hour = 10;
    time.end.minute = 15;

    // printing start and end time
    printf("Start time = %d.%dpm\n", time.start.hour, time.start.minute);
    printf("End time = %d.%dpm", time.end.hour, time.end.minute);

    return 0;
}

