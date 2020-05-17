
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "Validacio.h"
#define OCUPADO 1
#define LIBRE 0
typedef struct
{
    int idMascota;
    int idDuenio;
    char nombre[51];
    char tipo[51];
    char raza[51];
    int edad;
    float peso;
    char sexo;
    int estado;
}eMascotas;

void HardcodeMascotas(eMascotas[],int tam);

void inicializarMascota(eMascotas mascota[], int tam);

void mostrarMascota(eMascotas mascota[],int tam, int ocupado);

void mostrarUnMascota(eMascotas miMascota);

int  buscarLibreMascota(eMascotas listaMascota[], int tam);

int altaMascota(eMascotas mascota[], int tam, int cont);

int bajaMascota(eMascotas mascota[],int tam);

void modificarMascota(eMascotas mascota[],int tam);
