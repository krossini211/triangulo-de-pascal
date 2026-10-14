#include <stdio.h>

int main() {
    int n;

    printf("=== Triangulo de Pascal ===\n");
    printf("Digite o numero de linhas desejado: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um numero maior que zero.\n");
        return 1;
    }

    int tri[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                tri[i][j] = 1; 
            } else {
                tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j]; 
            }
        }
    }

    printf("\nResultado:\n\n");

   
    for (int i = 0; i < n; i++) {
        for (int s = 0; s < n - i; s++) {
            printf("  ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%4d", tri[i][j]);
        }
        printf("\n");
    }

    return 0;
}
