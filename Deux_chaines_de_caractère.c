#include <stdio.h>
#include <string.h>

void trierChaines(char *chaine1, char *chaine2) {
    if (strcmp(chaine1, chaine2) > 0) {
        char temp[100];
        strcpy(temp, chaine1);
        strcpy(chaine1, chaine2);
        strcpy(chaine2, temp);
    }
}

int main() {
    char chaine1[100], chaine2[100];
    printf("Entrez deux chaines de caracteres: ");
    scanf("%s %s", chaine1, chaine2);
    trierChaines(chaine1, chaine2);
    printf("Ordre alphabetique: %s, %s\n", chaine1, chaine2);
    return 0;
}
