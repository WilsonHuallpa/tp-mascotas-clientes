#include <stdio.h>
#include <stdlib.h>
#include "Cliente.h"
#include "Mascota.h"
#include "Validacio.h"
#define OCUPADO 1
#define LIBRE 0

typedef struct{
    int idCliente;
    int cantidadMascota;
}Clientes_Mascota;

void mostrarMascotasConSusCliente(eCliente cliente[],int tamCliente,eMascotas mascota[], int tamMascota);
void mostrarClientesConSusMascotas(eCliente cliente[],int tamCliente,eMascotas mascota[],int tamMascota);
int altaMascotaConclientes(eMascotas mascota[], int tamMascota,eCliente clientes[], int tamCliente,int cont);
int EliminarDuenio(eCliente listasCliente[],int tam_clientes,eMascotas listasMascota[],int tam_Mascota);

void mostrarClienteConMasUnaMascota(eCliente listasCliente[], int tam_clientes, eMascotas listasMascota[], int tam_Mascota);

void mostrarMascotasMayordetres(eCliente listasClientes[],int tam_Clientes, eMascotas listaMascotas[], int tam_Mascota);
