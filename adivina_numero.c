#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"functions.h"

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 55; i++)
    {
        printf("*");
    }
    printf("\n");
    printf("\t\tREGLAS DEL JUEGO:\n");
    printf("Tienes un numero limitado de intentos \n");
    printf("Tendras tres estados: Frio, Tibio y Caliente.\n");
     for (int i = 0; i < 55; i++)
    {
        printf("*");
    }   
    printf("\n");
    juegoAdivina(argv,argc);

}