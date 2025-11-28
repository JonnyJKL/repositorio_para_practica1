#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//calculo del valor de Pi utilizando la serie de Leibniz equipo 3
void formula(int num1,double num2);

int main()
{
    int elementos=0;
    double suma=0;

    printf("\nIntroduzca el numero de elementos: ");
    scanf("%d",&elementos);

    formula(elementos,suma);

    return 0;
}

void formula(int num1,double num2){

    for(int i=0;i<num1;i++){
        //Formula para la serie de leibniz
        num2=num2+pow(-1,i)*(4.0/(2.0*i+1));
    }

    printf("\nEl valor de PI empleado %d elementos es: %.6lf\n",num1,num2);

    return;
}
