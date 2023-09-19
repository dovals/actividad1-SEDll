#include <stdio.h>

int main() {
    int digitCounts[10] = {0}; // Inicializamos el arreglo para contar d�gitos a cero
    int whiteSpaceCount = 0;
    int otherCount = 0;
    char ch;

    printf("Ingresa caracteres (presiona Ctrl+D para finalizar):\n");

    while ((ch = getchar()) != EOF) {
        if (ch >= '0' && ch <= '9') {
            // Si es un d�gito, incrementamos el contador correspondiente
            digitCounts[ch - '0']++;
        } else if (ch == ' ' || ch == '\t' || ch == '\n') {
            // Si es un car�cter en blanco, incrementamos el contador de espacios en blanco
            whiteSpaceCount++;
        } else {
            // Si no es un d�gito ni un car�cter en blanco, incrementamos el contador de otros caracteres
            otherCount++;
        }
    }

    int i;
    printf("Conteo de d�gitos:\n");
    for (i = 0; i < 10; i++) {
        printf("D�gito %d: %d\n", i, digitCounts[i]);
    }

    printf("Espacios en blanco: %d\n", whiteSpaceCount);
    printf("Otros caracteres: %d\n", otherCount);

    return 0;
}
