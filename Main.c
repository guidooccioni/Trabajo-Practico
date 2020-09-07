#include "LIB_TP.h"
Valores_t val;

int main()
{	   int r = 0;
	   int c = 0;	
  while (r == 0)
  {
      Valores_t cargaVI;			/* Cargo Vset e Imáx */
      while (c == 0)				/* Con Vset e Imáx fijas, selecciono una carga, y si Io excede a Imáx reduzco Vo */
	  { 
        Valores_t cargaR;			/* Cargo Rset */
        while (val.Io > val.Imax)	/* Mientras que Io sea mayor que Imáx, reduzco porcentualmente a Vo */
        {
          Valores_t disminuir;		/* Reduzco Vo, y recalculo Io */
        }
        printf(" Si desea colocar otra carga presione 0, si no otro numero\t");
       	scanf("%d",&c);
      } 
        printf(" Si desea  variar Vset y/o Imax presione 0,  si no otro numero\t");
        scanf("%d",&r);
  }
   

}
