#include <stdio.h>

//--- Konfigurasi Warna & Tampilan (UI) ---
#define ALERT_RED "\033[31m"
#define STYLE_BOLD "\033[1m"
#define HINT_YELLOW "\033[33m"
#define FORMAT_RESET "\033[0m"
#define APP_HEADER(teks) printf("=== " STYLE_BOLD teks FORMAT_RESET " ===\n")

#define LINE printf("=============================\n\n")

//--- Fungsi Input Matriks ---
void inputMatriks(int matriks[][3], char *judul)
{
    printf("=== " STYLE_BOLD "INPUT MATRIKS %s 3x3" FORMAT_RESET " ===\n", judul);
    printf(HINT_YELLOW "(Ketik 3 angka per baris (Contoh: 1 2 3)\n" FORMAT_RESET);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriks[i][j]);
        }
        printf("\n");
    }
}

//--- Operasi Perkalian ---
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
    APP_HEADER("HASIL PERKALIAN MATRIKS");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    LINE;
}

//--- Operasi Penjumlahan ---
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
    APP_HEADER("HASIL PENJUMLAHAN MATRIKS");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    LINE;
}

//--- Operasi Transpose ---
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
    APP_HEADER("TRANSPOSE MATRIKS PERTAMA");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", hasil1[i][j]);
        }
        printf("\n");
    }
    APP_HEADER("TRANSPOSE MATRIKS KEDUA");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", hasil2[i][j]);
        }
        printf("\n");
    }
    LINE;
}

//--- Program Utama ---
int main()
{
    int firstMatriks[3][3], secondMatriks[3][3];
    int pilihan = 0;
    inputMatriks(firstMatriks, "PERTAMA");
    inputMatriks(secondMatriks, "KEDUA");
    while (pilihan != 4)
    {
        APP_HEADER("MENU");
        printf("1. Perkalian Dua Buah Matrix\n");
        printf("2. Penjumlahan Dua Buah Matrix\n");
        printf("3. Transpose Dua Buah Matrix\n");
        printf("4. Keluar\n");
        printf("Pilihan : ");
        if (scanf("%d", &pilihan) == 0)
        {
            printf(ALERT_RED STYLE_BOLD "Error! Harap Masuk Angka Sesuai Menu\n" FORMAT_RESET);
            LINE;
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
        case 4:
            printf(STYLE_BOLD HINT_YELLOW "\n=== TERIMA KASIH MENGGUNAKAN SISTEM SAYA ⊂◉‿◉つ ===\n" FORMAT_RESET);
        default:
            break;
        }
    }

    return 0;
}