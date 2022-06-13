#include <stdio.h>
#include <string.h>

#define MAX_STR_SIZE 100

int main()
{

    char input[MAX_STR_SIZE];
    scanf("%s", input);

    int length = strlen(input);
    int count = length;
    for (int i = length - 1; i > 0; i--)
    {
        if (input[i] == '-')
        {
            count--;
            i--;
            continue;
        }
        if (input[i] == '=')
        {
            if (input[i - 1] == 'z' && input[i - 2] == 'd')
            {
                count -= 2;
                i -= 2;
                continue;
            }
            else
            {
                count--;
                i--;
                continue;
            }
        }
        if (input[i] == 'j' && (input[i-1] == 'l' || input[i-1] == 'n'))
        {
            count--;
            i--;
            continue;
        }
    }

    printf("%d",count);

    return 0;
}