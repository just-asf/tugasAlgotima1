#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char kalimat[1024],hasil[1024];
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
            printf("Masukan Kalimat : ");
            fgets(kalimat,sizeof(kalimat),stdin);
            for(int i = 0;kalimat[i]!= '\0';i++){
                hasil[i] = toupper(kalimat[i]);
            }
            hasil[strlen(hasil)] = '\0';
            printf("%s\n",hasil);
            break;
        case 2:
            printf("Masukan Kalimat : ");
            fgets(kalimat,sizeof(kalimat),stdin);
            for(int i = 0;kalimat[i]!= '\0';i++){
                hasil[i] = tolower(kalimat[i]);
            }
            hasil[strlen(hasil)] = '\0';
            printf("%s\n",hasil);
            break;
        case 3:
            printf("Masukan Kalimat : ");
            fgets(kalimat,sizeof(kalimat),stdin);
            for(int i = 0;kalimat[i]!= '\0';i++){
                if(isupper(kalimat[i])){
                    hasil[i] = tolower(kalimat[i]);
                }else if(islower(kalimat[i])){
                    hasil[i] = toupper(kalimat[i]);
                }else{
                    hasil[i] = kalimat[i];
                }
            }
            hasil[strlen(hasil)] = '\0';
            printf("%s\n",hasil);
            break;
        default:
            break;
        }
    }
    
    return 0;
}