#include <stdio.h>

int main() {
    int nombreMagique = 42;
    int devine;
    do {
        printf("Entrez un nombre: ");
        scanf("%d", &devine);
        if (devine < nombreMagique)
            printf("Trop bas\n");
        else if (devine > nombreMagique)
            printf("Trop haut\n");
    } while (devine != nombreMagique);
    printf("Bravo, vous avez trouve le nombre magique!\n");
    return 0;
}
