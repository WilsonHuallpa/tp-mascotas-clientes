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
/*    int i;//Cursos
    int j;//Alumnos

    for(i=0; i<sizeCursos; i++)
    {
        printf("CURSO: %s\n", listaDeCursos[i].descripcion);
        for(j=0; j<sizeAlumnos; j++)
        {
            if(listaDeAlumnos[j].estado==OCUPADO){//Preguntar si el alumno esta disponible
                 if(listaDeAlumnos[j].idCurso == listaDeCursos[i].idCurso )
                 {
                      mostrarUnAlumno(listaDeAlumnos[j]);
                 }
            }
        }
    }
*/
}

int altaMascotaConclientes(eMascotas mascota[], int tamMascota,eCliente clientes[], int tamCliente,int cont) {
    // a implementar
}


int EliminarDuenio(eCliente listaCliente[],int lenClient,eMascotas listaMascota[],int lenMascota) {
  // a implementar
}
