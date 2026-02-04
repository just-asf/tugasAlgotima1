#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char kalimat[1024], hasil[1024];
    int pilihan = 0;
    while (pilihan != 4)
    {
        printf("1. Uppercase\n");
        printf("2. Lowercase\n");
        printf("3. Switching\n");
        printf("4. Keluar\n");
        printf("Pilihan : ");
        scanf("%d", &pilihan);
        getchar();

        switch (pilihan)
        {
        case 1:
        {
            printf("=============================\n\n");
            printf("Masukan Kalimat : ");
            fgets(kalimat, sizeof(kalimat), stdin);
            int i;
            for (i = 0; kalimat[i] != '\0'; i++)
            {
                hasil[i] = toupper(kalimat[i]);
            }
            hasil[i] = '\0';
            printf("%s\n", hasil);
            printf("=============================\n\n");

            break;
        }
        case 2:
        {
            printf("=============================\n\n");

            printf("Masukan Kalimat : ");
            fgets(kalimat, sizeof(kalimat), stdin);
            int i;
            for (i = 0; kalimat[i] != '\0'; i++)
            {
                hasil[i] = tolower(kalimat[i]);
            }
            hasil[i] = '\0';
            printf("%s\n", hasil);
            printf("=============================\n\n");

            break;
        }
        case 3:
        {
            printf("=============================\n\n");

            printf("Masukan Kalimat : ");
            fgets(kalimat, sizeof(kalimat), stdin);
            int i;
            for (i = 0; kalimat[i] != '\0'; i++)
            {
                if (isupper(kalimat[i]))
                {
                    hasil[i] = tolower(kalimat[i]);
                }
                else if (islower(kalimat[i]))
                {
                    hasil[i] = toupper(kalimat[i]);
                }
                else
                {
                    hasil[i] = kalimat[i];
                }
            }
            hasil[i] = '\0';
            printf("%s\n", hasil);
            printf("=============================\n\n");

            break;
        }
        default:
            break;
        }
    }

    return 0;
}