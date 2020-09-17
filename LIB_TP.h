#ifndef LIB_TP
#define LIB_TP

#include <stdio.h>
#include <conio.h>

typedef struct {
  float Vset;       // tensión seteada
  float Imax;       // corriente máxima
  float Vo;        // tensión que entrega la fuente
  float Io;        // corriente de la fuente
  float Rset;       // resistencia seteada
  float Estado;
}Valores_t;

Valores_t cargaV(Valores_t val);
Valores_t cargaI(Valores_t val);
Valores_t cargaR(Valores_t val);
Valores_t disminuir(Valores_t val);
Valores_t reset(Valores_t val);
Valores_t estado(Valores_t val);
#endif
