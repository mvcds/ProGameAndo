#include <stdio.h>

int main()
{
    char* msg = "Voce vai jogar como par ou impar?\n";
    printf(msg);
    //this will only work on windows, apparently
    system("pause");
    return 0;
}
