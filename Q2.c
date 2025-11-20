#include <stdio.h>
#include <string.h>

int main()
{
    char email[50];

    printf("Enter email address: ");
    scanf("%s", email);
    char *c = strchr(email, '@');
    int index = c - email;
    printf("Domain: ");
    for (int i = index + 1; i < strlen(email); i++)
    {
        printf("%c", email[i]);
    }
}