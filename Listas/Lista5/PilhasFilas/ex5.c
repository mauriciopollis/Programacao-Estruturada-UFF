/*
Faça um programa que simule a ordem de execução de vários processos em uma CPU.
    • Declare uma fila encadeada que guarde em cada nó o número do processo e seu tempo de execução. O tempo de execução é estimado em 
    unidades inteiras.
    • Preencha a fila com alguns processos.
    • O processo que vai executar é o primeiro da fila.
    • O primeiro processo deve ser retirado da fila e deve ser escrita na tela a mensagem: Executando processo #.
    • Um processo só pode executar por um período máximo de 2 u.t. Caso o seu tempo estimado para execução seja maior do que 2, o processo 
    deve ser inserido ao final da fila novamente.
    • Cada vez que um processo executa o seu tempo deve ser devidamente decrementado.
    • O programa termina a execução quando não existirem mais processos na fila.
    • Crie procedimentos para inserir e remover processos da fila.
*/