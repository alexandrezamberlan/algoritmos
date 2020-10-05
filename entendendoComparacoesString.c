#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char frase1[100], frase2[100];

    strcpy(frase1, "turma de algoritmos");
    strcpy(frase2,"alunos de algoritmos");

    printf("%s\n", frase1);
    printf("%s\n", frase2);

    printf("%d\n", strcmp(frase2,frase1));
    //0 - se as duas frases forem iguais
    //negativo - se a primeira frase for 'menor' do que a segunda
    //positivo - se a primeira frase for 'maior' do que a segunda
    
    return 1;
}