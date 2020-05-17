#include <stdio.h>
#include <stdlib.h>
#include "Cliente.h"
#include "Mascota.h"
#include "Validacio.h"
#define OCUPADO 1
#define LIBRE 0



void mostrarMascotasConSusCliente(eCliente cliente[],int tamCliente,eMascotas mascota[], int tamMascota);
void mostrarClientesConSusMascotas(eCliente cliente[],int tamCliente,eMascotas mascota[],int tamMascota);
int altaMascotaConclientes(eMascotas mascota[], int tamMascota,eCliente clientes[], int tamCliente,int cont);

int EliminarDuenio(eCliente listaCliente[],int lenClient,eMascotas listaMascota[],int lenMascota);
