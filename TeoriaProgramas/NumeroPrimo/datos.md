# Cálculo de números primos

Al no permitirse el uso de break en PRO1 en lugar de hacer un for para el cálculo del [número primo simple](./numeroPrimoSimple.cc) habrá que usar un while que compruebe el valor del booleano que marca si el número es primo o no además de la condición de que i sea menor que n.

Una vez hecho esto se peude simplificar la declaración de las variables cambiando la asignación de los booleanos por operaciones booleanas que acorten el código que sale en el código de [número primo con operaciones booleanas](./numeroPrimoOperacionesBooleanas.cc).

Es mejorable el código poniendo el líme en la raíz de n, siguiendo la propiedad matemática que marca que un número no primo es expresable como la multiplicación de dos números, de esta manera el máximo divisor que no sale como una operación previa es la raiz del número. Esto se ve en [número primo cálculo con raíz](./numeroPrimoRaiz.cc).

Usando esto el número de iteraciones es mucho menor en el tercer programa que en el primero, siendo mucho más eficiente en números grandes.