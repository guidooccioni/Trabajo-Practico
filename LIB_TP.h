#ifndef LIB_TP
#define LIB_TP

#include <stdio.h>

typedef enum {
  mantener = 0,
  reducir = 1
}acciones_t;

typedef struct {
  float Vset;       // tensión seteada
  float Imax;       // corriente máxima
  float Vo;        // tensión que entrega la fuente
  float Io;        // corriente de la fuente
  float Rset;       // resistencia seteada
}Valores_t;

Valores_t cargaVI(Valores_t val);

Valores_t cargaR(Valores_t val);

#define Reducir(V) V*0,8

#endif
