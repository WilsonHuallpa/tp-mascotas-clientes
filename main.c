#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Validacio.h"
#include "Cliente_Mascota.h"
#define DUENIO 10
#define MASCOTA 20
#define LENRAZA 5
#define OCUPADO 1
#define LIBRE 0


int main()
{

        eCliente listaCliente[DUENIO];
        eMascotas listaMascota[MASCOTA];
        eRaza listaRaza[LENRAZA];
        int opcion;
        int contadorIdMascotas=0;
        int C_contador=0;
        char seguirOperando = 'S';
        float promedioEdades;
        inicializarClientes(listaCliente,DUENIO);
        inicializarMascota(listaMascota,MASCOTA);
        HardcoderazadeMascota(listaRaza);
        HardcodeClientes(listaCliente,DUENIO);
        HardcodeMascotas(listaMascota,MASCOTA);

        do{
            system("cls");
            printf("\n************************** \n");
            printf(">          MENU           <\n");
            printf("*************************\n\n");
            printf("1).MOSTRAR CLIENTES\n");
            printf("2).MOSTRAR MASCOTAS CON SU DUENIO\n");
            printf("3).MOSTRAR CLIENTES CON SUS MASCOTAS\n");
            printf("4).ALTA DE MASCOTA Y CON LISTADO DE DUENIOS\n");
            printf("5).BAJA DE MASCOTAS \n");
            printf("6).MODIFICAR MASCOTAS \n");
            printf("7).ALTA DE DUENIO\n");
            printf("8).ELIMINAR CLIENTES CON MASCOTA\n ");
            printf("9).ORDENAR MASCOTAS POR TIPO Y SUS DUENIOS\n");
            printf("10).MODIFICACION DE CLIENTE\n");
            printf("11).LISTA DE CLIENTES CON MAS DE UNA MASCOTA\n");
            printf("12).LISTA DE MASCOTAAS CON MAS DE TRES AÑOS\n");
            printf("13).LISTA DE MASCOTA POR TIPO PARTICULAR{PERRO,GATOO,RARO}.\n");
            printf("14).LISTA ORDENADA DE LOS DUENIO POR CANTIDAD DE MASCOTA.\n");
            printf("15).LISTA ORDENADA DE LOS DUENIO POR CANTIDAD DE MASCOTA Y  POR ALFABETICO {A-Z}.\n");
            printf("16).PROMEDIO DE EDAD ENTRE LAS MASCOTAS\n ");
            printf("17).PROMEDIO DE EDAD ENTRE LAS MASCOTAS POR TIPO\n");
            printf("18).PROMEDIO QUE TENGO ENTRE VARONES Y MUJERES DE MIS CLIENTES.\n");
            printf("19).SALIR\n");
            opcion=GetInt("\nINGRESA UNA OPCION:  ");
            switch(opcion) {
            case 1:
                system("cls");
                printf("\t\t\t**************************************************************\n");
                printf("\t\t\t>-------------------------MOSTRAR CLIENTE---------------------<\n");
                printf("\t\t\t**************************************************************\n");
                mostrarCliente(listaCliente,DUENIO);
                break;
            case 2:
                system("cls");
                printf("\t\t\t**************************************************************\n");
                printf("\t\t\t>---------------MOSTRAR MASCOTAS CON DUENIO------------------<\n");
                printf("\t\t\t**************************************************************\n");
                mostrarMascotasConSusCliente(listaCliente,DUENIO,listaMascota,MASCOTA);
                break;
            case 3:
                system("cls");
                printf("\t\t\t**************************************************************\n");
                printf("\t\t\t>---------------CLIENTES CON SUS MASCOTAS--------------------<\n");
                printf("\t\t\t**************************************************************\n");
                mostrarClientesConSusMascotas(listaCliente,DUENIO,listaMascota,MASCOTA);
                break;
            case 4:
                system("cls");
                printf("\t\t\t**************************************************************\n");
                printf("\t\t\t>---------------ALTAS DE MASCOTAS----------------------------<\n");
                printf("\t\t\t**************************************************************\n");
                if((buscarLibreMascota(listaMascota,MASCOTA))!= -1){
                   contadorIdMascotas++;
                   listadoderazadisponible(listaRaza, LENRAZA);
                   altaMascotaConclientes(listaMascota,MASCOTA,listaCliente,DUENIO,contadorIdMascotas);
                }else{
                    printf("No se encontro lugar disponible");
                }
                break;
            case 5:
                system("cls");
                printf("\t\t\t**************************************************************\n");
                printf("\t\t\t>---------------BAJAS DE MASCOTAS----------------------------<\n");
                printf("\t\t\t**************************************************************\n");
                bajaMascota(listaMascota,MASCOTA);
                break;
            case 6:
                while(seguirOperando == 's' || seguirOperando == 'S'){
                system("cls");
                printf("\t\t\t**************************************************************\n");
                printf("\t\t\t>---------------MODIFICAR MASCOTAS----------------------------<\n");
                printf("\t\t\t**************************************************************\n");
                    mostrarMascota(listaMascota,MASCOTA);
                    modificarMascota(listaMascota,MASCOTA);
                    mostrarMascota(listaMascota,MASCOTA);
                    seguirOperando= GetChar("\nDESEAS SEGUIR MODIFICANDO (s/n): ");
                }
                break;
            case 7:
                while(seguirOperando == 's' || seguirOperando == 'S'){
                system("cls");
                printf("\t\t\t**************************************************************\n");
                printf("\t\t\t>-------------------ALTA DE DUEÑO----------------------------<\n");
                printf("\t\t\t**************************************************************\n");
                    if((buscarLibreCliente(listaCliente,DUENIO)) != -1){
                        C_contador++;
                        altaDeDuenio(listaCliente,DUENIO,C_contador);
                    }else{
                        printf("No se encontro lugar disponible");
                    }
                    seguirOperando= GetChar("\nDESEAS SEGUIR  (s/n): ");
                }
                break;
            case 8:
                while(seguirOperando == 's' || seguirOperando == 'S'){
                    system("cls");
                    printf("\t\t\t**************************************************************\n");
                    printf("\t\t\t>---------------ELIMINAR CLIENTE CASCADA---------------------<\n");
                    printf("\t\t\t**************************************************************\n");
                    EliminarDuenio(listaCliente,DUENIO,listaMascota,MASCOTA);
                        seguirOperando= GetChar("\nDESEAS SEGUIR (s/n): ");
                }
                break;
            case 9:
                system("cls");
                printf("\t\t\t**************************************************************\n");
                printf("\t\t\t>-----------ORDENAR MASCOTA POT TIPO--------------(A-Z)------<\n");
                printf("\t\t\t**************************************************************\n");
                ordenarMascotasPorTIpo(listaMascota, MASCOTA);
                mostrarMascotasConSusCliente(listaCliente,DUENIO,listaMascota,MASCOTA);
                break;
            case 10:
                while(seguirOperando == 's' || seguirOperando == 'S'){
                system("cls");
                    printf("\t\t\t**************************************************************\n");
                    printf("\t\t\t>---------------MODIFICAR CLIENTES---------------------------<\n");
                    printf("\t\t\t**************************************************************\n");
                mostrarCliente(listaCliente,DUENIO);
                modificarClientes(listaCliente,DUENIO);

                    seguirOperando= GetChar("\nDESEAS MODIFICAR OTRO ID  (s/n): ");
                }
                break;
            case 11:
                system("cls");
                printf("\t\t\t**************************************************************\n");
                printf("\t\t\t>----------LOS CLIENTES CON MAS DE UNA MASCOTA---------------<\n");
                printf("\t\t\t**************************************************************\n");
                mostrarClienteConMasUnaMascota(listaCliente,DUENIO,listaMascota,MASCOTA);
                break;
            case 12:
                system("cls");
                printf("\t\t\t**************************************************************\n");
                printf("\t\t\t>-LISTA LAS MASCOTA DE MAS DE TRE AÑOS, CON REPECTIVO DUENIO-<\n");
                printf("\t\t\t**************************************************************\n");
                mostrarMascotasMayordetres(listaCliente,DUENIO,listaMascota,MASCOTA);
                break;
            case 13:
                listarMascotastipoenParticular(listaMascota,MASCOTA);
                break;
            case 14:
                system("cls");
                printf("\t\t\t**************************************************************\n");
                printf("\t\t\t>------------ORDENAR DUEÑO POR CANTIDAD DE MASCOTA-----------<\n");
                printf("\t\t\t**************************************************************\n");
                ordenarDuenioosPorcantida(listaMascota,MASCOTA,listaCliente,DUENIO);
                break;
            case 15:
                system("cls");
                printf("\t\t\t**************************************************************\n");
                printf("\t\t\t>------------------ORDENAR DUEÑO-----------------------------<\n");
                printf("\t\t\t**************************************************************\n");
                ordenarClientePorCantidadyNombre(listaMascota,MASCOTA,listaCliente,DUENIO);
                break;
            case 16:
                system("cls");
                printf("\t\t\t**************************************************************\n");
                printf("\t\t\t>-----------PROMEDIO DE EDAD ENTRE LAS MASCOTAS--------------<\n");
                printf("\t\t\t**************************************************************\n");
                mostrarMascota(listaMascota,MASCOTA);
                promedioEdades=promediodeEdadesMascota(listaMascota,MASCOTA);
                printf("\nEL PROMEDIO DE LAS EDADE DE LAS MASCOTAS ES: %.2f \n", promedioEdades);
                break;
            case 17:
                system("cls");
                printf("\t\t\t**************************************************************\n");
                printf("\t\t\t>-----EL PROMEDIO DE EDAD ENTRE LAS MASCOTAS POR TIPO--------<\n");
                printf("\t\t\t**************************************************************\n");
                promediodePortipo(listaMascota,MASCOTA);
                break;
            case 18:
                printf("\t\t\t\t\t**********************\n");
                printf("\t\t\t\t\t>PROMEDIO QUE TENGO ENTRE VARONES y MUJERES DE MIS CLIENTES<\n");
                printf("\t\t\t\t\t**********************\n");
                promedioentreMujeresyVarones(listaCliente, DUENIO);
                break;
            case 19:
                dueniosquetienenMascotasdelMismosexo(listaCliente,DUENIO,listaMascota,MASCOTA);
                break;
            default:
                break;
            }
        system("pause");
        }while(opcion!=20);
    return 0;
}
//seleccionar raza


 /* system("pause");
    system("cls");*/
