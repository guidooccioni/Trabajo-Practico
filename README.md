# Trabajo-Practico


## Memoria-Descriptiva

Voltaje y corriente ingresados: El voltaje(Vset) se le solicita al usuario al igual que el límite de corriente(Imáx). 

Carga de la fuente: Se simula la carga colocando el usuario un valor en ohms(R).

Control de corriente excedida: Es una función que medio de la ley de Ohm obtiene la corriente que entregará la fuente y la compara con el límite establecido. Si se supera devuelve un 1, caso contrario un 0.

Control de voltaje: Función directamente relacionada con el control de corriente excedida, si recibe un 1, disminuye automáticamente el voltaje hasta q deje de recibirlo. En cuanto comienza a actuar entrega un 1 (lo hará hasta que se vuelvan a ingresar valores de voltaje y corriente), caso contrario un 0.

Indicador de corriente excedida: Si recibe un 1 del control de voltaje, aparece un mensaje en pantalla indicando que se excedió la corriente limite.

Indicador de voltaje y corriente reales: Entrega los valores reales con los que se esta trabajando.

## Diagrama
![Captura de pantalla (144)](https://user-images.githubusercontent.com/67933711/90553411-b785be80-e16a-11ea-864b-d5924ac2148c.png)

