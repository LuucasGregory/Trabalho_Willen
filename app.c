#include <stdio.h>
#include <stdlib.h>
    void triangulo()
    {
        float a,b,c;
        printf("Digite os valores dos triangulo : \n");
        scanf("%f %f %f", &a, &b, &c);
        if (a==b&&b==c)
        {
            printf("equilatero \n");
        }
        else if (a==b||b==c||a==c)
        {
            printf("isoceles \n");
        }
        else
        {
            printf("escaleno \n");
        }
    }
    void media ()
    {
        char nome[100];
        int notas[4];
        int resultado = 0;
        int tamanho = sizeof(notas) / sizeof(notas[0]);
        printf("digite o seu nome : \n");
        scanf(" %[^\n]", &nome);
        for(int i=0;i<tamanho;i++)
        {
            printf("digite a nota : %d\n", i+1);
            scanf("%d", &notas[i]);
            resultado = resultado + notas[i];
        }
        resultado=resultado/tamanho;
    }
    void bissexto()
    {
        int ano, restante;
        printf("Digite o ano : ");
        scanf("%d", &ano);
        
        if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
        {
            printf("O ano é bissexto\n");
        }
        else
        {
            printf("O ano nâo é Bissexto\n");
        }
    }
    void identificar_numero ()
    {
        int numero;
        printf("Digite seu número :");
        scanf("%d", &numero);
        if (numero % 2 == 0 && numero % 5 == 0)
        {
            printf("O Número é Par e Multiplo de 5. \n");
        }
        else if(numero % 2 == 0)
        {
            printf("O Número é par. \n");
        } 
        else if(numero % 5 == 0)
        {
            printf("O Número é Multiplo de 5 e é Impar. \n");
        }
        else
        {
            printf("O Número é impar. \n");
        }
    }
    void tabuada()
    {
        int numero_t, contador;
        printf("\nEscolha o número para a Tabuada : ");
        scanf("%d", &numero_t);
        
        for(contador=0; contador>=9; contador++);
        printf("%d x %d = %d\n", numero_t, contador, numero_t * contador);
    }
        void soma_matriz()
        {
            int matriz1 [2][2]= {{1,2}, {3,4}};
            int matriz2 [2][2]= {{5,6}, {7,8}};
            int matriz3 [2][2];
            for(int i=0; i<2; i++)
            {
                for(int j=0; j<2; j++)
                {
                    matriz3[i][j] = matriz1[i][j]+matriz2[i][j];
                    printf("%d ", matriz3[i][j]);
                } 
            }
        }
int main()
{
    char menu;
    do{
        printf("digite a função desejada : \n\n");
        printf("1 - Função triangulo \n");
        printf("2 - Função Media trimestral \n");
        printf("3 - Função bissexto \n");
        printf("4 - Função identificar número \n");
        printf("5 - função Soma de matriz \n");
        printf("6 - Função Tabuada \n");
        printf("0 - sair \n\n");
        scanf(" %c", &menu);
        
        switch(menu)
        {
            case '1':
            triangulo();
            break;
            
            case '2':
            media();
            break;
            
            case '3':
            bissexto();
            break;
            
            case '4':
            identificar_numero();
            break;
            
            case '5':
            soma_matriz();
            break;
            
            case '6':
            tabuada();
            break;
            
            case '0':
            printf("Encerrando programa... \n");
            break;
            
            default:
            printf("Valor invalido \n \n \n");
        }
     }while(menu!= '0');
     
    return 0; 
}