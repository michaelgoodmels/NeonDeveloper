#include <stdio.h>
#include <string.h>

int main() {
    // Erstelle ein String-Array für das Wort "Schweiz"
    char land[] = "Deutschland";

    // Berechne die Länge des Arrays (inklusive Nullterminator)
    int arrayLaenge = sizeof(land) / sizeof(land[0]);

    // Ausgabe der Länge des Arrays
    printf("Die Laenge des Arrays (inkl. \\0): %d\n", arrayLaenge);

    // Ausgabe des Nullterminators
    if (land[arrayLaenge - 1] == '\0') {
        printf("Der letzte Wert im Array ist der Nullterminator: '\\0'\n");
    } else {
        printf("Der letzte Wert im Array ist nicht '\\0'\n");
    }

    return 0;
}
