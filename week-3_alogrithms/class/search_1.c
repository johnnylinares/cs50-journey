#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number: ");

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Number found! #%i\n", i + 1);
            return 0;
        }
    }

    printf("Number not found");
    return 1;
}
