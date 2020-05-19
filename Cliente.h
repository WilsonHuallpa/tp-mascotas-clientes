
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

/** \brief Listamos clientes exitentes al principio
 *
 * \param cliente[] eCliente Estructura del Cliente
 * \param tamCliente int Tamaño del array de Cliente
 * \return void
 *
 */
void HardcodeClientes(eCliente cliente[],int tamCliente);

/** \brief Inicializa la variable de bandera estado del cliente en LIBRE.
 *
 * \param cliente[] eCliente
 * \param tamCliente int
 * \return void
 *
 */
void inicializarClientes(eCliente cliente[], int tamCliente);

/** \brief Muestra cliente disponibles
 *
 * \param cliente[] eCliente
 * \param tamCliente int
 * \return void
 *
 */
void mostrarCliente(eCliente cliente[], int tamCliente);

/** \brief Busca un lugar libre disponible
 *
 * \param cliente[] eCliente
 * \param tamCliente int
 * \return int devuelve el indice libre
 *
 */
int buscarLibreCliente(eCliente cliente[], int tamCliente);

/** \brief  alta un duenio
 *
 * \param cliente[] eCliente
 * \param tam int
 * \param cont int
 * \return int
 *
 */
int altaDeDuenio(eCliente cliente[], int tam, int cont);

/** \brief Modifica clientes disponibles
 *
 * \param cliente[] eCliente
 * \param tamCliente int
 * \return void
 *
 */
void modificarClientes(eCliente cliente[],int tamCliente);

/** \brief saca el promedio de total de mujeres y varones
 *
 * \param listasClientes[] eCliente
 * \param tam_clientes int
 * \return void
 *
 */
void promedioentreMujeresyVarones(eCliente listasClientes[], int tam_clientes);



