#include<stdio.h>

int proximoQuinze(int vetor[]){

/*Ao analisar o objetivo o grupo apercebeu-se que o elemento cujo 
numero é mais próximo de 15 é o maior elemento do array.

Ideia: esta função pode estar num header tal como 
todas as outras de mode que no main script sófique a função main*/

    int max = 5;

    for(int i = 0; i < 16; i++){

        if(vetor[i] > max){
            max = vetor[i];
        }
    }

    return max;
}

/* Trabalho realizado por:

    **> ↓ É favor inserir aqui os vossos nome e os números ↓ <**

* --> Aluno: Marco Bernardes, Número:a45703
* --> Aluno:                , Número:      
* --> Aluno:                , Número:      
* --> Aluno:                , Número:      
* --> Aluno:                , Número:      
*/

int main(){

    int array[16];
    int elemento = 0;
    int maximo;
    printf("\t Inserir 16 numeros inteiros num vetor\n");
    printf("\t Os elementos do array devem estar no intervalo de 6 a 14\n");


     for(int i = 0; i < 16; i++){

        printf("Insira um elemento para o array: ");
        scanf("%d", &elemento);

        while(elemento < 6 || elemento > 14){
    
            printf("Numero errado, o elemento deve estar no intervalo de 6 a 14\n");

            printf("Digite outro elemento: ");
            scanf("%d", &elemento);
        }

        array[i] = elemento;

     }
    /*  Imprime todos os elementos do array na linha de comandos --debug

    for(int i = 0; i < 16; i++){

         printf("%d\n", array[i]); 
     }
    */
     maximo = proximoQuinze(array);

     printf("\nO Valor mais próximo de 15 presente neste array é: %d\n", maximo);

    return 0;
}