#include "bsangre.h"

int numTipo( Usuario tmpUsuario ){
	if ( strcmp( "A", tmpUsuario.tipo )  == 0 ){
		return 0;
    	} if ( strcmp( "B", tmpUsuario.tipo )  == 0 ){
        	return 1;
    	} if ( strcmp( "O", tmpUsuario.tipo )  == 0 ){
        	return 2;
    	} if ( strcmp( "AB", tmpUsuario.tipo )  == 0 ){
        	return 3;
    	}
}

void guardarNuevoUsuario( Usuario lista[][MAX], Usuario * pUsuario, int registro[4], int i ){
    	lista[i][registro[i]] = *pUsuario;
}

void agregarUsuario( Usuario lista[MAX][MAX], int registro[4] ){
	Usuario tmpUsuario;
	printf( "Ingrese el tipo de sangre: " );
	fflush( stdin );
	scanf( "%3s" , &tmpUsuario.tipo );
	int i;
	i = numTipo( tmpUsuario );
	if( registro[i]<4 ){
		printf( "Ingrese el nombre: " );
		fflush( stdin );
		scanf( "%30s" , &tmpUsuario.nombre );
		tmpUsuario.cantidad = 0;
		guardarNuevoUsuario( lista , &tmpUsuario , registro , i );
		registro[i]++;
	} else{
		printf( "Lo sentimos. Ya no hay registros disponibles\n" );
	}
}

void donarSangre( Usuario lista[ MAX ][ MAX ] ){
	int aDonar = 0, i, j, aprov = 0;
	char buscar[30];
	printf( "Ingrese el nombre del donante:\n" );
	fflush( stdin );
	scanf( "%30s" , &buscar );
	for( i=0;i<MAX;i++ ){
		for( j=0;j<MAX;j++ ){
			if( strcmp( buscar, lista[i][j].nombre ) == 0 ){
				printf( "Se aceptan donaciones entre 350 y 550 ml.\n" );
                		printf( "Ingrese la sangre que desea donar en mililitros: " );
                		fflush( stdin );
                		scanf( "%d", &aDonar );
                		if( aDonar >= 350 && aDonar <= 550 ){
                    			lista[i][j].cantidad = aDonar;
				} else{
                    			printf( "La cantidad de sangre a donar no es valida.\n" );
				} aprov++;
                	}
		}
        } if( aprov == 0 ){
		printf( "El usuario ingresado no existe\n" );
	}
}   

void mostrarUsuario( Usuario lista[MAX][MAX] ){
	char buscar[30];
	int i, j, aprov = 0;
	printf( "Ingrese el nombre del usuario que desea buscar: " );
	fflush( stdin );
	scanf( "%30s", &buscar );
	for( i=0;i<MAX;i++ ){
        	for( j=0;j<MAX;j++ ){
        		if( strcmp( buscar , lista[i][j].nombre ) == 0 ){
                		printf( "El usario que usted ha buscado es:\n" );
                		printf( "[ %s, %s, %d ]\n", lista[ i ][ j ].nombre , lista[ i ][ j ].tipo , lista[i][j].cantidad );
                		aprov++;
            		}
        	}
    	} if( aprov == 0 ){
        	printf( "El usuario ingresado no existe\n" );
    	}
}   

void mostrarMenu(){
	int opc;
	int registro[4] = {0};
    	Usuario lista[ MAX ][ MAX ];
    	do{
        	printf( "\nBienvenido al Banco de Sangre!\n" );
        	printf( "Por favor, eliga su opcion\n" );
        	printf( "1. Ingresar un usuario.\n" );
        	printf( "2. Donar sangre.\n" );
        	printf( "3. Mostrar donante.\n" );
        	printf( "0. Salir.\n" );
        	printf( "Su opcion: " );
        	fflush( stdin );
        	scanf( "%d" , &opc );
        	switch( opc ){
            		case 0:
                		break;
            		case 1:
				agregarUsuario( lista, registro );
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