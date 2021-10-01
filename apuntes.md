# PRO1

## Profesora laboratorio

- Rosa Mª Jiménez
- Despacho Omega A0 224

## Profesora teoría

- Àngela Nebot
- No c

---
---

## Información de los programas a entregar en el Jutge

### Controles

Hay 3 controles para los que es necesario un mínimo de ejercicios entregados.

### Juegos de pruebas

Los juegos de pruebas se descargan en la página del Jutge en el que está el enunciado en la imagen a la derecha del PDF.

---
---

## Condicionales

### If

Los if van con la condición entre (). En caso de que sea una sola línea a ejecutar tras este se pueden poner en la misma o una abajo sin necesidad de usar {}.

```c++
if (condición) {
    // código
}
```

---

## Bucles

### While

Sintácticamente es muy similas a los if. Ejecuta el código dentro del bloque siempre que la condición de ejecución se mantenga como cierta.

```c++
while (condición) {
    // código
}
```

### For

El for es una construcción no-básica, funcionando a partir de un while y que debe de ser usado únicamente si se sabe la cantidad de veces que se va a ejecutar el bucle, teniendo la sintáxis siguiente:

```c++
for (int i = 0; i <= máximo; ++i) {
    // código
}
```

A diferencia de un while con contador como condición, el contado en el for no es utilizable fuera de este, en cambio en un while este, al ser declarado como variable fuera del while, puede ser usado después.

---
---

## Información importante

### Preincremento y postincremento

Hay que utilizar el preincremento.

---

### Variables y bloques

Las variables declaradas dentro de un bloque solo se pueden utilizar dentro de este. En caso de ser necesaria una variable fuera de este pero recibir el valor dentro hay que declararla justo antes de entrar al bloque.

---

### Secuencias

- Se conoce la cantidad de elementos

    En este caso se tiene la cantidad de pasadas del bucle.

    ```c++
    for (int i = 0; i < max; ++i) {
        // código
    }
    ```

- La secuencia viene finalizada por un elemento especial.

    ```c++
    while (element != "end") {
        // código
    }
    ```

- No se sabe el número de elementos y no tiene elemento especial.

    En este caso el bucle finaliza cuando en cin no recibe ningún dato.

    ```c++
    while (cin >> element) {
        // código
    }
    ```

    El cin devuelve un booleano de forma que en caso de obtener un input devuelve true, en caso contrario, devuelve false.

    El final de secuencia se marca con el teclado usando Ctrl+D.