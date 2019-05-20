#include <stdlib.h>
#include <stdio.h>
#include <iostream>

//declaracion de una funcion


int main ()
{
	int j1,j2,j3 = 0;
	float rt = 0;
	int i = 0;
	float remu;
	int cuit, juris, cant, total;
	int empMax, cantMax;
	float p1, p2, p3;
	
	printf("****************************** \n");
	printf("ingrese el cuit de la empresa: \n");
	printf("****************************** \n");
	scanf("%d", &cuit);
	
	while ( cuit != 0)
	{
		printf("****************************** \n");
		printf("ingrese el cuit de la empresa: \n");
		printf("****************************** \n");
		scanf("%d", &cant);
		printf("****************************** \n");
		printf("ingrese el cuit de la empresa: \n");
		printf("****************************** \n");
		scanf("%d", &juris);	
		if ( i == 0)
		{
			empMax = cuit;
			cantMax = cant;
		} else if (cant > cantMax)
		{
			empMax = cuit;
			cantMax = cant;
		}
		switch (juris)
		{
			case 1:
				j1 = j1 + 1;
			break;
			case 2:
				j2 = j2 + 1;
			break;
			case 3:
				j3 = j3 + 1;
				printf("****************************** \n");
				printf("ingrese la remuneracion de la jurisdiccion 3: \n");
				printf("****************************** \n");
				scanf("%f", &remu);	
				rt = rt + remu;	
			break;
			default:
				printf("ingreso jurisdiccion erronea \n");
		}
		
		printf("****************************** \n");
		printf("ingrese el cuit de la empresa: \n");
		printf("****************************** \n");
		scanf("%d", &cuit);
		
	}
	
	printf("****************************** \n");
	printf("Empresa con mayor cant de empleados: %d \n", empMax);
	printf("****************************** \n");
	printf("****************************** \n");
	printf("cantidad de empleados: %d \n", cantMax);
	printf("****************************** \n");
	
	if (j1 < j2 || j1 < j3)
	{
		printf("****************************** \n");
		printf("jurisdiccion con menor cant de empresas jurisdiccion 1: Buenos Aires \n");
		printf("****************************** \n");
		printf("****************************** \n");
		printf("cantidad jurisdiccion 1: %d \n", j1);
		printf("****************************** \n");	
	} else if (j2 < j1 || j2 < j3)
	{
		printf("****************************** \n");
		printf("jurisdiccion con menor cant de empresas jurisdiccion 2: La Pampa \n");
		printf("****************************** \n");
		printf("****************************** \n");
		printf("cantidad jurisdiccion 2: %d \n", j2);
		printf("****************************** \n");	
	} else
	{
		printf("****************************** \n");
		printf("jurisdiccion con menor cant de empresas jurisdiccion 3: Rio Negro \n");
		printf("****************************** \n");
		printf("****************************** \n");
		printf("cantidad jurisdiccion 3: %d \n", j3);
		printf("****************************** \n");
		
	}
	total = j1 + j2 + j3;
	
	p1 = (j1 *100) / total;
	p2 = (j2 *100) / total;
	p3 = (j3 *100) / total;
	printf("****************************** \n");
	printf(" porcentaje sobre el total de empresas que representa Jurisdiccion 1: % %f \n", p1);
	printf("****************************** \n");
	printf("****************************** \n");
	printf(" porcentaje sobre el total de empresas que representa Jurisdiccion 2: % %f \n", p2);
	printf("****************************** \n");
	printf("****************************** \n");
	printf(" porcentaje sobre el total de empresas que representa Jurisdiccion 3: % %f \n", p3);
	printf("****************************** \n");
	
	printf("****************************** \n");
	printf("Promedio de remuneracion de la jurisdiccion 3: %f \n", rt);
	printf("****************************** \n");

	
	
return 0;
}
