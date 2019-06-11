#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#define max_linea 'h'

float indice(int);

int main()
{ 

//VARIABLES
int corraux, cantArt, auxIndi;
float desc, totVenta = 0;
int indArt, auxInd, numArt;
float auxMax, porcen, comision;



//VECTORES
int corredor[10]={0};
float corrTot[10]={0};
int correInd[10]={0};
//int comision[4]= {0, 5, 8, 10, 12};
float articulo[4]= {100, 150, 200, 120};
char auxVec[20];

//ingrese corredor
printf("ingrese numero de corredor: \n");
fflush(stdin);
scanf("%d", &corraux);

while ( corraux != 0)
{
	//hacer el do while
	printf("ingrese numero de articulo: \n");
	fflush(stdin);
	scanf("%d", &numArt);
	
	printf("ingrese cantidad de articulos: \n");
	fflush(stdin);
	scanf("%d", &cantArt);
	
	printf("¿Posee algun tipo de descuento? \n");
	printf("Ingrese si o no: \n");
	fflush(stdin);
	gets(auxVec);
	
	if ( auxVec == "si")
	{
		printf("ingrese el monto de descuento: \n");
		fflush(stdin);
		scanf("%f", &desc);
	}
	else 
	{
		printf("la factura no tiene descuento \n");
	}
	
	// calculo el total de la venta y acumulo por corredor
	corredor[corraux] = corredor[corraux] + 1;
	corrTot[corraux] = ((articulo[numArt] * cantArt ) - desc );
	totVenta = totVenta + corrTot[corraux];
	
	system("cls");
	//ingrese corredor
	printf("ingrese numero de corredor: \n");
	fflush(stdin);
	scanf("%d", &corraux);

}
system("cls");

for ( int f = 1; f< 10 ; f++)
{
	correInd[f] = f;
}

for( int i = 1 ; i<10; i++)
{
	if ( corredor [i] > 0 )
	{
	
		comision = (indice(i) * corrTot[i]);
		porcen = ((corrTot[i] * 100) / totVenta);
		
		printf("***********************************************");
		printf("VENTA TOTAL DEL CORREDOR %d: \n", i );
		printf("***********************************************");
		printf("cant vendidad por corredor: %d \n", corredor[i] );
		printf("total vendido por corredor: %5.2f  \n", corrTot[i] );
		printf("comision del corredor: %5.2f \n", comision );
		printf("porcentaje del corredor sobre el total de ventas: %5.2f \n", porcen );
	}else 
	{
		printf("corredor %d no tiene ventas", i);
	}
	
}

system("cls");
for ( int i = 1; i< 9; i++)
{
	for ( int j = i+1; j < 10 ; j++)
	{
		if (corrTot[i] < corrTot[j])
		{ 
			auxMax = corrTot[i];
			corrTot[i] = corrTot[j];
			corrTot[j] = auxMax;
		
			//correjir esto 
			auxIndi = i;
			correInd[i] = j;
			correInd[j] = auxIndi;
		} 
	}
}
printf("el corredor que mas vendio es el corredor %d \n", correInd[1] );
printf("total vendido por corredor: %5.2f  \n", corrTot[1]);

system("cls");
for (int i =1; i< 10; i++)
{
	comision = (indice(i) * corrTot[i]);
	
	printf("TOTALES ORDENADOS POR MAYOR CANT DE VENTAS EN PESOS");
	printf("***********************************************");
	printf("VENTA TOTAL DEL CORREDOR %d: \n", correInd[i] );
	printf("***********************************************");
	printf("cant de facturas por corredor: %d \n", corredor [i] );
	printf("total vendido por corredor: %5.2f  \n", corrTot[i] );
	printf("comision del corredor: %5.2f \n", comision );

}



return 0;
}

float indice(int i)
{
float indAux;

switch(i)
{
	case 1:
		indAux = 0.05;
	break;
	case 2:
		indAux = 0.05;
	break;
	case 3:
		indAux = 0.05;
	break;	
	case 4:
		indAux = 0.08;
	break;
	case 5:
		indAux = 0.08;
	break;
	case 6:
		indAux = 0.08;
	break;	
	case 7:
		indAux = 0.10;
	break;
	case 8:
		indAux = 0.10;
	break;	
	case 9:
		indAux = 0.10;
	break;		
	case 10:
		indAux = 0.12;
	break;	

}

return indAux;

}
