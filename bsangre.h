#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 4
#define SANMAX 1.5

typedef struct Usuario{
	char nombre[ 30 ], tipo[ 3 ];
	int cantidad;
} Usuario;

//Muestra el menú del sistema
void mostrarMenu();

//Muestra un usuario específico del sistema, y lo hace preguntando el nombre
void mostrarUsuario( Usuario lista[ MAX ][ MAX ] );

//ejecuta el proceso para realizar un nuevo registro
void nuevoUsuario( Usuario lista[  ][ MAX ], Usuario* pUsuario);

//Devuelve 1 si hay un espacio disponible en el cual ingresar el usuario
int verificarEspacio( Usuario lista[  ][ MAX ], int i );

//Registra el struct llenado en nuevoUsuario en la matriz lista
void guardarNuevoUsuario( Usuario lista[  ][ MAX ], Usuario* pUsuario, int i);

//Devuelve el número que corresponde al tipo de sangre
int numTipo( Usuario* pUsuario );

//Aumenta la cantidad de sangre que el usuario ha donado
void donarSangre(  Usuario lista[ MAX ][ MAX ] );