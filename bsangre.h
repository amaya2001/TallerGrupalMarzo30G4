#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 4

typedef struct Usuario{
	char nombre[ 30 ], tipo[ 3 ];
	int cantidad;
} Usuario;

//Muestra el menú del sistema
void mostrarMenu();

//Muestra un usuario específico del sistema, y lo hace preguntando el nombre
void mostrarUsuario( Usuario lista[MAX][MAX] );

//Aumenta la cantidad de sangre que el usuario ha donado
void donarSangre(  Usuario lista[MAX][MAX] );

//Agrega un nuevo usuario
void agregarUsuario( Usuario lista[MAX][MAX], int registro[4] );

//Guarda un usuario en los registros
void guardarNuevoUsuario( Usuario lista[MAX][MAX], Usuario * pUsuario, int registro[4], int i );