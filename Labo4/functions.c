#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"functions.h"

void imprimirArreglo(int inferior, int superior){
    for (int i = inferior; i <= superior; i++)
    {
        printf("\t%d\n",i);
    }    
}
int ingresarValor(int valor){
    printf("Ingrese un valor:\n");
    scanf("%d",&valor);
    return valor;
}
int imprimeAleatorio(int minimo, int maximo, int cuenta){
    int num;
    srand(time(0));
    for (int i = 0; i < cuenta; i++)
    {
        num = (rand() % (maximo - minimo +1))+ minimo;
             
    }
    return num;

}
void juegoAdivina(char const*arr[], int size){
int a, b;
if (size <= 2)
{
    printf("Ingrese mas de dos numeros\n");
}else{
 int juego = 1;

   
 for (int i = 1; i < size-1; i++)
 {
    a = atoi(arr[i]);
    b = atoi(arr[i+1]);   
 }
    if (a > b || a==b){
    printf("Intervalo invalido, intente de nuevo\n");
            
}else{

    imprimirArreglo(a,b);
    int acierto = (b-a)/3;
    int intentos = 0;
    int aleatorio = imprimeAleatorio(a,b,1);
    int gana = 0;
    printf("Tienes %d intentos\n",acierto);
    while (acierto!=0)
    {   
        intentos++;
        int valor = ingresarValor(1);
        if (valor < a || valor>b)
        {
            printf("Ingrese numeros dentro del intervalo\n");
            break;
        }
        
        if (aleatorio == valor){   
            printf("Estas caliente, acertaste, el numero era: %d\n",aleatorio);
            gana = 1;
            break;
        }
        else if (valor < aleatorio-1 || valor > aleatorio+1){
            printf("Estas frio\n");
            printf("Te quedan %d intentos\n",acierto-1);
        }

        else if (valor == aleatorio-1 || valor == aleatorio+1){
            printf("Estas tibio\n");
            printf("Te quedan %d intentos\n",acierto-1);
        }
        
        
        acierto--;
    }
    if (acierto == 0)
    {
        printf("Te has congelado. Gracias por jugar\n");
    }
    
    if (gana == 1)
    {
        printf("Lo lograste en %d intentos\n",intentos);
    }
    

        
}
}
} 