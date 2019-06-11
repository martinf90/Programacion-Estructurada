#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string>
#define INDICE  10

int main(int argc, char** argv) 
{
	bool flag1 = false;
	int auxProd = 0;
	int auxArray = 0;
	//char auxProd;
	int auxPrec, auxCant;
	char auxIngre = 'n';
	int i;
	int j = 0;
	float resultado;
	//char producto [INDICE] = { 'a' , 'b' , '3', '4' , '5' , '6' , '7' , '8' , '9' , '10' };
	int producto [INDICE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int precio [INDICE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	do
	{	
		if(auxIngre == 's')
		{
			printf("Ingrese nuevamente el producto requerido \n");
			scanf("%d", &auxProd);
		}else
		{
			printf("Ingrese el producto requerido \n");
			scanf("%d", &auxProd);
		}
		
		for ( i=0; i<10; i++ )
		{
			auxArray = producto[i];				
			if ( auxProd == auxArray )
			{
				j = i;
				flag1 = true;
				fflush(stdin);		
			}
		}
		if (flag1 == false)
		{
			printf("el producto no existe en nuestro catalogo \n");
			auxIngre = 's';
			fflush(stdin);
		}
		//printf("el producto no existe en nuestro catalogo");
			
	}while (flag1 == false);
	
	auxPrec = precio[j];
	
	fflush(stdin);
	printf("ingrese la cantidad de articulos requeridos");
	scanf("%d", &auxCant );
	
	resultado = ( auxCant * auxPrec) * 1.21;
	
	printf("El total de %d es de %d \n", producto [j], auxCant);
	printf("Su precio incluido IVA es de: %.2f \n", resultado);
	
	
	return 0;
}


