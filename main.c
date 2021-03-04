#include <stdio.h>
#include "fichero.h"

int main(){
	double a,b;
	int selector;
	printf("ingrse un numero");
	scanf("%lf",&a);
	printf("ingrese un numero: ");
	scanf("%lf",&b);

	printf("Codigos:\n1 - Sumar\n2 - Restar\n3 - Multiplicar\n4 - Dividir.\n");
	scanf("%d",&selector);

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
		case 4:
			printf("%.2f\n",division(a,b));
			break;
	}

	return 0;
}
