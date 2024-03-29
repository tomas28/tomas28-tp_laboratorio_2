#include <stdio.h>
#include <stdlib.h>
#include "empleados.h"
#include "sector.h"
#define TAM 1000
#define TS 3

int main()
{
    char seguir;
    employee empleado[TAM];

    inicializarEmpleados(empleado,TAM);

    eSector arraySector[TS]={
    {1,"Administracion"},
    {2,"Comunicaciones"},
    {3,"Comercio"}
    };


    while(seguir != 's'){
        printf("\n 1-Alta empleado\n 2-Baja empleado\n 3-Modificar empleados\n 4-Listar empleados\n 5-Salir \n\n");
        fflush(stdin);
        scanf("%c",&seguir);


        system("cls");

        switch(seguir)
            {


            case '1':
                printf("\nAlta empleado\n\n");
                altaEmpleado(empleado,TAM);
                //system("pause");
                break;

            case '2':
                printf("\nBaja empleado\n\n");
                estudiante_baja(empleado,TAM);

                //system("pause");
                break;

            case '3':
                printf("\nModificacion empleado\n\n");
                estudiante_modificar(empleado,TAM);
                //system("pause");
                break;

            case '4':
                printf("\nListar empleados\n\n");
                estudiante_listar(empleado,TAM,arraySector,TS);
                system("pause");
                break;

            case '5':
                printf("usted salio del programa\n");
                seguir='s';

                //system("pause");
                break;

            default:
                printf("\n Opcion invalida\n\n");
                system("break");

        }
        system("cls");

    }
    return 0;
}




