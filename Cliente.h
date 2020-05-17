
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Validacio.h"
#define OCUPADO 1
#define LIBRE 0
typedef struct
{
    int idCliente;
    char nombre[31];
    char apellido[31];
    char localidad[31];
    int telefono;
    int edad;
    char sexo;
    int estado;
}eCliente;

void HardcodeClientes(eCliente cliente[],int tamCliente);

void inicializarClientes(eCliente cliente[], int tamCliente);

void mostrarCliente(eCliente cliente[], int tamCliente);

int buscarLibreCliente(eCliente cliente[], int tamCliente);

int altaDeDuenio(eCliente cliente[], int tam, int cont);

void modificarClientes(eCliente cliente[],int tamCliente);
