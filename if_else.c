#include <stdio.h>
int main()
{
    int tk;
    printf("Tmr kace koto tk ase = ");
    scanf("%d", &tk);

    if (tk >= 100)
    {
        printf("Burger khabo\n");
    }
    else if (tk >= 50)
    {
        printf("Fuska khabo\n");
    }
    else
    {
        printf("Kisui khabo na\n");
    }

    return 0;
}
