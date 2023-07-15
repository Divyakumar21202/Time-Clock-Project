#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int hour, minute, second;
int month, year, date;

int main()
{
    printf("Set Your Date & Time:\n");

    printf("Enter Year: ");
    scanf("%d", &year);

    printf("Enter Month: ");
    scanf("%d", &month);

    printf("Enter Date: ");
    scanf("%d", &date);

    printf("Enter Hour: ");
    scanf("%d", &hour);

    printf("Enter Minute's: ");
    scanf("%d", &minute);

    printf("Enter Second: ");
    scanf("%d", &second);

    while (1)
    {
        if (hour < 12)
        {
            printf("\t\t\t\t\tDATE MONTH YEAR\n", hour, minute, second);
            printf("\t\t\t\t\t%02d : %02d : %02d  \n", date, month, year);
            printf("\t\t\t\t\t%02d:%02d:%02d  AM\n", hour, minute, second);
        }
        else
        {
            printf("\t\t\t\t\tDATE MONTH YEAR\n", hour, minute, second);
            printf("\t\t\t\t\t%02d : %02d : %02d  \n", date, month, year);
            printf("\t\t\t\t\t%02d:%02d:%02d  PM\n", hour, minute, second);
        }
        sleep(1);
        second++;
        if (second == 60)
        {
            minute++;
            second = 0;
        }
        if (minute == 60)
        {
            hour++;
            minute = 0;
        }
        if (hour == 24)
        {
            hour = 0;
        }
        system("cls");
    }

    return 0;
}
