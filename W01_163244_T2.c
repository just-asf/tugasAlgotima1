#include <stdio.h>
#define MERAH "\033[31m"
#define BOLD "\033[1m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"
#define CETAK_JUDUL(teks) printf("=== " BOLD teks RESET " ===\n")
void inputMatriks(int matriks[][3], char *judul)
{
    printf("=== " BOLD "INPUT MATRIKS %s 3x3" RESET " ===\n", judul);
    printf(YELLOW "(Ketik 3 angka per baris (Contoh: 1 2 3)\n" RESET);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriks[i][j]);
        }
        printf("\n");
    }
}
void perkalianMatriks(int first[][3], int second[][3])
{
    int hasil[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            hasil[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                hasil[i][j] += first[i][k] * second[k][j];
            }
        }
    }
    CETAK_JUDUL("HASIL PERKALIAN MATRIKS");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    printf("=============================\n\n");
}
void penjumlahanMatriks(int first[][3], int second[][3])
{
    int hasil[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            hasil[i][j] = first[i][j] + second[i][j];
        }
    }
    CETAK_JUDUL("HASIL PENJUMLAHAN MATRIKS");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    printf("=============================\n\n");
}
void transposeMatriks(int first[][3], int second[][3])
{
    int hasil1[3][3], hasil2[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            hasil1[i][j] = first[j][i];
            hasil2[i][j] = second[j][i];
        }
    }
    CETAK_JUDUL("TRANSPOSE MATRIKS PERTAMA");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", hasil1[i][j]);
        }
        printf("\n");
    }
    CETAK_JUDUL("TRANSPOSE MATRIKS KEDUA");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", hasil2[i][j]);
        }
        printf("\n");
    }
    printf("=============================\n\n");
}
int main()
{
    int firstMatriks[3][3], secondMatriks[3][3];
    int pilihan = 0;
    inputMatriks(firstMatriks, "PERTAMA");
    inputMatriks(secondMatriks, "KEDUA");
    while (pilihan != 4)
    {
        CETAK_JUDUL("MENU");
        printf("1. Perkalian Dua Buah Matrix\n");
        printf("2. Penjumlahan Dua Buah Matrix\n");
        printf("3. Transpose Dua Buah Matrix\n");
        printf("4. Keluar\n");
        printf("Pilihan : ");
        if (scanf("%d", &pilihan) == 0)
        {
            printf(MERAH BOLD "Error! Harap Masuk Angka Sesuai Menu\n" RESET);
            printf("=============================\n\n");
            while (getchar() != '\n')
                ;

            pilihan = 0;
            continue;
        }
        getchar();
        switch (pilihan)
        {
        case 1:
            perkalianMatriks(firstMatriks, secondMatriks);
            break;
        case 2:
            penjumlahanMatriks(firstMatriks, secondMatriks);
            break;
        case 3:
            transposeMatriks(firstMatriks, secondMatriks);
            break;
        default:
            break;
        }
    }

    return 0;
}