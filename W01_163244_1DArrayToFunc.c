#include <stdio.h>
int sum(int recievedArr[])
{
    int result = 0;
    for (int i = 0; i < 5; i++)
    {
        result += recievedArr[i];
    }
    return result;
}
int main()
{
    int randomNumber[5] = {10, 24, 234, 345, 234};
    int total;
    total = sum(randomNumber);
    printf("Hasil Penjumlahan = %d \n", total);
    printf("Hasil Penjumlahan = %d \n", sum(randomNumber));
    return 0;
}