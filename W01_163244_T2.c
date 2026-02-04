#include <stdio.h>
void perkalianMatriks(int first[][3],int second[][3]){
    int hasil[3][3];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            hasil[i][j] = 0;
            for(int k=0;k<3;k++){
                hasil[i][j] += first[i][k] * second[k][j];
            }
        }
    }
    for(int i = 0 ;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",hasil[i][j]);
        }
        printf("\n");
    }
}
void penjumlahanMatriks(int first[][3],int second[][3]){
    int hasil[3][3];
    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            hasil[i][j] = first[i][j] + second[i][j]; 
        }
    }
        for(int i = 0 ;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",hasil[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int firstMatriks[3][3],secondMatriks[3][3];
    int pilihan = 0;
    printf("Masukan Matriks Pertama 3x3\n");
    for(int i = 0 ;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&firstMatriks[i][j]);
        }
        printf("\n");
    }
    printf("Masukan Matriks Kedua 3x3\n");
    for(int i = 0 ;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&secondMatriks[i][j]);
        }
        printf("\n");
    }
    while(pilihan != 4){
        printf("1. Perkalian Dua Buah Matrix\n");
        printf("2. Penjumlahan Dua Buah Matrix\n");
        printf("3. Transpose Dua Buah Matrix\n");
        printf("4. Keluar\n");
        printf("Pilihan : ");
        scanf("%d",&pilihan);

        switch (pilihan)
        {
        case 1:
            perkalianMatriks(firstMatriks,secondMatriks);
            break;
        case 2:
            penjumlahanMatriks(firstMatriks,secondMatriks);
            break;
        default:
            break;
        }
    }
    
    return 0;
}