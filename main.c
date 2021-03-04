#include <stdio.h>
#include "ficheros/operadores.h"

int main(){
	double a,b;
	int selector;

	printf("Ingrese un numero: ");
	scanf("%lf",&a);
	printf("Ingrese un numero: ");
	scanf("%lf",&b);

	printf("Codigos:\n1 - Sumar\n2 - Restar\n3 - Multiplicar\nSeleccione: ");
	scanf("%d",&selector);
	if(selector>0 && selector<4)
		printf("Resultado: ");
	switch(selector){
		case 1:
			printf("%.2f\n",suma(a,b));
			break;
		case 2:
			printf("%.2f\n",resta(a,b));
			break;
		case 3:
			printf("%.2f\n",multiplicacion(a,b));
			break;
	}

	return 0;
}
