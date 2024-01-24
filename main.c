#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct producto
{
    char codigo[25];
    char nombreProducto[50];
    char descripcionProducto[50];
    int cantidad;
    float precioCompra;
};

//Funcion para agregar productos
void agregarProducto(struct producto *p, int *n)
{
    printf("\nIngrese el codigo del producto: ");
    scanf("%s", p[*n].codigo);

    printf("\nIngrese el nombre del producto: ");
    scanf("%s", p[*n].nombreProducto);

    printf("\nIngrese la descripcion del producto: ");
    scanf("%s", p[*n].descripcionProducto);

    printf("\nIngrese la cantidad del producto: ");
    scanf("%d", &p[*n].cantidad);

    printf("\nIngrese el precio de compra del producto: ");
    scanf("%f", &p[*n].precioCompra);

    (*n)++;
}