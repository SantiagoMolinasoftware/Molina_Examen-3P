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

//Funcion para mostrar productos
void mostrarProductos(struct producto *p, int n)
{
    int i;

    printf("Lista de Productos\n\n");

    for(i=0; i<n; i++)
    {
        printf("Codigo: %s, Nombre: %s, Descripcion: %s, Cantidad: %d unidades, Precio de compra: $%.2f por unidad\n", p[i].codigo, p[i].nombreProducto, p[i].descripcionProducto, p[i].cantidad, p[i].precioCompra);
    }
}

int main()
{
    int opcion, n=0;
    struct producto p[50];

    do
    {
        printf("\nMenu\n\n");
        printf("1. Agregar producto\n");
        printf("2. Mostrar productos\n");
        printf("3. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        //Creacion del Menu

        switch(opcion)
        {
            case 1:
                agregarProducto(p, &n);
                break;
            case 2:
                mostrarProductos(p, n);
                break;
            case 3:
                printf("\n\nSaliendo del programa\n");
                break;
            default:
                printf("\n\nOpcion no valida\n");
                break;
        }

    }while(opcion != 3);

    return 0;
}