#include <iostream>
#include "LIB_TP.h"
Valores_t val;

int main(int argc, char** argv) 
{
	val.Rset=1000000;
	val.Imax = 5;
	int sel=0;
	while(sel!=9)
	{printf("Seleccione magnitud:\n");
	printf("1.Tension\n2.Ilimite\n3.Carga\n4.valoresreales\n9.salir\n\n seleccion:");
	fflush(stdin);
	scanf("%d",&sel);
	system ("cls");
	if (sel ==1)
	val = cargaV(val);
	if (sel == 2)
	val = cargaI(val);
	if (sel == 3)
	val = cargaR(val); 	
	val = estado(val);  // Función estado, compara Io con Imáx, mientras Io sea mayor q la corriente límite, llama a la función reducir 
	printf("\nVset:%f\nVo:%f\nImax:%f\nIo:%f\nRset:%f",val.Vset,val.Vo,val.Imax,val.Io,val.Rset);
	printf("\nSeleccion:");
}
	return 0;
}
