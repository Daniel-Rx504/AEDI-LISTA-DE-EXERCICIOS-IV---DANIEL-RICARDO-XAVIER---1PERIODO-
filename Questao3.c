#include <stdio.h>

int main() {
    int n, i, j;
    float chave;

    printf("Digite a quantidade de produtos:\n ");
    scanf("%d", &n);

    float arr[n]; 
    
    printf("Digite os valores dos produtos:\n");
    for (i = 0; i < n; i++) {
        printf("Valores %d: ", i + 1);
        scanf("%f", &arr[i]);
    }
    
    for (i = 1; i < n; i++) {
        chave = arr[i]; 
        j = i - 1; 


        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j]; 
            j--; 
        }

        arr[j + 1] = chave; 
    }
    
    printf("Valores ordenados:\n ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }

    return 0;
}
