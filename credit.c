#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get user input card number
    long number = get_long("Number: ");

    int sumodd = 0;
    int sumeven = 0;
    int position = 0;

    while (number > 0)
    {
        int digit = number % 10;
        number /= 10;

        position++;

        if (position % 2 == 0)
        {
            int multiple = 2 * digit;
            sumeven += multiple / 10 + multiple % 10;
        }
        else
        {
            sumodd += digit;
        }
    }

    int totalsum = sumodd + sumeven;

    // Determine card type
    int firstdigit = number;

    if (totalsum % 10 == 0)
    {
        if ((firstdigit == 4 && (position == 13 || position == 16)))
        {
            printf("VISA\n");
        }
        else if (position == 15 && (firstdigit == 34 || firstdigit == 37))
        {
            printf("AMEX\n");
        }
        else if (position == 16 && (firstdigit >= 51 && firstdigit <= 55))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
