#include "LIB_TP.h"

Valores_t cargaVI(Valores_t val)
{
    printf("ingrese Vset:");
    scanf("%f",&val.Vset); 
    printf("ingrese Imax:");
    scanf("%f",&val.Imax);
    val.Vo = val.Vset;
    return (val);
}


Valores_t cargaR(Valores_t val)
{	val.Vo = val.Vset;
    printf("ingrese Rset:");
    scanf("%f",&val.Rset);
    val.Io = val.Vo / val.Rset;
    return (val);
}

Valores_t disminuir(Valores_t val)
{
    val.Vo = val.Vo * 0.8;
    val.Io = val.Vo / val.Rset;
	return (val);
}
