#include <stdio.h>

int main()
{
    int randomNumber[5] = {10, 24, 234, 345, 234};
    printf("Isi awal Array\n");
    for (int i = 0; i < 6; i++)
    {
        printf("randomNumber[%d] = %d\n", i, randomNumber[i]);
    }
    return 0;
}