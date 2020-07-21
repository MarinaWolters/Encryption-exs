#include <stdio.h>
#include <cs50.h>
#include <string.h>                 // to access strlen()
#include <ctype.h>                  // to access isalpha(), toupper(), and tolower() functions


// This program reads the string message from the command line and gives back the encrypted message using the rule of opposite letters.
// It also preserves the case and punctuation of the original message and makes sure that the message is at least two characters long.
int main(int argc, string argv[])
{
    string key = argv[1];
    int a = 97;
    int z = 122;
    
    int length = strlen(key);
    if (length >= 2)
    {
        for (int i = 0; i < length; i++)
        {
            if (isalpha(key[i]))
            {
                
                if(isupper(key[i]))
                {
                    key[i] = tolower(key[i]);
                    int index = key[i];
                    key[i] = a - index + z;
                    key[i] = toupper(key[i]);
                }
                else
                {
                    int index = key[i];
                    key[i] = a - index + z;
                }
            }
            
            else
            {
                key[i] = key[i];
            }
        }
    }
    printf("%s\n", key);
    return 0;
}
