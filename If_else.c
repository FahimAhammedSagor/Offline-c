#include<stdio.h>
int main()
{
    int tk ;
    printf("Koto Tk ase = ");
    scanf("%d", &tk);
    if(tk >= 5000 )
    {
        printf("Coxs Bazar jabo \n");
        if(tk >= 10000 )
        {
            printf("Sain Marting Jabo \n");
        }
        else
        {
            printf("Firot Asbo \n");
        }
    }
    else
    {
        printf("Kothay Jabo Na \n");
    }
    return 0;
}