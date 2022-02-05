#include <stdio.h>

int main()
{
    int x, temp, reminder, sum = 0;

    scanf("%d", &x);

    temp = x;

    while (temp != 0)
    {
        reminder = temp % 10;
        sum = (sum * 10) + reminder;
        temp = temp / 10;
    }


    if (sum == x && x >= 0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}

// leet code

/*
bool isPalindrome(int x){
    long long int temp, reminder, sum = 0;
    
    temp = x;

    while (temp != 0)
    {
        reminder = temp % 10;
        sum = sum * 10 + reminder;
        temp = temp / 10;
    }

    if (sum == x && x >= 0)
    {
       return true;
    }
    else
    {
        return false;
    }

}
*/