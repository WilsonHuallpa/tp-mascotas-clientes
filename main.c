#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Validacio.h"
#include "Cliente_Mascota.h"
#define DUENIO 10
#define MASCOTA 20
#define OCUPADO 1
#define LIBRE 0

int main()
{
        eCliente listaCliente[DUENIO];
        eMascotas listaMascota[MASCOTA];

        int opcion;
        int contadorIdMascotas=0;
        int C_contador=0;
        inicializarClientes(listaCliente,DUENIO);
        inicializarMascota(listaMascota,MASCOTA);

        HardcodeClientes(listaCliente,DUENIO);
        HardcodeMascotas(listaMascota,MASCOTA);

        do{
            printf("\n\n************************** \n");
            printf(">          MENU           <\n");
            printf("*************************\n\n");
            printf("1).Mostrar clientes\n");
            printf("2).Mostrar mascotas con su dueño\n");
            printf("3).Mostrar clientes con su mascotas\n");
            printf("4).Alta de mascota y listado de duenios disponibles\n");
            printf("5).Baja de mascota, es lógica, y queda el lugar disponible para otra mascota\n");
            printf("6).Modificar mascota\n");
            printf("7).Alta dueño\n");
            printf("8).Borrado de dueño en cascada\n ");
            printf("9).Ordenar las mascotas por tipo y listarlas con sus dueños.\n");
            printf("10).Modificación Duenio\n");
            printf("11).Listar los clientes con más de una mascota\n");
            printf("12).Listar las mascotas de más de tres años, con respectivos dueños.\n");
            printf("13).Listar las mascotas por un tipo en particular{perro,gato,raro}\n");
            printf("14).Ordenar a los dueños por cantidades de mascotas y mostrarlos.\n");
            printf("15).0rdenar a los dueños por cantidades de mascotas y por orden alfabético de los nombres y mostrarlos.\n");
            printf("16).el promedio de edad entre las mascotas\n ");
            printf("17).el promedio de edad entre las mascotas, por tipo\n");
            printf("18).El promedio que tengo entre varones y mujeres de mis clientes\n");
            printf("19).Salir\n");;
            printf("Ingrese una opcion : ");
            scanf("%d",&opcion);
            switch(opcion) {
            case 1:
                printf("**********************\n");
                printf(">    MOSTRAR CLIENTE   <\n");
                printf("**********************\n");
                mostrarCliente(listaCliente,DUENIO);
                break;
            case 2:
                printf("****************************\n");
                printf(">   MASCOTA CON SU DUEÑO   <\n");
                printf("****************************\n");
                mostrarMascotasConSusCliente(listaCliente,DUENIO,listaMascota,MASCOTA);
                break;
            case 3:
                printf("*******************************\n");
                printf(">  CLIENTES CON SUS MASCOTAS  <\n");
                printf("*******************************\n");
                mostrarClientesConSusMascotas(listaCliente,DUENIO,listaMascota,MASCOTA);
                break;
            case 4:
                printf("**********************\n");
                printf(">    ALTA MASCOTA  <\n");
                printf("**********************\n");
                if((buscarLibreMascota(listaMascota,MASCOTA))!= -1){
                   contadorIdMascotas++;
                   altaMascotaConclientes(listaMascota,MASCOTA,listaCliente,DUENIO,contadorIdMascotas);
                }else{
                    printf("No se encontro lugar disponible");
                }
                break;
            case 5:
                printf("\t\t\t\t\t**********************\n");
                printf("\t\t\t\t\t>   BAJA DE MASCOTA  <\n");
                printf("\t\t\t\t\t**********************\n");
                mostrarMascota(listaMascota,MASCOTA);
                bajaMascota(listaMascota,MASCOTA);
                break;
            case 6:
                printf("\t\t\t\t\t**********************\n");
                printf("\t\t\t\t\t>MODIFICAR DE MASCOTA<\n");
                printf("\t\t\t\t\t**********************\n");
                modificarMascota(listaMascota,MASCOTA);
                break;
            case 7:
                printf("\t\t\t\t\t**********************\n");
                printf("\t\t\t\t\t>    ALTA DE DUEÑO   <\n");
                printf("\t\t\t\t\t**********************\n");
                if((buscarLibreCliente(listaCliente,DUENIO)) != -1){
                    C_contador++;
                    altaDeDuenio(listaCliente,DUENIO,C_contador);
                }else{
                    printf("No se encontro lugar disponible");
                }
                break;
            case 8:
                printf("\t\t\t\t\t**********************\n");
                printf("\t\t\t\t\t>BORRADO DE DUENIO EN CASCADA<\n");
                printf("\t\t\t\t\t**********************\n");
                EliminarDuenio(listaCliente,DUENIO,listaMascota,MASCOTA);
                break;
            case 9:
                printf("\t\t\t\t\t**********************\n");
                printf("\t\t\t\t\t>ORDENAR MASCOTA POT TIPO LISTARLO CON SUS DUENIO<\n");
                printf("\t\t\t\t\t**********************\n");

                break;
            case 10:
                printf("\t\t\t\t\t**********************\n");
                printf("\t\t\t\t\t>MODIFICAR DUENIO<\n");
                printf("\t\t\t\t\t**********************\n");
                modificarClientes(listaCliente,DUENIO);

                break;
            case 11:
                printf("\t\t\t\t\t**********************\n");
                printf("\t\t\t\t\t>LISTA LOS CLIENTES CON MAS DE UNA MASCOTA<\n");
                printf("\t\t\t\t\t**********************\n");
                mostrarClienteConMasUnaMascota(listaCliente,DUENIO,listaMascota,MASCOTA);
                break;
            case 12:
                printf("\t\t\t\t\t**********************\n");
                printf("\t\t\t\t\t>LISTA LAS MASCOTA DE MAS DE TRE AÑOS, CON TREPECTIVO DUEÑO<\n");
                printf("\t\t\t\t\t**********************\n");

                break;
            case 13:
                printf("\t\t\t\t\t**********************\n");
                printf("\t\t\t\t\t>LISTA MASCOTA POR TIPO EN PARTICULAR<\n");
                printf("\t\t\t\t\t**********************\n");
                break;
            case 14:
                printf("\t\t\t\t\t**********************\n");
                printf("\t\t\t\t\t>ORDENAR DUEÑO POR CANTIDAD DE MASCOTA<\n");
                printf("\t\t\t\t\t**********************\n");
                break;
            case 15:
                printf("\t\t\t\t\t**********************\n");
                printf("\t\t\t\t\t>ORDENAR DUEÑO<\n");
                printf("\t\t\t\t\t**********************\n");
                break;
            case 16:
                printf("\t\t\t\t\t**********************\n");
                printf("\t\t\t\t\t>PROMEDIO DE EDAD ENTRE LAS MASCOTAS<\n");
                printf("\t\t\t\t\t**********************\n");
                break;
            case 17:
                printf("\t\t\t\t\t**********************\n");
                printf("\t\t\t\t\t>EL PROMEDIO DE EDAD ENTRE LAS MASCOTAS POR TIPO<\n");
                printf("\t\t\t\t\t**********************\n");
                break;
            case 18:
                printf("\t\t\t\t\t**********************\n");
                printf("\t\t\t\t\t>PROMEDIO QUE TENGO ENTRE VARONES MUJERES DE MIS CLIENTES<\n");
                printf("\t\t\t\t\t**********************\n");
                break;
            case 19:
                break;
            default:
                break;
            }
        }while(opcion!=19);





    return 0;
}
 /* system("pause");
    system("cls");*/
