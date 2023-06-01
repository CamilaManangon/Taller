#include <stdio.h>
#include "magicSquare.h"

int cuadradoMagico(int filas, int columnas, int cuadrado[filas][columnas]) {
    int suma = 0;
    for(int i = 0;i<filas;i++){
        for(int j = 0;j<columnas;j++){
            suma = suma + cuadrado[i][j];
        }
        if(suma != calcularConstanteMagica(filas,columnas,cuadrado)){
            return 1;
        }
    }
    suma = 0;
    for(int i = 0;i<columnas;i++){
        for(int j = 0;j<filas;j++){
            suma = suma + cuadrado[i][j];
        }
        if(suma != calcularConstanteMagica(filas,columnas,cuadrado)){
            return 1;
        }
    }
    suma = 0;
    for(int i = 0; i<filas;i++){
        suma = suma + cuadrado[i][filas-i-1];
    }
    if(suma != calcularConstanteMagica(filas,columnas,cuadrado)){
        return 1;
    }

    return 0;

}

int calcularConstanteMagica(int filas, int columnas, int cuadrado[filas][columnas]) {
    int suma = 0;
    for(int i = 0;i<columnas;i++){
        suma = suma + cuadrado[1][i];
    }
    return suma;
}

void imprimirCuadrado(int filas, int columnas, int cuadrado[filas][columnas]) {
    for(int i = 0;i<filas;i++){
        for(int j = 0;j<columnas;j++){
            printf("%d",cuadrado[i][j]);
        }
        printf("\n");
    }
}
