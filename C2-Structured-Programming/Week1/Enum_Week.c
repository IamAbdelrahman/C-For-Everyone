#include <stdio.h>

typedef enum week {
    SAT, SUN, MON, TUE,
    WED, THU, FRI
} W;

void print_day (W w)
{
    switch (w)
        {
        case SAT: printf("Saturday\n"); break;
        case SUN: printf("Sunday\n"); break;
        case MON: printf("Monday\n"); break;
        case TUE: printf("Tuesday\n"); break;
        case WED: printf("Wednesday\n"); break;
        case THU: printf("Thursday\n"); break;
        case FRI: printf("Friday\n"); break;
        default: printf("%d is an error\n", w);
        }
}

W next_day (W w)
{
    return ((w + 1) % 7);
}


int main(void)
{
    W week_1 = FRI;
    print_day(week_1);
    printf("\n");
    print_day(next_day(week_1));
    return 0;
}
