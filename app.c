#include <stdio.h>
#include <stdlib.h>

void triangulo(){
    float a,b,c;
    
    printf("Insira o primeiro valor:\n");
    scanf("%f", &a);
    
    printf("Insira o segundo valor:\n");
    scanf("%f", &b);
    
    printf("Insira o terceiro valor:\n");
    scanf("%f", &c);
    
    if (a == b && b == c){
        printf("Equilatero\n");
    }else if(a == c && a != b || b == a && b != c || c == a && c != b){
        printf("Isoceles\n");
    }else {
        printf("escaleno\n");
    }
}
void media(){
    float nota1,nota2,nota3,media;
    
    printf("Insira a primeira nota:\n");
    scanf("%f", &nota1);
    
    printf("Insira a segunda nota:\n");
    scanf("%f", &nota2);
    
    printf("Insira a terceira nota:\n");
    scanf("%f", &nota3);
    
    
    media = (nota1 + nota2 + nota3)/3;
    
    if(media >= 7 || media <= 10){
        printf("Aprovado\n");
        
    }else if(media < 7 && media > 5){
        printf("Recuperação\n");
        
    }else{
        printf("Reprovado\n");
        
    }
}
void AnoBisexto(){
    int ano;
    printf("Insira o Ano:\n");
    scanf("%d", &ano);
    
    if((ano % 4 == 0 && ano %100 != 0) || (ano % 400 == 0)){
        printf("%d é um ano bissexto.\n", ano);
    }else{
        printf("%d não é um ano bissexto.\n", ano);
    }
}
void ParImpar(){
    int numero;
    
    printf("Insira o numero:\n");
    scanf("%d", &numero);
    
    if(numero % 2 == 0){
        printf("%d é par.\n", numero);
    }else{
        printf("%d é impar.\n", numero);
    }
    
    if(numero % 5 == 0) {
        printf("%d é multiplo de 5.\n", numero);
    }
}
int main(){
    
    float opcao;
    
     printf("Digite a função a ser selecionada:\n");
     printf("1- Função triangulo\n");
     printf("2- Função media\n");
     printf("3- Função Ano bisexto\n");
     printf("4- Função impar ou par\n");
     printf("5- Sair do programa\n");
     scanf("%f", &opcao);
     
     if(opcao == 1){
         triangulo();
         
     }else if(opcao == 2){
         media();
         
     }else if(opcao == 3){
         AnoBisexto();
         
     }else if(opcao == 4){
         ParImpar();
         
     }else{
         exit;
     }
    return 0;
}
