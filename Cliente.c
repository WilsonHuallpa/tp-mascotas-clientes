
#include "Cliente.h"

void HardcodeClientes(eCliente cliente[],int tamCliente){

    int idCliente[5]={1000,1001,1002,1003,1004};
    char nombre[5][31]={"sabina","sanesto","ana","lauti","nestor"};
    char apellido[5][31]={"porcel","huallpa","condori","huallpa","cruz"};
    char localidad[5][31]={"Monte Grande","Lomas","lomas","ezeiza","lanus"};
    int telefono[5]={11112222,44422222,33233333,44455544,55556666};
    int edad[5]={20,85,18,21,34};
    char sexo[5]={'F','M','F','M','M'};
    int estado[5]={1,1,1,1,1};
    int i;

    for(i=0;i<5;i++){
        cliente[i].idCliente=idCliente[i];
        strcpy(cliente[i].nombre,nombre[i]);
        strcpy(cliente[i].apellido,apellido[i]);
        strcpy(cliente[i].localidad,localidad[i]);
        cliente[i].telefono=telefono[i];
        cliente[i].edad=edad[i];
        cliente[i].sexo=sexo[i];
        cliente[i].estado=estado[i];
    }
}
void inicializarClientes(eCliente cliente[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cliente[i].estado = LIBRE;
        cliente[i].idCliente = 0;
    }

}
void mostrarCliente(eCliente cliente[], int tam ){
    int i;
    printf("\n\n\tID\t\tNOMBRE\t\tAPELLIDO\t\tLOCALIDAD\t\tTELEFONO\tEDAD\tSEXO\n\n");
    for(i=0;i<tam;i++){

            if(cliente[i].estado == OCUPADO){
                printf("%10d%20s%18s%25s%23d%12d%8c\n",cliente[i].idCliente,cliente[i].nombre
                                                    ,cliente[i].apellido,cliente[i].localidad
                                                    ,cliente[i].telefono,cliente[i].edad,cliente[i].sexo);
            }
    }
}
int buscarLibreCliente(eCliente listaDeCliente[], int tamCliente){

    int i;
    int retorno=-1;
    for(i=0;i<tamCliente;i++){
        if(listaDeCliente[i].estado==LIBRE){
            retorno = i;
            break;
        }
    }
return retorno;
}
int altaDeDuenio(eCliente cliente[], int tam, int cont){
    int index;
    int retorno=-1;

    index=buscarLibreCliente(cliente,tam);

    if(index!=-1){

        GetString("Ingrese nombre de Cliente: ",cliente[index].nombre);
        GetString("Ingrese apellido de Cliente: ",cliente[index].apellido);
        GetString("Ingrese localidad: ",cliente[index].localidad);
        cliente[index].telefono=GetInt("Ingrese telefono: ");
        cliente[index].edad=GetInt("Ingrese edad: ");
        cliente[index].sexo=GetChar("Ingrese sexo (F/M): ");
        cliente[index].idCliente=GenerarId(1004,cont);
        cliente[index].estado=OCUPADO;
        retorno=0;

    }
return retorno;
}
void modificarClientes(eCliente cliente[],int tamCliente) {
    int index;
    int i;
    int opcion;
    index=GetInt("\n\ningrese ID de Cliente: ");
    for(i=0; i<tamCliente; i++) {
        if(cliente[i].idCliente==index && cliente[i].estado==OCUPADO) {
            do {
                system("cls");
                printf("*********************MODIFICANDO*****************\n");
                printf("*************************%d**********************\n",cliente[i].idCliente);
                printf("Nombre: %s",cliente[i].nombre);
                printf("\nApellido: %s",cliente[i].apellido);
                printf("\nLocalidad: %s",cliente[i].localidad);
                printf("\nTelefono: %d",cliente[i].telefono);
                printf("\nEdad: %d",cliente[i].edad);
                printf("\nSexo: %c\n",cliente[i].sexo);
                printf("*************************\n");
                printf("1).Nombre\n");
                printf("2).Apellido\n");
                printf("3).Localidad\n");
                printf("4).Telefono\n");
                printf("5).edad\n");
                printf("6).Sexo\n");
                printf("7).Salir\n");
                opcion=GetInt("ingrese un opcion a modificar\n");
                switch(opcion) {
                    case 1:
                        GetString("Ingrese nombre: ",cliente[i].nombre);
                        break;
                    case 2:
                        GetString("Ingrese Apellido: ",cliente[i].apellido);
                        break;
                    case 3:
                        GetString("Ingrese Localidad: ",cliente[i].localidad);
                        break;
                    case 4:
                        cliente[i].telefono=GetInt("Ingrese telefono: ");
                        break;
                    case 5:
                        cliente[i].edad=GetInt("Ingrese edad: ");
                        break;
                    case 6:
                        cliente[i].sexo=GetChar("ingrese sexo (F/M):");
                        while(cliente[i].sexo!='f' || cliente[i].sexo!='m' ){
                        cliente[i].sexo=GetChar("ERROR..ingrese sexo (F/M):");
                        }
                        break;
                    case 7:
                        printf("\nMODIFICACION EXITOSA\n\n");
                     break;
                    default:
                        printf("ERROR.. NO ES UNA OPCION VALIDAD\n");
                        break;
                }
            system("pause");
            }while(opcion!=7);
        }
    }
}
void promedioentreMujeresyVarones(eCliente listasClientes[], int tam_clientes){
    int indiceClientes;
    int sumadeTotaldeMujeres = 0;
    int sumadeTotaldeVarones = 0;
    int promedioTotalmujeres = 0;
    int promedioTotalvarones = 0;
    int totaldeClientes = 0;

    for(indiceClientes = 0; indiceClientes<tam_clientes; indiceClientes++){
        if(listasClientes[indiceClientes].estado == OCUPADO){
            totaldeClientes++;
            if(listasClientes[indiceClientes].sexo == 'M'|| listasClientes[indiceClientes].sexo == 'm'){
                sumadeTotaldeVarones++;
            }else if(listasClientes[indiceClientes].sexo =='F'||listasClientes[indiceClientes].sexo == 'f' ){
                sumadeTotaldeMujeres++;
            }
        }
    }
    promedioTotalmujeres = ((float)sumadeTotaldeMujeres/(sumadeTotaldeMujeres+sumadeTotaldeVarones))*100;
    promedioTotalvarones = ((float)sumadeTotaldeVarones/(sumadeTotaldeVarones+sumadeTotaldeMujeres))*100;
    printf("Cantidad de mujeres : %d\n",sumadeTotaldeMujeres);
    printf("cantidad de varones : %d\n",sumadeTotaldeVarones);
    printf("Procentaje de mejeres : %d\n",promedioTotalmujeres);
    printf("Porcentaje de Varones :  %d\n",promedioTotalvarones);
}







