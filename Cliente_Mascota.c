#include "Cliente_Mascota.h"
void mostrarMascotasConSusCliente(eCliente cliente[],int tamCliente,eMascotas mascotas[], int tamMascota){

    int indiceCliente;
    int indiceMascota;

    printf("\t\tNOMBRE\t\tTIPO\t\tRAZA\t\tEDAD\t\tPESO\t\tSEXO\t\tNOMBRE\n");
    for(indiceMascota=0; indiceMascota<tamMascota; indiceMascota++) {
        if(mascotas[indiceMascota].estado==OCUPADO) {
            for(indiceCliente=0; indiceCliente<tamCliente; indiceCliente++) {
                if(cliente[indiceCliente].idCliente == mascotas[indiceMascota].idDuenio) {

                    printf("%20s%20s%20s%8d%14.2f%8c%20s\n", mascotas[indiceMascota].nombre,mascotas[indiceMascota].tipo,
                                            mascotas[indiceMascota].raza, mascotas[indiceMascota].edad,
                                            mascotas[indiceMascota].peso,mascotas[indiceMascota].sexo,
                                            cliente[indiceCliente].nombre);
                    break;
                }
            }

        }
    }
}

void mostrarClientesConSusMascotas(eCliente cliente[],int tamCliente,eMascotas mascota[],int tamMascota){
    int indiceCientes;
    int indiceMascotas;

    for(indiceCientes=0; indiceCientes<tamCliente; indiceCientes++) {
        if(cliente[indiceCientes].estado==OCUPADO){
            printf("clientes: %s\n", cliente[indiceCientes].nombre);
            for(indiceMascotas=0; indiceMascotas<tamMascota; indiceMascotas++) {
                if(mascota[indiceMascotas].idDuenio == cliente[indiceCientes].idCliente) {
                          mostrarUnMascota(mascota[indiceMascotas]);
                }
            }
        }
    }
}

int altaMascotaConclientes(eMascotas mascota[], int tamMascota,eCliente clientes[], int tamCliente,int contador) {

    int indexCliente;
    int indexLibre;
    indexLibre=buscarLibreMascota(mascota,tamMascota);
    int retorno=-1;
    if(indexLibre!=-1) {

        GetString("Ingrese el Nombre: ",mascota[indexLibre].nombre);
        do{
        GetString("Ingrese el Tipo: ",mascota[indexLibre].tipo);
        }while((strcmpi(mascota[indexLibre].tipo,"Perro")==0||strcmpi(mascota[indexLibre].tipo,"Gato")==0||strcmpi(mascota[indexLibre].tipo,"Raro")==0)!=1);
        GetString("Ingrese la Raza: ",mascota[indexLibre].raza);
        mascota[indexLibre].edad=GetInt("Ingrese Edad: ");
        mascota[indexLibre].peso=GetFloat("Ingrese Peso: ");
        mascota[indexLibre].sexo=GetChar("Ingrese sexo ('M'o'F'): ");
        printf("\t\tCLIENTES DISPONIBLES\n\n");
        for (indexCliente=0; indexCliente<tamCliente;indexCliente++){
            if(clientes[indexCliente].estado==OCUPADO){
                printf("\t%8d %14s\n",clientes[indexCliente].idCliente,clientes[indexCliente].nombre);
            }
        }
        mascota[indexLibre].idDuenio=GetInt("Ingrese ID del duenio: ");
        mascota[indexLibre].idMascota=GenerarId(2010,contador);
        mascota[indexLibre].estado=OCUPADO;
        printf("Agregado exitosamente\n");
        retorno=indexLibre;
        }
return retorno;
}

int EliminarDuenio(eCliente listaClientes[],int tam_Clientes,eMascotas listasMascotas[],int tam_Mascotas) {

    int idClienteAeliminar;
    int retornoBandera=-1;
    int indiceCliente;
    int indiceMascota;
    do{
        mostrarCliente(listaClientes,tam_Clientes);
        idClienteAeliminar= GetInt("\nIngrese ID del cliente: ");
        for(indiceCliente=0; indiceCliente<tam_Clientes; indiceCliente++) {

            if(listaClientes[indiceCliente].estado==OCUPADO && idClienteAeliminar==listaClientes[indiceCliente].idCliente) {
                listaClientes[indiceCliente].estado=LIBRE;
                for(indiceMascota=0; indiceMascota<tam_Mascotas; indiceMascota++){
                    if(listasMascotas[indiceMascota].idDuenio == idClienteAeliminar){
                        listaClientes[indiceMascota].estado = LIBRE;
                        printf("ELIMICION EXITOSA \n");
                        retornoBandera=0;
                        break;
                    }
                }
            }
        }
    }while(retornoBandera==-1);
}