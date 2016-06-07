#include <stdio.h>
#include <string.h>
int main()
{
    char str[32767];
    int count = 0,i;
    while(gets(str) != NULL)
    {
        for(i = 0 ; i < strlen(str) ; i++)
        {
            if(str[i] == '"')
            {
                (count == 0) ? (printf("``"),count = 1):(printf("''"),count = 0);
            }
            else
                printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
