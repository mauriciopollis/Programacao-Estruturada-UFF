/*
Faça um programa que leia as informações sobre as N ordens de serviço de um oficina mecânica. Os seguintes dados serão lidos: número da OS, 
valor, tipo de serviço e nome do cliente. O programa deve apresentar no final:
    • a média de preço dos serviços prestados,
    • os nomes dos clientes que pagaram por serviços acima da média calculada;
    • o nome do cliente que pagou pelo serviço mais caro.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct ordem {
    int numero;
    float valor;
    char tipo[100];
    char nome_cliente[100];
};
typedef struct ordem OrdemDeServico;

int main() {

    int N;
    OrdemDeServico *vet_ordens;
    float media_precos = 0, maior_valor = 0;
    char cliente_mais_caro[100];

    printf("Digite o número de ordens de serviço: ");
    scanf("%d", &N);

    vet_ordens = (OrdemDeServico*)malloc(sizeof(OrdemDeServico) * N);

    for(int i=0; i<N; i++) {
        printf("Digite o número da ordem de serviço: ");
        scanf("%d", &vet_ordens[i].numero);
        printf("Digite o valor da ordem de serviço: ");
        scanf("%f", &vet_ordens[i].valor);
        printf("Digite o tipo da ordem de serviço: ");
        scanf(" %99[^\n]s", vet_ordens[i].tipo);
        printf("Digite o nome do cliente da ordem de serviço: ");
        scanf(" %99[^\n]s", vet_ordens[i].nome_cliente);
    }

    for(int i=0; i<N; i++) {
        media_precos += vet_ordens[i].valor;
        if(vet_ordens[i].valor>maior_valor) {
            maior_valor = vet_ordens[i].valor;
            strcpy(cliente_mais_caro, vet_ordens[i].nome_cliente);
        }
    }

    media_precos = media_precos/N;

    printf("O preço médio das ordens de serviço é: %f\n", media_precos);
    printf("Clientes que pagaram acima do preço médio pelo serviço: \n");
    for(int i=0; i<N; i++) {
        if(vet_ordens[i].valor>media_precos) {
            printf("%s\n", vet_ordens[i].nome_cliente);
        }
    }
    printf("Cliente mais caro: %s\n", cliente_mais_caro);

    return 0;
}