#include <stdio.h>

int reverseInt(int x)
{
    long reminder, sum = 0;
    while (x != 0)
    {
        reminder = x % 10;
        sum = sum * 10 + reminder;
        x = x / 10;
    }
    return sum;
}

int main()
{
    int x = 123;
    printf("%d", reverseInt(x));
}