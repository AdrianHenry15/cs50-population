#include <stdio.h>

int main(void)
{
    // prompt for start size
    int start;
    do
    {
        printf("Starting Population: ");
        scanf("%d", &start);

    }
    while(start < 9);

    // prompt for end size

    int end;
    do
    {
        printf("Ending Population: ");
        scanf("%d", &end);
    }
    while (start > end);

    // calculate number of years until we reach threshold
    int year = 0;
    while(start < end)
    {
        start = start + (start/3) - (start/4);
        year++;
    };

    // print number of years
    printf("Years: %i\n", year);
    
}