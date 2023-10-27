#include <stdio.h>

int main() {
    int n = 2; //linhas
    int m = 3; //colunas
    int matriz1[2][3] = {{-3, 4, 3},
                        {6, -2, 1}};
                        
    int matriz2[2][3] = {{3, -4, -3},
                         {-6, 2, -1}};

 
    printf("Matriz 1:\n\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", matriz1[i][j]);
        }
        printf("\n\n");
    }

    printf("Matriz 2:\n\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", matriz2[i][j]);
        }
        printf("\n\n");
    }

    int verificarMatrizOpostas = 1; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz1[i][j] != -matriz2[i][j]) {
                verificarMatrizOpostas = 0; 
                break;
            }
        }
        if (!verificarMatrizOpostas) {
            break;
        }
    }

    if (verificarMatrizOpostas) {
        printf("\nAs matrizes são opostas.\n");
    } else {
        printf("\nAs matrizes não são opostas.\n");
    }

    return 0;
}
