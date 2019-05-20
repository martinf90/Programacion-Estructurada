#include <stdlib.h>
#include <stdio.h>
#include <iostream>

float sueldo(float, int);

int main()
{
	
	char empleado[30];
	char nombAux1[30];
	char nombAux2[30];
	int catg;
	float sueldo;
	int cantEmp = 0;
	int totEmp;
	bool empFlag = false;
	bool auxCat = false;
	bool auxMax = false;
	bool auxMin = false;	
	int empCat1, empCat2, empCat3, empCat4 = 0;
	float cat1Suel, cat2Suel, cat3Suel, cat4Suel = 0;
	int suelMayor1, suelMayor2 = 0;
	float maxSueldo, minSueldo;
	char auxSeguir;
	
	printf("******************************* \n");
	printf("ingrese el nombre del empleado: \n");
	printf("******************************* \n");
	scanf("%s", &empleado);
	
	while (empFlag == false)
	{
		do{
		
		printf("******************************* \n");
		printf("ingrese la categoria del empleado: \n");
		printf("******************************* \n");
		scanf("%d", &catg);
		switch (catg)
		{
			case 1:
				auxCat = true;
				empCat1 = empCat1 + 1;
				printf("******************************* \n");
				printf("ingrese sueldo del empleado: \n");
				printf("******************************* \n");
				scanf("%f", &sueldo);
				if (sueldo > 1000)
				{
					suelMayor1 = suelMayor1 + 1;
				}
				cat1Suel = cat1Suel + sueldo;
			break;
			case 2:
				auxCat = true;
				empCat2 = empCat2 + 1;
				printf("******************************* \n");
				printf("ingrese sueldo del empleado: \n");
				printf("******************************* \n");
				scanf("%f", &sueldo);
				cat2Suel = cat2Suel + sueldo;
			break;
			case 3:
				auxCat = true;
				empCat3 = empCat3 + 1;
				printf("******************************* \n");
				printf("ingrese sueldo del empleado: \n");
				printf("******************************* \n");
				scanf("%f", &sueldo);
				cat3Suel = cat3Suel + sueldo;
			break;
			case 4:
				auxCat = true;
				empCat4 = empCat4 + 1;
				printf("******************************* \n");
				printf("ingrese sueldo del empleado: \n");
				printf("******************************* \n");
				scanf("%f", &sueldo);
				cat4Suel = cat4Suel + sueldo;
			break;
			default:
			  	printf("categoria erronea");
			
		}
		if (auxCat == true)
		{
			if (auxMax == false)
			{
				auxMax = true;
				maxSueldo = sueldo;
				for (int j=0; j>30; j++)
				{
					nombAux1[j] = empleado[j];
				}
			}else if (sueldo > maxSueldo)
			{
				maxSueldo = sueldo;
				for (int j=0; j>30; j++)
				{
					nombAux1[j] = empleado[j];
				}
			}
			if (auxMin == false)
			{
				auxMin = true;
				minSueldo = sueldo;
				for (int f=0; f>30; f++)
				{
					nombAux2[f] = empleado[f];
				}
			}else if (sueldo < minSueldo)
			{
				minSueldo = sueldo;
				for (int f=0; f>30; f++)
				{
					nombAux2[f] = empleado[f];
				}
			}
			if(sueldo > 2000)
			{
				
				suelMayor2 = suelMayor2 + 1;
				
			}
		}
		} while (auxCat == false);
	
	do{		
	printf("******************************* \n");
	printf("¿desea ingresar mas empleados?");
	printf("******************************* \n");
	scanf("%c", &auxSeguir);
	} while (auxSeguir == 's' || auxSeguir == 'n');
	
	if (auxSeguir = 's')
		{
		printf("******************************* \n");
		printf("ingrese el nombre del empleado: \n");
		printf("******************************* \n");
		scanf("%s", &empleado);
		}else 
		{
			empFlag = true;
		}
	} 
	printf("******************************* \n");
	printf("total empleados Categoria 1 : %d \n", empCat1);
	printf("******************************* \n");
	
	printf("******************************* \n");
	printf("total empleados Categoria 2 : %d \n", empCat2);
	printf("******************************* \n");
	
	printf("******************************* \n");
	printf("total empleados Categoria 3 : %d \n", empCat3);
	printf("******************************* \n");
	
	printf("******************************* \n");
	printf("total empleados Categoria 4 : %d \n", empCat4);
	printf("******************************* \n");	
	
	printf("******************************* \n");
	printf("cantidad de empleados con sueldos superiores a los $2000 : %d \n", suelMayor2);
	printf("******************************* \n");
	
	printf("******************************* \n");
	printf("cantidad de empleados de categoria 1 con sueldos superiores a los $1000 : %d \n", suelMayor1);
	printf("******************************* \n");
	
	printf("******************************* \n");
	printf("sueldo maximo entre todos los empleados : %f \n", maxSueldo);
	printf("******************************* \n");
	printf("******************************* \n");
	printf("nombre del empleado: %s \n", nombAux1);
	printf("******************************* \n");
	
	printf("******************************* \n");
	printf("sueldo minimo entre todos los empleados : %f \n", minSueldo);
	printf("******************************* \n");
	printf("******************************* \n");
	printf("nombre del empleado: %s \n", nombAux2);
	printf("******************************* \n");
	
	if (empCat1 > empCat2 || empCat1 > empCat3 || empCat1 > empCat4)
	{
		printf("******************************* \n");
		printf("Categoria 1 tiene mas empleados \n");
		printf("******************************* \n");
		printf("cantidad: %d \n", empCat1);
	}
	if (empCat2 > empCat1 || empCat2 > empCat3 || empCat2 > empCat4)
	{
		printf("******************************* \n");
		printf("Categoria 2 tiene mas empleados \n");
		printf("******************************* \n");
		printf("cantidad: %d \n", empCat2);
	}

	if (empCat3 > empCat1 || empCat3 > empCat2 || empCat3 > empCat4)
	{
		printf("******************************* \n");
		printf("Categoria 3 tiene mas empleados \n");
		printf("******************************* \n");
		printf("cantidad: %d \n", empCat3);
	}
	if (empCat4 > empCat1 || empCat4 > empCat3 || empCat4 > empCat2)
	{
		printf("******************************* \n");
		printf("Categoria 4 tiene mas empleados \n");
		printf("******************************* \n");
		printf("cantidad: %d \n", empCat4);
	}
	
	totEmp = empCat1 + empCat2 + empCat3 + empCat4;
	empCat1 = (empCat1 * 100) / totEmp;
	empCat2 = (empCat2 * 100) / totEmp;
	empCat3 = (empCat3 * 100) / totEmp;
	empCat4 = (empCat4 * 100) / totEmp;
	printf("******************************* \n");
	printf("porcentaje Categoria 1 sobre el total de empleados: %f \n", empCat1);
	printf("******************************* \n");
	printf("******************************* \n");
	printf("porcentaje Categoria 2 sobre el total de empleados: %f \n", empCat2);
	printf("******************************* \n");
	printf("******************************* \n");
	printf("porcentaje Categoria 3 sobre el total de empleados: %f \n", empCat3);
	printf("******************************* \n");
	printf("******************************* \n");
	printf("porcentaje Categoria 4 sobre el total de empleados: %f \n", empCat4);
	printf("******************************* \n");


return 0;
}
