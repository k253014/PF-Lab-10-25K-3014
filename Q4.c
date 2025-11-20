#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Meet me at the park tomorrow!";
    char encrypted[50], decrypted[50];

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            encrypted[i] = str[i];
        }
        else
            encrypted[i] = (char)((int)str[i] + 3);
    }
    for (int i = 0; i < strlen(str); i++)
    {
        if (encrypted[i] == ' ')
        {
            decrypted[i] = encrypted[i];
        }
        else
            decrypted[i] = (char)((int)encrypted[i] - 3);
    }
    printf("Original: %s\n", str);
    printf("Encrypted: %s\n", encrypted);
    printf("Decrypted: %s\n", decrypted);
}