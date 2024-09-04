/*2) Escreva um programa que verifique, em uma string, a existência da letra
‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.
IMPORTANTE: Essa string pode ser informada através de qualquer entrada de sua preferência
ou pode ser previamente definida no código;*/

#include <stdio.h>
#include <string.h>

void existeA(char str[], int *cont){
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]=='a' || str[i]=='A')
            (*cont)++;
    }    
}

int main(){
    int cont=0;
    char str[50];

    printf("Digite a string desejada: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';    
    existeA(str, &cont);
    if (cont>0)
        printf("A string contêm %d letra(s) 'a' ou 'A'.", cont);
    else
        printf("A string digitada não contêm a letra 'A'");

    return 0;       

}
