#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // User input card number
    
    long number = get_long("Number: ");

    // position of a digit
    int position = 1;
    int sumodd = 0;
    int sumeven = 0;
    int firsttwodigits = 0;
    int firstdigit = 0;

    
    // validation check

    for (long i = number; i > 0; i /= 10)
    {

        if (i < 100 && i > 9)
        {
            firsttwodigits = i;
        }
        if (i < 10)
        {
            firstdigit = i;
        }


        int digit = i % 10;

        if (position % 2 == 0)
        {

            int multiple = 2 * digit;
            sumeven += multiple / 10 + multiple % 10;


        }
        else
        {
            sumodd += digit;
        }

        position++;
    }

    int totalsum = sumodd + sumeven;

    
    // print result

    printf("position: %d\n", position);

    if (totalsum % 10 == 0)
    {
        if ((firstdigit == 4 && position == 14) || (firstdigit == 4 && position == 17))
        {
            printf("VISA\n");
        }
        else if (firsttwodigits == 34 || firsttwodigits == 37)
        {
            printf("AMEX\n");
        }
        else if (firsttwodigits >= 51 && firsttwodigits <= 55)
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
