#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//calculo del valor de Pi utilizando la serie de Leibniz equipo 3

int main()
{
    int elementos=0;
    double suma=0;

    printf("\nIntroduzca el numero de elementos: ");
    scanf("%d",&elementos);

    for(int i=0;i<elementos;i++){
        //Formula para la serie de leibniz
        suma=suma+pow(-1,i)*(4.0/(2.0*i+1));
    }



    printf("\nEl valor de PI empleado %d elementos es: %.6lf\n",elementos,suma);

    return 0;
}
