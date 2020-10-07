#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int suma(int numero){

    if (numero == 1)
    {
        return numero;
    }
    int x = numero;
    
    numero--;

    return x + suma(numero);
}

void arregloRecursivo(int arreglo[],int size, int t){
    printf("[%d] ", arreglo[t]);
    t++;
    if (t >= size)
    {
        return;
    }
    arregloRecursivo(arreglo, size, t);

}

int cantidad_digitos(int cifra){
    int indice = cifra;
    if (indice/10==0)
    { 
        return 1;
    }

    return 1 + cantidad_digitos(cifra/10);
}

int elementoMayor(int arr[],int size, int i){
    
    int mayor = 0;
    while (i<size)
    {
        if (arr[i] > mayor)
        {
            mayor=arr[i];
        }
        i++;
        elementoMayor(arr,size,i);
    }
    return mayor;

}

int numeroPrimo(int valor){
    int a = 0;
    int i = 1;
    while (i<=valor)
    {   
        if (valor%i==0)
        {
            a++;
            
        }
        i++;
    }
    if (a==2)
        {
            return 1;
        }else
        {
            return 0;
        }
        
    
    
    
    return numeroPrimo(valor);    
}
int palindromo(char str[],int inicio, int final)
{//otto

    if (final == inicio) 
    {
        return 1;
    }
    if(str[inicio] == str[final]) 
    {
        if (inicio+1==final)
        {
            return 1;
        }
        
        return palindromo(str, ++inicio, --final);

    }else 
    {
        return 0;
    }
    return 0;

}

int main(int argc, char const *argv[])
{
    // int arr [] = {12, 34, 95, 67, 100};
    char cadena [] = "oso";
    // printf("%d\n",suma(10));
    // arregloRecursivo(arr,5,0);   
    // printf("%d\n",cantidad_digitos(15700));
    // elementoMayor(arr,5,0);
    // printf("El elemento mayor es: %d\n",elementoMayor(arr,5,0));
    printf("%d\n",palindromo(cadena,0,strlen(cadena)-1));
    // printf("%d\n",numeroPrimo(5));
    // printf("%d\n",numeroPrimo(4));
  

    
    return 0;


   
    
}

