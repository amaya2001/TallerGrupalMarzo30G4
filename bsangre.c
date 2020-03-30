//FELIPE----------------------
#include "bsangre.h"

void mostrarMenu(){
    int opc;
    usuario* pusuario=&usuario;
    usuario lista[MAX][MAX];
    do{
        printf( "\nBienvenido al Banco de Sangre!\n" );
        printf( "Por favor, eliga su opcion\n" );
        printf( "1. Ingresar un usuario.\n" );
        printf( "2. Donar sangre.\n" );
        printf( "3. Mostrar donantes.\n" );
        printf( "0. Salir.\n" );
        printf( "Su opcion: " );
        printf( "\n" );
        fflush( stdin );
        scanf( "%d" , &opc );
        switch( opc ){
            case 0:
                break;
            case 1:
              nuevoUsuario(lista, usuario* );
                break;
            case 2:
                break;
            case 3:
                break;
            default:
                printf( "La opcion ingresada no es valida" );
        }
    } while( opc != 0 );
}

//----------------------------------------------

void mostrarMatriz( usuario lista[MAX][MAX] ){
    int i,j;
    for( i=0;i<MAX;i++ ){
        for( j=0;j<MAX;j++ ){
            
            
        }
    }
}   

void nuevoUsuario( usuario lista[][MAX] ){
    
    printf("Ingrese el nombre del individuo: ");
    fflush(stdin);
    fgets(matriz[][].nombre, 30, stdin);
    printf("\n");

    printf("Ingrese el tipo de sangre: ");
    scanf("%d", &matriz[][].tipo);
    printf("\n");

    printf("Ingrese la cantidad de sangre donada: ");
    scanf("%d", &matriz[][].cantidad);
    printf("\n");
}
