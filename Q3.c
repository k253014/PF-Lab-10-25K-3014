#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello World 123! Programming is Fun!";
    int digits = 0, consonants = 0, vowels = 0, spaces = 0;
    int total = strlen(str);

    for (int i = 0; i < total; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (str[i] >= 'A' && str[i] <= 'z')
        {
            if (str[i] == 'a' || str[i] == 'A' || str[i] == 'E' || str[i] == 'e' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
                vowels++;
            else
                consonants++;
        }
        else if (str[i] == ' ')
            spaces++;
    }

    printf("Statistics:\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Characters: %d\n", total);
}