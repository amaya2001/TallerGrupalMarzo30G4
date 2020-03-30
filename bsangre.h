#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 4

void mostrarMenu();

void mostrarMatriz( usuario lista[MAX][MAX] );

typedef struct usuario{
  char nombre[30];
  char tipo[3];
  int cantidad;
} usuario;