// Escribir un programa que pida al usuario su peso (en kg) y estatura (en metros), calcule el �ndice de masa corporal y lo almacene en una variable, y muestre por pantalla la frase Tu �ndice de masa corporal es <imc> donde <imc> es el �ndice de masa corporal calculado redondeado con dos decimales.


#include<stdio.h>;
#include<math.h>

int main() {
	float pesoKg, IMC, estatura;

	printf("Dime tu peso:");
	scanf_s("%f", &pesoKg);
	printf("Dame tu estatura:");
	scanf_s("%f", &estatura);
	
	IMC = pesoKg / pow(estatura, 2);

	printf("Tu �ndice de masa corporal es %f.", IMC);

	return 0;

}