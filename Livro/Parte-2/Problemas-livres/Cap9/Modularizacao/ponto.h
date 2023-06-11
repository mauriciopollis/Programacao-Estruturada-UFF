/* Funções oferecidas pelo módulo ponto.c */

struct ponto2d {
    float x;
    float y;
};
typedef struct ponto2d Ponto2D;

/* Função distância
** Retorna a distância entre dois pontos
*/
float distancia_entre_pontos_2d(Ponto2D p1, Ponto2D p2);

/*
** Retorna a distância do ponto até a origem do sistema de coordenadas
*/
float distancia_ate_origem(Ponto2D p);