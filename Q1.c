#include <stdio.h>
#include <string.h>
int main()
{
    char password[50];
    char special_characters[] = "!@#$%%^&*(){}|\\/><~`+_.,";
    char digitChar[] = "123456789";
    int length = 0;
    int schar = 0, dchar = 0, uchar = 0;

    // fgets(password, 50, stdin);
    scanf("%s", password);

    if (strlen(password) >= 8)
    {
        length = 1;
    }
    else
        printf("Password length must be atleast 8 characters\n!");

    for (int i = 0; i < strlen(password); i++)
    {
        if (strchr(special_characters, password[i]))
        {
            schar = 1;
        }
        if (strchr(digitChar, password[i]))
        {
            dchar = 1;
        }

        if (password[i] >= 'A' && password[i] <= 'Z')
        {
            uchar = 1;
        }
    }

    if (!length)
    {
        printf("Length should be atleast 8 characters\n");
    }
    else if (!uchar)
    {
        printf("Atleast 1 uppercase character should be added!\n");
    }
    else if (!dchar)
    {
        printf("Atleast 1 digit 0-9 should be included!\n");
    }
    else if (!schar)
    {
        printf("Atleast 1 special character should be added!\n");
    }
    else
    {
        printf("Strong Password!\n");
    }
}