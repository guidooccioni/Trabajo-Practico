#include "LIB_TP.h"

Valores_t reset(Valores_t val)
{
	val.Vo = val.Vset;
	val.Io = val.Vset / val.Rset;
	return val;	
}
Valores_t cargaV(Valores_t val)
{
    printf("ingrese Vset[Volts]:");
    scanf("%f",&val.Vset); 
    val = reset(val);
    return val;
}
Valores_t cargaI(Valores_t val)
{
	printf("\ningrese Imax[Amperes]:");
    scanf("%f",&val.Imax);
    val = reset(val);
    return val;
}
Valores_t cargaR(Valores_t val)
{
    printf("ingrese Rset[Ohms]:");
    scanf("%f",&val.Rset);
    val = reset(val);
    return val;
}
Valores_t disminuir(Valores_t val)
{
    val.Vo = val.Vo * 0.8;
	val.Io = val.Vo / val.Rset;
	printf("\nVo:%f V\t\t\tIo:%f A\t",val.Vo,val.Io);
	return val;
}

Valores_t estado(Valores_t val)
{
	while (val.Io > val.Imax)
		val = disminuir(val);
	return val;
}
