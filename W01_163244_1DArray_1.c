#include <stdio.h>

int main(){
    int randomNumber[5] = {10,24,234,345,234};
    printf("Isi awal Array\n");
    for(int i=0;i<5;i++){
        printf("randomNumber[%d] = %d\n",i,randomNumber[i]);
    }
    printf("\n");
    randomNumber[3] = 10000;
    printf("Isi Array setelah berubah");
    for(int i = 0;i<5;i++){
         printf("randomNumber[%d] = %d\n",i,randomNumber[i]);
    }
    return 0;
}