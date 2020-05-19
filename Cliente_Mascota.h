#include <stdio.h>
#include <stdlib.h>
#include "Cliente.h"
#include "Mascota.h"
#include "Validacio.h"
#include "raza.h"
#define OCUPADO 1
#define LIBRE 0

/** \brief Estructura uxiliar de cliente mascota
 *
 * \param int idcliente
 * \param int cantidad de mascota
 * \return variable de estructura
 *
 */
typedef struct{
    int idCliente;
    int cantidadMascota;
}Clientes_Mascota;

/** \brief muestra Mascotas Con Sus Dunios disponibles
 *
 * \param cliente[] eCliente
 * \param tamCliente int
 * \param mascota[] eMascotas
 * \param tamMascota int
 * \return void
 *
 */
void mostrarMascotasConSusCliente(eCliente cliente[],int tamCliente,eMascotas mascota[], int tamMascota);

/** \brief Mustrar Clientes Con Sus  Mascotas
 *
 * \param cliente[] eCliente
 * \param tamCliente int
 * \param mascota[] eMascotas
 * \param tamMascota int
 * \return void
 *
 */
void mostrarClientesConSusMascotas(eCliente cliente[],int tamCliente,eMascotas mascota[],int tamMascota);

/** \brief alta Mascota Con sus duenios
 *
 * \param mascota[] eMascotas
 * \param tamMascota int
 * \param clientes[] eCliente
 * \param tamCliente int
 * \param cont int
 * \return int retorno 1
 *
 */
int altaMascotaConclientes(eMascotas mascota[], int tamMascota,eCliente clientes[], int tamCliente,int cont);

/** \brief Elimina el Duenio en cascada
 *
 * \param listasCliente[] eCliente
 * \param tam_clientes int
 * \param listasMascota[] eMascotas
 * \param tam_Mascota int
 * \return int
 *
 */
int EliminarDuenio(eCliente listasCliente[],int tam_clientes,eMascotas listasMascota[],int tam_Mascota);

/** \brief Muestrar Cliente Con Mas Una Mascota
 *
 * \param listasCliente[] eCliente
 * \param tam_clientes int
 * \param listasMascota[] eMascotas
 * \param tam_Mascota int
 * \return void
 *
 */
void mostrarClienteConMasUnaMascota(eCliente listasCliente[], int tam_clientes, eMascotas listasMascota[], int tam_Mascota);

/** \brief Muestrar Mascotas Mayor de tres anio de edad
 *
 * \param listasClientes[] eCliente
 * \param tam_Clientes int
 * \param listaMascotas[] eMascotas
 * \param tam_Mascota int
 * \return void
 *
 */
void mostrarMascotasMayordetres(eCliente listasClientes[],int tam_Clientes, eMascotas listaMascotas[], int tam_Mascota);

/** \brief ordena  Duenio Por cantida de mascota
 *
 * \param listamascotas[] eMascotas
 * \param tam_Mascota int
 * \param listaclientes[] eCliente
 * \param tam_clientes int
 * \return void
 *
 */
void ordenarDuenioosPorcantida(eMascotas listamascotas[], int tam_Mascota, eCliente listaclientes[], int tam_clientes);

/** \brief inicializa la estructura de Clientes_Mascotas
 *
 * \param auxClienteMascota[] Clientes_Mascota
 * \param tam_clientes int
 * \param listaCliente[] eCliente
 * \return void
 *
 */
void inicializarClientes_Mascotas(Clientes_Mascota auxClienteMascota[], int tam_clientes, eCliente listaCliente[]);

/** \brief contador De Mascota por Clientes
 *
 * \param listasClientes[] eCliente
 * \param tam_clientes int
 * \param listasMascotas[] eMascotas
 * \param tam_Mascotas int
 * \param auxClienteMascota[] Clientes_Mascota
 * \return void
 *
 */
void contadorDeMascotaporClientes(eCliente listasClientes[], int tam_clientes, eMascotas listasMascotas[], int tam_Mascotas,Clientes_Mascota auxClienteMascota[]);

/** \brief ordena Cliente Por Cantidad de mascota y Nombre del duenio
 *
 * \param listamascotas[] eMascotas
 * \param tam_Mascota int
 * \param listaclientes[] eCliente
 * \param tam_clientes int
 * \return void
 *
 */
void ordenarClientePorCantidadyNombre(eMascotas listamascotas[], int tam_Mascota, eCliente listaclientes[], int tam_clientes);


void dueniosquetienenMascotasdelMismosexo(eCliente listaCliente[], int tam_cliente,eMascotas listaMascota[], int tam_mascota);
