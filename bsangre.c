//FELIPE----------------------
#include "bsangre.h"

void donarSangre(  usuario lista[MAX][MAX] ){
    int aDonar=0;
    char buscar[30];
    printf( "Ingrese el nombre del donante.\n" );
    printf( "\n" );
    fflush ( stdin );
    scanf( "%s" , &buscar );
    int i,j,aprov=0;
    for( i=0;i<MAX;i++ ){
        for( j=0;j<MAX;j++ ){
            if( strcmp( buscar , lista[i][j].nombre ) == 0 ){
                printf( "Se aceptan donaciones entre 350 y 550 ml.\n" );
                printf( "Ingrese la sangre que desea donar en mililitros: ");
                fflush( stdin );
                scanf( "%d" , &aDonar );
                if( aDonar >= 350 && aDonar <= 550 ){
                    lista[i][j].cantidad = aDonar;
                } else{
                    printf( "La cantidad de sangre a donar no es valida.\n" );
                }
                aprov++;
            }
        }
    } if( aprov == 0 ){
        printf( "El usuario ingresado no existe\n" );
    }
}   

int numTipo(char tipo){
    if (strcmp( "A" , tipo )  == 0){
        return 0;
    }
    if (strcmp( "B" , tipo )  == 0){
        return 1;
    }   
    if (strcmp( "O" , tipo )  == 0){
        return 2;
    }
    if (strcmp( "AB" , tipo )  == 0){
        return 3;
    }
}
//----------------------------------------------
void mostrarUsuario( usuario lista[MAX][MAX] ){
    char buscar[30];
    printf( "Ingrese el nombre del usuario que desea buscar: " );
    printf( "\n" );
    fflush ( stdin );
    scanf( "%s" , &buscar );
    int i,j,aprov=0;
    for( i=0;i<MAX;i++ ){
        for( j=0;j<MAX;j++ ){
            if( strcmp( buscar , lista[i][j].nombre ) == 0 ){
                printf( "El usario que usted ha buscado es:\n" );
                printf( "[ %s , %s , %d ]\n" , lista[i][j].nombre , lista[i][j].tipo , lista[i][j].cantidad );
                aprov++;
            }
        }
    } if( aprov == 0 ){
        printf( "El usuario ingresado no existe\n" );
    }
}   
//SANTIAGO-----------------------
void nuevoUsuario( usuario lista[][MAX], usuario* pusuario){
    int i;
    printf("Ingrese el tipo de sangre: ");
    fflush(stdin);
    fgets(pusuario->tipo, 3, stdin);
    printf("\n");
    i = numTipo(usuario.tipo);
    if (verificarEspacio(lista, i)==1){
        printf("Ingrese el nombre del individuo: ");
        fflush(stdin);
        fgets(pusuario->nombre, 30, stdin);
        printf("\n");
        pusuario->cantidad=0;
        guardarNuevoUsuario(usuario lista[][MAX], usuario* pusuario, i);
    } else{
        printf("Lo sentimos. Ya no hay registros disponibles\n");
    }

}

int verificarEspacio(usuario lista[][MAX], int i){
    int j;
    for(j = 0; j < MAX; j++){
        if(lista[i][j].nombre[0] == '\0'){
            return 1;
        }
    } return 0;
}

void guardarNuevoUsuario( usuario lista[][4], usuario* pusuario, int i ){
    int j;
    for(j = 0; j < MAX; j++){
        if(lista[i][j].nombre == '\0'){
            lista[i][j] = *pusuario;
        }
    }
}
//--------------------------
void mostrarMenu(){
    int opc;
    usuario * pusuario;
    usuario lista[MAX][MAX];
    do{
        printf( "\nBienvenido al Banco de Sangre!\n" );
        printf( "Por favor, eliga su opcion\n" );
        printf( "1. Ingresar un usuario.\n" );
        printf( "2. Donar sangre.\n" );
        printf( "3. Mostrar donante.\n" );
        printf( "0. Salir.\n" );
        printf( "Su opcion: " );
        printf( "\n" );
        fflush( stdin );
        scanf( "%d" , &opc );
        switch( opc ){
            case 0:
                break;
            case 1:
                nuevoUsuario( lista , pusuario );
                break;
            case 2:
                donarSangre( lista );
                break;
            case 3:
                mostrarUsuario( lista );
                break;
            default:
                printf( "La opcion ingresada no es valida" );
        }
      } while( opc != 0 );
}