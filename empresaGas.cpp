#include <stdlib.h>
#include <stdio.h>
#include <iostream>

//declaracion de una funcion
float factTot(int , int);
float promFact2(float factFinal, int totFact);


int main ()
{
	
	
	int numFact;
	int codProd;
	char codSect;	
	int numCami;
	int cantVend;
	int totFact = 0;
	float factFinal = 0;
	bool prodFlag1 = false;
	bool prodFlag2 = false;
 	bool sectFlag = false;
 	bool camiFlag = false;
 	float promFact1 = 0;
 	int cantprod1 = 0;
 	int cantprod2 = 0;
 	float valprom1;
 	float valprom2;
 	float garraf1 = 5;
 	float garraf2 = 18;
 	int sectA, sectB, sectC, secTotal = 0;
 	float factSectA, factSectB, factSectC;
 	int maxFact;
 	bool flag1 = false;
 	float max;
 	
 
	
	
 	
	printf("**************************** \n");
	printf("ingrese numero de factura: \n");
	printf("**************************** \n");
	scanf("%d", &numFact);
	
	//totFact = totFact +1;
	
	while ( numFact != 0 )
	{
		
		do 
		{
			printf("**************************** \n");
			printf("ingrese codigo de producto: \n");
			printf("**************************** \n");
			scanf("%d", &codProd);
			if ( codProd == 1 )
			{
				cantprod1 = cantprod1 + 1;
				prodFlag1 = true; 
			} else if (codProd == 2)
			{
				cantprod2 = cantprod2 + 1;
				prodFlag2 = true;
			}
		
		} while (prodFlag1 == true || prodFlag1 == true );
		do 
		{
			printf("**************************** \n");
			printf("ingrese sector comercial: \n");
			printf("**************************** \n");
			scanf("%c", &codSect);
			switch (codSect)
			{
				case 'a' : 
				sectA = sectA + 1;
				sectFlag = true;
				break;
				case 'b' : 
				sectB = sectB + 1;
				sectFlag = true;
				break;
				case 'c' : 
				sectC = sectC + 1;
				sectFlag = true;
				break;
				default: 
				sectFlag = false;
				printf("ingreso sector equivocado \n");		
			}

		} while (sectFlag == true );
		do 
		{
			printf("**************************** \n");
			printf("ingrese numero de camion: \n");
			printf("**************************** \n");
			scanf("%d", &numCami);
			if ( numCami == 1 || numCami == 2 || numCami == 3 || numCami == 4 || numCami == 5)
			{
				camiFlag = true; 
			}
		
		} while (camiFlag == true );
		
	printf("**************************** \n");
	printf("ingrese cantidad vendida: \n");
	printf("**************************** \n");
	scanf("%d", &cantVend);		
		
	if ( flag1 = false )
	{
		flag1 = true;
		max = factTot(codProd, cantVend);
		maxFact = numFact;
	}else 
	{
		if (max < factTot(codProd, cantVend))
		{
			max = factTot(codProd, cantVend);
			maxFact = numFact;
		}
	}
	factFinal = factFinal + factTot(codProd, cantVend);
	
			
	totFact = totFact +1;
	printf("**************************** \n");
	printf("ingrese numero de factura: \n");
	printf("**************************** \n");
	scanf("%d", &numFact);

		
	}
    
   printf("**************************** \n");
	printf("total facturado: %f \n", factFinal);
	printf("**************************** \n");
	
	promFact1 = promFact2(factFinal, totFact);
	
	printf("**************************** \n"); 
	printf("valor promedio de las facturas: %f \n", promFact1);
	printf("**************************** \n");
	
	valprom1 = ((garraf1 * cantprod1) * 100) / totFact;
	valprom2 = ((garraf2 * cantprod2) * 100) / totFact; 
	printf("**************************** \n");
	printf("valor promedio sobre el total del producto 1: %f \n", valprom1);
	printf("**************************** \n");
	printf("**************************** \n");
	printf("valor promedio sobre el total del producto 2: %f \n", valprom2);
	printf("**************************** \n");
	
	secTotal = sectA + sectB + sectC;
	factSectA = (sectA * totFact) / secTotal;
	factSectB = (sectB * totFact) / secTotal;
	factSectC = (sectC * totFact) / secTotal;
	printf("**************************** \n");
	printf("facturazion sector A: %f \n", factSectA);
	printf("**************************** \n");
	printf("**************************** \n");
	printf("facturazion sector B: %f \n", factSectB);
	printf("**************************** \n");
	printf("**************************** \n");
	printf("facturazion sector C: %f \n", factSectC);
	printf("**************************** \n");
	
	if (factSectA>factSectB && factSectA > factSectC)
	{
		printf("**************************** \n");
		printf("El sector A es el que mas facturo en el mes, facturazion:  %f \n", factSectA);
		printf("**************************** \n");
	} else if (factSectB>factSectA && factSectB > factSectC)
	{
		printf("**************************** \n");
		printf("El sector B es el que mas facturo en el mes, facturazion:  %f \n", factSectB);
		printf("**************************** \n");
	} else
	{
		printf("**************************** \n");
		printf("El sector C es el que mas facturo en el mes, facturazion:  %f \n", factSectC);
		printf("**************************** \n");		
	}
	
	printf("**************************** \n");
	printf("la factura con mayor importe es la: %d \n", maxFact);
	printf("importe: %f \n", max);
	printf("**************************** \n");
	
	


return 0;	
}


float factTot(int codProd, int cantVend) 
{  
	float garraf1 = 5;
	float garraf2 = 18;
	float auxFact = 0;

	if ( codProd == 1)
	{
		auxFact = garraf1 * cantVend;
	}else 
	{
		auxFact = garraf2 * cantVend;
	}
	return(auxFact); 
} 

 float promFact2(float factFinal, int totFact)
{
 	return (factFinal / totFact);
 	
}
