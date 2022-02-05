#include <stdio.h>
#include <string.h>

int romanToInt(char *s)
{
    int data[100], sum, i;
    data['I'] = 1;
    data['V'] = 5;
    data['X'] = 10;
    data['L'] = 50;
    data['C'] = 100;
    data['D'] = 500;
    data['M'] = 1000;
    data['\0'] = 0;

    sum = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (data[s[i]] < data[s[i + 1]])
        {
            sum = sum - data[s[i]];
        }
        else
        {
            sum += data[s[i]];
        }
    }
    return sum;
}
int main()
{
    int sum;
    char *s;
    char data = 'M';
    s = &data;

    int sum = romanToInt(s);

    printf("%d", sum);

    return 0;
}