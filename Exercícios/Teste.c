#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    
    printf("Olá, mundo\n");
    system("pause");

    return 0;

}