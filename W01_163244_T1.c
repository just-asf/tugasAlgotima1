#include <stdio.h>
#include <string.h>

//--- Konfigurasi Warna & Tampilan (UI) ---
#define ANSI_RESET "\033[0m"
#define STYLE_BOLD "\033[1m"
#define HEAD_TITLE(teks) printf("----- " STYLE_BOLD teks ANSI_RESET " -----\n")
#define FAIL_RED "\033[31m"
#define AQUA_CYAN "\033[36m"

#define LINE printf("-----------------------------\n\n")

//--- Logika matematika ASCII ---
char besar(char a)
{
    return (a >= 'a' && a <= 'z') ? a - 32 : a;
}
char kecil(char a)
{
    return (a >= 'A' && a <= 'Z') ? a + 32 : a;
}

//--- Fungsi Input ---
void inputKalimat(char *word, int size)
{
    HEAD_TITLE("INPUT");
    printf("Masukan Kalimat : ");
    fgets(word, size, stdin);
    word[strcspn(word, "\n")] = 0;
}

//--- Fungsi Logika Utama ---
void ubahUpperCase(char *wordUp, char *resultUp)
{
    int i;
    for (i = 0; wordUp[i] != '\0'; i++)
    {
        resultUp[i] = besar(wordUp[i]);
    }
    resultUp[i] = '\0';
    HEAD_TITLE("OUTPUT");
    printf("%s\n", resultUp);
    LINE;
}
void ubahLowerCase(char *wordLow, char *resultLow)
{
    int i;
    for (i = 0; wordLow[i] != '\0'; i++)
    {
        resultLow[i] = kecil(wordLow[i]);
    }
    resultLow[i] = '\0';
    HEAD_TITLE("OUTPUT");
    printf("%s\n", resultLow);
    LINE;
}
void switchCase(char *wordSwitch, char *resultSwitch)
{
    int i;
    for (i = 0; wordSwitch[i] != '\0'; i++)
    {
        if (wordSwitch[i] >= 'A' && wordSwitch[i] <= 'Z')
        {
            resultSwitch[i] = kecil(wordSwitch[i]);
        }
        else if (wordSwitch[i] >= 'a' && wordSwitch[i] <= 'z')
        {
            resultSwitch[i] = besar(wordSwitch[i]);
        }
        else
        {
            resultSwitch[i] = wordSwitch[i];
        }
    }
    resultSwitch[i] = '\0';
    HEAD_TITLE("OUTPUT");
    printf("%s\n", resultSwitch);
    LINE;
}

//--- Program Utama ---
int main()
{
    char kalimat[1024], hasil[1024];
    int pilihan = 0;
    while (pilihan != 4)
    {
        HEAD_TITLE("MENU");
        printf("1. Uppercase\n");
        printf("2. Lowercase\n");
        printf("3. Switching\n");
        printf("4. Keluar\n");
        printf("Pilihan : ");
        if (scanf("%d", &pilihan) == 0)
        {
            printf(FAIL_RED STYLE_BOLD "Error! Harap Masuk Angka Sesuai Menu\n" ANSI_RESET);
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
        {
            inputKalimat(kalimat, sizeof(kalimat));
            ubahUpperCase(kalimat, hasil);

            break;
        }
        case 2:
        {

            inputKalimat(kalimat, sizeof(kalimat));
            ubahLowerCase(kalimat, hasil);

            break;
        }
        case 3:
        {
            inputKalimat(kalimat, sizeof(kalimat));
            switchCase(kalimat, hasil);

            break;
        }
        case 4:
        {
            printf(STYLE_BOLD AQUA_CYAN "\n--- TERIMA KASIH MENGGUNAKAN SISTEM SAYA  (ﾉ◕ヮ◕)ﾉ ---\n" ANSI_RESET);
        }
        default:
            break;
        }
    }

    return 0;
}