//ALGORITMO DA DIVISAO
//ENTRADAS: a,b pertencentes aos inteiros
//SAIDA: q,r tal que :
//a=bq+r
//0<=r<b

//PASSO 01: FACA:
//QUOCIENTE = 0
//RESTO = 0

//PASSO 02: ENQUANTO RESTO >= b:
//QUOCIENTE=QUOCIENTE + 1
//RESTO=RESTO - b

//PASSO 03: RETORNE QUOCIENTE,RESTO


#include <stdio.h>
#include <stdlib.h>

void divisao(int a, int b)
{
    int resto,quociente;
    quociente=0; 
    resto=a;
    if(b==0)
    {
        printf("ERRO");
    }
    while(resto>=b)
    {
        quociente=quociente+1;
        resto=resto-b;
    }
    printf("%d",quociente);
    printf("\n%d",resto);
}

int main()
{
    int a,b;
    //printf("Digite o primeiro numero:");
    scanf("%d",&a);
    //printf("Digite o segundo numero:");
    scanf("%d",&b);
    divisao(a,b);
    return 0;
}