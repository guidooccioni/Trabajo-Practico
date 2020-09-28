#include <iostream>
#include "LIB_TP.h"
Valores_t val;

int main(int argc, char** argv) 
{
	val.Rset=1000000;
	val.Imax = 5;
	int menu_t=0;
	while(menu_t!=9)
	{printf("\nSeleccione magnitud:\n");
	printf("1.Tension\n2.Ilimite\n3.Carga\n\n seleccion:");
	fflush(stdin);
	scanf("%d",&sel);
	system ("cls");
	switch (menu_t)
		{	
			case Tension:
				val = cargaV(val);
				break;
			case Corriente:
				val = cargaI(val);
				break;
			case Resistencia:
				val = cargaR(val); 	
				break;
			default:
				break;
		}		
	val = estado(val);  // Función estado, compara Io con Imáx, mientras Io sea mayor q la corriente límite, llama a la función reducir 
	printf("\nVset:%f\nVo:%f\nImax:%f\nIo:%f\nRset:%f\n",val.Vset,val.Vo,val.Imax,val.Io,val.Rset);
}
	return 0;
}
