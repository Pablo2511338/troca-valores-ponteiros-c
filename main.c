#include <stdio.h>

// Função que troca valores usando ponteiros
void trocar(int *a, int *b) {
    int temp = *a; // temp recebe o valor de a
    *a = *b; // a recebe o valor de b
    *b = temp; // b recebe o valor armazenado em temp
}

int main() {
    int x = 5, y = 10;
    printf("Antes da troca: x = %d, y = %d\n", x, y);
    
    trocar(&x, &y); // Passa o endereço das variáveis
    
    printf("Depois da troca: x = %d, y = %d\n", x, y);
    return 0;
}
