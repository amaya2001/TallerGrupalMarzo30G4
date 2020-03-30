#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 4
#define SANMAX 1.5

typedef struct usuario{
  char nombre[30];
  char tipo[3];
  int cantidad;
} usuario;

//Muestra el menú del sistema
void mostrarMenu();

//Muestra un usuario específico del sistema, y lo hace preguntando el nombre
void mostrarUsuario( usuario lista[MAX][MAX] );

//ejecuta el proceso para realizar un nuevo registro
void nuevoUsuario( usuario lista[][MAX], usuario* pusuario);

void mostrarDonantes( usuario lista[][MAX], usuario* p_user);

//Devuelve 1 si hay un espacio disponible en el cual ingresar el usuario
void verificarEspacio(usuario lista[][MAX], int tipo);

//Registra el struct llenado en nuevoUsuario en la matriz lista
void guardarNuevoUsuario(usuario lista[][MAX], usuario* pusuario);

//Devuelve el número que corresponde al tipo de sangre
int numTipo(char usuario.tipo);