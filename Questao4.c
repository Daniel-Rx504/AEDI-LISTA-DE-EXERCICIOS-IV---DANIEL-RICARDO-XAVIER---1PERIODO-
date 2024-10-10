#include <stdio.h>

int main() {
    int i, j, maiorNota;
    float temp;
    int n = 10;
    
	float notas[10] = {24.5, 35.3, 28.0, 36.4, 21.2, 26.9, 29.1, 35.4, 32.7, 31.1};
    
	for (i = 0; i < n - 1; i++) {
        
		maiorNota = i;

        for (j = i + 1; j < n; j++) {
            if (notas[j] > notas[maiorNota]) {
                maiorNota = j;
            }
        }

        if (maiorNota != i) {
            temp = notas[i];
            notas[i] = notas[maiorNota];
            notas[maiorNota] = temp;
        }
    }

    printf("Notas em ordem decrescente: ");
    for (i = 0; i < n; i++) {
        printf("%.1f ", notas[i]);
    }

    return 0;
}

