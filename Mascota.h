
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

/** \brief Hardcode de Mascotas lo exitente al principio
 *
 * \param eMascotas[]
 * \param tam int
 * \return void
 *
 */
void HardcodeMascotas(eMascotas[],int tam);

/** \brief inicializar Mascota pone el estado en libre
 *
 * \param mascota[] eMascotas
 * \param tam int
 * \return void
 *
 */
void inicializarMascota(eMascotas mascota[], int tam);

/** \brief Muestra un listado de mascota
 *
 * \param mascota[] eMascotas
 * \param tam int
 * \return void
 *
 */
void mostrarMascota(eMascotas mascota[],int tam);

/** \brief Muestra solo una mascota
 *
 * \param miMascota eMascotas
 * \return void
 *
 */
void mostrarUnMascota(eMascotas miMascota);

/** \brief busca el indice libre en el array de mascota
 *
 * \param listaMascota[] eMascotas
 * \param tam int
 * \return int devuelve el indice libre
 *
 */
int  buscarLibreMascota(eMascotas listaMascota[], int tam);

/** \brief alta de mascota
 *
 * \param mascota[] eMascotas
 * \param tam int
 * \param cont int
 * \return int retorno la 1 si se encontro el indice.
 *
 */
int altaMascota(eMascotas mascota[], int tam, int cont);

/** \brief baja de mascota
 *
 * \param mascota[] eMascotas
 * \param tam int
 * \return int
 *
 */
int bajaMascota(eMascotas mascota[],int tam);

/** \brief modifica Mascota y todos sus campos
 *
 * \param mascota[] eMascotas
 * \param tam int
 * \return void
 *
 */
void modificarMascota(eMascotas mascota[],int tam);

/** \brief lista Mascotas de un tipo en Particular
 *
 * \param listasMascotas[] eMascotas
 * \param tam_mascotas int
 * \return void
 *
 */
void listarMascotastipoenParticular(eMascotas listasMascotas[], int tam_mascotas);

/** \brief promedio de Edades Mascota
 *
 * \param listasMascotas[] eMascotas
 * \param tam_Mascotas int
 * \return float
 *
 */
float promediodeEdadesMascota(eMascotas listasMascotas[], int tam_Mascotas);

/** \brief promedio de tipo en paticula de mascota
 *
 * \param listasMascotas[] eMascotas
 * \param tam_Mascotas int
 * \return void
 *
 */
void promediodePortipo(eMascotas listasMascotas[] , int tam_Mascotas);

/** \brief ordenar Mascotas Por TIpo en particular
 *
 * \param listasMascotas[] eMascotas
 * \param tam_clientes int
 * \return void
 *
 */
void ordenarMascotasPorTIpo(eMascotas listasMascotas[], int tam_clientes);

/** \brief suma Edades de Mascotas
 *
 * \param listasMascotas[] eMascotas
 * \param tam_Mascota int
 * \param tipo[] char
 * \return void
 *
 */
void sumaEdadesdeMascotas(eMascotas listasMascotas[], int tam_Mascota, char tipo[]);










