#include <stdio.h>
#include <string.h>
#include <stdbool.h>


 int Palindrom_kontrol(char *s, int a, int b)
        {
            if(a==b || (b-a==1))
            {
                return 1;
            }
            else
            {
                if(s[a]==s[b])
                {
                    return Palindrom_kontrol(s,a+1,b-1);
                }
                else
                {
                    return 0;
                }
            }
        }

int main()
{
    char str[] = "madam";

    if (Palindrom_kontrol(str,0,strlen(str)-1))
    printf("Str palindrom");
    else
    printf("Str palindrom degil");

    return 0;
}
