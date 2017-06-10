#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)  
{
    long long   card_number, orig_number;
    string      card_type;
    int         digits = 0, temp = 0, current = 0, 
                even_digits = 0, odd_digits = 0, total_sum = 0;
    bool        is_even = false;
        printf("Number: ");
    card_number = GetLongLong();
    orig_number = card_number;
    while (card_number != 0)
    {
        current = (card_number % 10);
        digits += 1;
        if (is_even == true)
        {
            temp = current * 2;
            while (temp != 0)
            {
                even_digits += temp % 10;
                temp /= 10;
            }
            is_even = false;
        }
        else
        {
            odd_digits += current;
            is_even = true;
        }
        card_number /= 10;
    }
    total_sum = even_digits + odd_digits;
    if (total_sum % 10 == 0)
    {
        if (digits == 15)
        {   
            if ((orig_number / (long long) 10E12) == 34 || 
                (orig_number / (long long) 10E12) == 37)
            {
                card_type = "AMEX";
            }
            else
            {
                card_type = "INVALID";   
            }
        }
        else if (digits == 16)
        {
            if ((orig_number / (long long) 10E13) >= 51 && 
                (orig_number / (long long) 10E13) <= 55)
            {
                card_type = "MASTERCARD";
            }
            else if ((orig_number / (long long) 10E14) == 4) 
            {
                card_type = "VISA";
            }
            else
            {
                card_type = "INVALID";   
            }
        }
        else if (digits == 13)
        {
            if ((orig_number / (long long) 10E11) == 4)
            {
                card_type = "VISA";
            }
            else
            {
                card_type = "INVALID";   
            }                
        }
        else
        {
            card_type = "INVALID";
        }
    }
    else
    {
        card_type = "INVALID"; 
    }
    printf("%s\n", card_type);

    return 0;
}