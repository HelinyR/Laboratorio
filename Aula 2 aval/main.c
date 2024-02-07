#include <stdio.h>

int somaIterativa(int n) {
    int soma = 0;
    for (int i = 1; i <= n; ++i) {
        soma += i;
    }
    return soma;
}

int somaRecursiva(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + somaRecursiva(n - 1);
    }
}

int main() {
    int numero;

    printf("Digite um número para calcular a soma dos primeiros N números naturais: ");
    scanf("%d", &numero);

    int somaIterativaResult = somaIterativa(numero);
    printf("A soma dos primeiros %d números naturais calculada iterativamente é: %d\n", numero, somaIterativaResult);

    int somaRecursivaResult = somaRecursiva(numero);
    printf("A soma dos primeiros %d números naturais calculada recursivamente é: %d\n", numero, somaRecursivaResult);

}


