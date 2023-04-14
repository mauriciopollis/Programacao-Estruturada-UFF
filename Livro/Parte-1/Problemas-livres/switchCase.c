#include<stdio.h>

int main(void) {

    char time;

    printf("Insira um time de futebol: ");
    scanf("%c", &time);

    switch (time) {
        case 'B':
            printf("Seu time é o glorioso!");
            break;
        case 'F':
            printf("Seu time é o de maior torcida do país!");
            break;
        case 'f':
            printf("Eu odeio seu time!");
            break;
        case 'V':
            printf("Seu time é o mesmo do Casimiro!");
            break;
        default:
            printf("Seu time não é um dos 4 grandes do Rio de Janeiro");
            break;
    }
    
    return 0;
}