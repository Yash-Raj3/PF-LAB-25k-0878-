#include <stdio.h>
#include<string.h>
int main()
{
    char userName[50];
    char Password[8];
    printf("Enter Your UserName :");
    scanf(" %[^\n]", userName);
    printf("Enter Your Password :");
    scanf(" %[^\n]", Password);
    if (strlen(Password) >= 8)
    {
        if (strchr(Password, '@') || strchr(Password, '#'))
        {
            if (strcmpi(userName, Password) != 0)
            {
                printf("Valid Password!");
            }
            else
            {
                printf("Invalid Password!");
            }
        }
        else
        {
            printf("Invalid Password!");
        }
    }
    else
    {
        printf("Invalid Password!");
    }
    return 0;
}