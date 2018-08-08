#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    unsigned char password[12];
    printf("enter the desired password \n");
    scanf("%s", password);
    printf("Your password is %s \n", password);
    
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;

    for(int i =0; i < strlen(password); ++i)
    {
        if( islower(password[i]) )
            hasLower = true;
    
        if( isupper(password[i]) )
            hasUpper = true;
    
        if( isdigit(password[i]) )
            hasDigit = true;
    }
    if(hasLower && hasUpper && hasDigit)
    {
        printf("Strong Password\n");
    }
    else
    { 
        printf("Weak Password\n");
    } 
}
