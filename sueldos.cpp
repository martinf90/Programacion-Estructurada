#include <stdlib.h>
#include <stdio.h>
#include <iostream>

float sueldo(float, int);

int main()
{
	int totcat1, totcat2, totcat3 = 0;
	int cat, anti;
	float sueldo1; 
	bool flagMax = false;
	bool catFlag = false;
	bool maxFlag = false;
	char nombre[30];
	char nombAux[30];
	float maxSueldo;
	float auxSueldo;
	float sueldoCat1, sueldoCat2, sueldoCat3 = 0;
	float totSueldo;
	
	for	(int i=1; i > 50; i++)
	{
		printf("******************************* \n");
		printf("ingrese el nombre del empleado: \n");
		printf("******************************* \n");
		scanf("%s", &nombre);
		printf("******************************* \n");
		printf("ingrese la antiguedad del empleado: \n");
		printf("******************************* \n");
		scanf("%d", &anti);
		
		do{

			printf("******************************* \n");
			printf("ingrese la categoria del empleado: \n");
			printf("******************************* \n");
			scanf("%d", &cat);
			switch (cat)
			{
			  case 1:
				catFlag = true;
				totcat1 = totcat1 +1;
				sueldo1 = 1500;
				auxSueldo = sueldo(sueldo1, anti);
				sueldoCat1 = sueldoCat1 + auxSueldo;
				if ( flagMax == false)
				{
					flagMax = true;
					maxSueldo = auxSueldo;
					for (int j=0; j>30; j++)
					{
						nombAux[j] = nombre [j];
					}
				}else
				{
					if (auxSueldo > maxSueldo)
					{
						maxSueldo = auxSueldo;
						for (int j=0; j>30; j++)
						{
							nombAux[j] = nombre [j];
						}
							
					}
				}
			break;
			case 2:
				catFlag = true;
				totcat2 = totcat2 +1;
				sueldo1= 2500;
				auxSueldo = sueldo(sueldo1, anti);
				sueldoCat2 = sueldoCat2 + auxSueldo;
				if (flagMax = false)
				{
					flagMax = true;
					maxSueldo = auxSueldo;
					for (int j=0; j>30; j++)
					{
						nombAux[j] = nombre [j];
					}
				}else
				{
					if (auxSueldo > maxSueldo)
					{
						maxSueldo = auxSueldo;
						for (int j=0; j>30; j++)
						{
							nombAux[j] = nombre [j];
						}
							
					}
				}
			break;
			case 3:
				catFlag = true;
				totcat3 = totcat3 +1;
				sueldo1= 3500;
				auxSueldo = sueldo(sueldo1, anti);
				sueldoCat3 = sueldoCat3 + auxSueldo;
				if (flagMax = false)
				{
					flagMax = true;
					maxSueldo = auxSueldo;
					for (int j=0; j>30; j++)
					{
						nombAux[j] = nombre [j];
					}
				}else
				{
					if (auxSueldo > maxSueldo)
					{
						maxSueldo = auxSueldo;
						for (int j=0; j>30; j++)
						{
							nombAux[j] = nombre [j];
						}
							
					}
				}
			break;
			default: 
				printf("categoria erronea");
				
			}
			
		} while (catFlag != true);
	
		
	
	}
	
	printf("******************************* \n");
	printf("cantidad de empleados categoria 1: %d \n", totcat1);
	printf("******************************* \n");
	printf("******************************* \n");
	printf("cantidad de empleados categoria 2: %d \n", totcat2);
	printf("******************************* \n");
	printf("******************************* \n");
	printf("cantidad de empleados categoria 3: %d \n", totcat3);
	printf("******************************* \n");
	
	printf("******************************* \n");
	printf("total de sueldos de categoria 1: %f \n", sueldoCat1);
	printf("******************************* \n");
	printf("******************************* \n");
	printf("total de sueldos de categoria 2: %f \n", sueldoCat2);
	printf("******************************* \n");
	printf("******************************* \n");
	printf("total de sueldos de categoria 3: %f \n", sueldoCat3);
	printf("******************************* \n");
	
	totSueldo = (sueldoCat1 + sueldoCat2 + sueldoCat3) / 50;
	
	printf("******************************* \n");
	printf("sueldo promedio de los empleados: %f \n", totSueldo);
	printf("******************************* \n");
	
	printf("******************************* \n");
	printf("sueldo maximo entre los empleados: %f \n", maxSueldo);
	printf("******************************* \n");
	printf("******************************* \n");
	printf("nombre: %s \n", nombAux);
	printf("******************************* \n");
	
	sueldoCat1 = (sueldoCat1 * 100) / totSueldo;
	sueldoCat2 = (sueldoCat2 * 100) / totSueldo;
	sueldoCat3 = (sueldoCat3 * 100) / totSueldo;
	
	printf("******************************* \n");
	printf("porcentaje sobre el total categoria 1:  %f \n", sueldoCat1);
	printf("******************************* \n");
	printf("******************************* \n");
	printf("porcentaje sobre el total categoria 2:  %f \n", sueldoCat2);
	printf("******************************* \n");
	printf("******************************* \n");
	printf("porcentaje sobre el total categoria 3:  %f \n", sueldoCat3);
	printf("******************************* \n");
	
	
	
	return 0;
	
}

float sueldo (float sueldo1, int anti )
{
	float sueldo2;
	sueldo2 = sueldo1 + (anti * 100);
	
	return sueldo2;
	
}
