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

Los juegos de pruebas se descargan en la página del Jutge en el que está el
enunciado en la imagen a la derecha del PDF.

---
---

## Tipos de datos

### Bool

Esta clase de variable permite guardar un valor booleano, es decir, true o
false.

---

### Int

Esta clase de variable guarda un valor numérico sin decimales.

---

### Double

Este tipo permite el guardado de número con decimales.

/!\ Para imprimir un double con datos fijos hay que escribir antes del cout de
salida

```c++
cout.setf(ios::fixed);
cout.precision(4);
```

---

### Char

Esta clase de variable solo permite el guardado de un único caracter. Es
traducible a Int para operar con la posición de este, de forma que se puede
hacer cambios de mayúscula a minúscula fácilmente. Se declara usando ''.

---

### String

Vector formado por Chars, de forma que se crea un conjunto de estos ordenados
de una manera específica. Se declara usando "".

---
---

## Condicionales

### If

Los if van con la condición entre (). En caso de que sea una sola línea a
ejecutar tras este se pueden poner en la misma o una abajo sin necesidad de
usar {}.

```c++
if (condición) {
    // código
}
```

---
---

## Bucles

### While

Sintácticamente es muy similas a los if. Ejecuta el código dentro del bloque
siempre que la condición de ejecución se mantenga como cierta.

```c++
while (condición) {
    // código
}
```

### For

El for es una construcción no-básica, funcionando a partir de un while y que
debe de ser usado únicamente si se sabe la cantidad de veces que se va a
ejecutar el bucle, teniendo la sintáxis siguiente:

```c++
for (int i = 0; i <= máximo; ++i) {
    // código
}
```

A diferencia de un while con contador como condición, el contado en el for no
es utilizable fuera de este, en cambio en un while este, al ser declarado como
variable fuera del while, puede ser usado después.

### Tipos de secuencias

- Se conoce la cantidad de elementos

    En este caso se tiene el tamaño de la secuencia.

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

    En este caso el bucle finaliza cuando el cin no recibe ningún dato/hay un
    EOF (End Of File).

    ```c++
    while (cin >> element) {
        // código
    }
    ```

    El cin devuelve un booleano de forma que en caso de obtener un input
    devuelve true, en caso contrario, devuelve false.

    El final de secuencia se marca con el teclado usando Ctrl+D. (También
    funciona escribiendo "exit")

---

### Algoritmos en secuencias

- #### Búsqueda

    Se puede parar el bucle al llegar a un elemento específico, pudiendo dejar
    algunos sin mirar.

    Primero se mira si está y si no se pasa al siguiente elemento.

- #### Recorrido

    Para solucionar el problema se necesita pasar por todos los elementos de la
    secuencia.

---

### Estrategia de ventana deslizante

Secuencia que opera con valores anteriores.

[Ejemplo](TeoriaProgramas/SecuenciaVentana/BuscarHola.cc)

---

### Secuencia dentro de secuencia

Secuencia que al operar requiere de otra secuencia.

[Ejemplo](TeoriaProgramas/Subsecuencia/subsecuencia.cc)

---
---

## Subprogramas

Trozo de código fuera de la función main. Permite una mayor legibilidad del
código al dividir el programa en varias funciones que realizan tareas
específicas.

Deben de escribirse antes del main o, en caso de escribirlo después, hay que
declarar la cabecera del subprograma antes de él.

```c++
#include <iostream>

using namespace std;

int p(int a);

int main() {
    p(4);
}

int p(int a) {
    return 2*a;
}
```

Se escribe con la estructura de: tipo de salida nombre(parámetros de entrada).
Por ejemplo:

```c++
int division(int n1, int n2) {
    return n1/n2
}
```

Una función debe tener siempre un return para devolver un valor en su llamada y
el valor que se devuelve debe de ser del tipo escrito en la declaración de la
función. Esto no es aplicable si no se da un tipo en la declaración usando la
estructura siguiente:

```c++
void function(int x) {
    // Código
}
```

En este caso esto es una acción ya que para saber lo que se ha procesado hay
que mirar el valor de una variable interna, por ejemplo:

```c++
void factores(int n) {
    int f = 2;
    while (x != 1) {
    if (x%f == 0) {
        cout << f << endl;
        x /= f;
    }
    else ++f;
    }
}
```

Así se puede ver que una acción no devuelve ningún valor a diferencia de una
función ya que ya imprime el valor.

Las funciones se usan en operaciones como un argumento más de esta. Una acción,
en cambio, se usa como una instrucción independiente en el programa.

```c++
    i = veces(3, i+1) + 1; // función

    factores(i); // acción
```

Tal y como se ve, los elementos de entrada pueden ser tanto un valor específico
como una operación, pudiendo tener también el valor de otra función dentro.

### Llamada por valor

Pasa el valor de la variable pudiendo operar con este sin modificar el valor
que tiene en la función donde se ha llamado.

```c++
int funcion(int x) {
    // código
}
```

### Llamada por referencia

Pasa la ubicación de memoria (un puntero), haciendo que, al editar el valor de
esta variable en la función, se cambie también en la de llamada.

```c++
void accion(int& x) {
    // Código
}
```

Los datos por referencia hacen un programa más eficiente al usar menor memoria

---
---

## Recursividad

Un subprograma es recursivo cuando este contenga una llamada a sí mismo.

Esta recursividad se expresa mediante una función que contiene el cálculo
necesario en esta con una llamada a sí mismo modificando un poco el dato de
entrada de forma que este acaba el bucle y procede a la devolución del dato.

Un ejemplo de esto es el programa para calcular el factorial de un número como
es el caso de este programa.

```c++
int factorial(int n) {
    if (n > 0)
	return n*factorial(n - 1);

    return 1;
}
```

---
---

## Vectores

Declaración de un vector:
```c++
#include <vector>

vector<T> nombre(S, I);
```

En esto, T es el tipo de los datos de los valores internos del vector, S es la
cantidad de elementos e I es el valor inicial de estos en el vector.

Los parámertos S e I son opcionales. Si solo hay un elemento este es S y si hay
2 o más será S I.

Para acceder a los datos siempre se hace por el índice de este de la siguiente
manera:

```c++
nombre[i]
```

Esto sirve tanto para leer el dato como para modificarlo.

### Paso de información

#### Por referencia

```c++

int funcion(vector<int>& s) {
    // código
}
```

En caso de que únicamente se lea hay que pasarlo por referencia constante de la
siguiente manera:

```c++
int funcion(const vector<int>& s) {
    // código
}
```

#### Por valor

Aunque esto se pueda programar como es ineficiente no se puede usar en clase y
el compilador lo pasa por referencia.

```c++

int suma(vector<int> s) {
    int n = s.size();
    int sum = 0;
    for (int i = 0; i < n; ++i)
	sum += s[i];
    }
    return sum;
}
```

### Devolución de un vector

```c++
vector<int> concatenate(const vector<int>& s, const vector<int>& p) {
    int n1 = s.size();
    int n2 = p.size();

    vector<int> res(n1 + n2);


    for (int i = 0; i < n1; ++i)
	res[i] = v1[i];

    for (int i = 0; i < n2; ++i)
	res[n1 + i] = v2[i];

    return res;
}
```

### Añadir elementos al vector

Al añadir elementos a un vector este elemento añadido se incluye al final del
vector ya que este es una secuencia ordenada de valores. Esto se hace usando
la función push_back de la siguiente manera:

```c++
vector<int> v(3, 4, 2, 5);
v.push_back(5);
```

### Recorrer vector

Se hace un for desde la posición inicial hasta el tamaño del vector y se lee
individualmente cada elemento con la posición que sale del for.

### Búsqueda

Hay dos opciones, un para vectores ordenador y otra para vectores no odenados.
En caso de que esté desordenado se hace una búsqueda lineal leyendo uno por uno
los elementos del vector. La otra opción con vectores ordenados es usar la
búsqueda dicotómica, ejecutándose primero leyendo la mitad del vector. En caso
de que el valor sea mayor del que se busca se mira la mitad menor. En caso de
que sea mayor lo que se busca se mira la mitad mayor y en caso de que sea igual 
se deja de buscar porque ya se ha encontrado el valor.

### Strings

Se puede conseguir el tamaño de un string usando la función 
```string.lenght()``` de la liberería string.

---
---

## Typedef

Permite crear un tipo de datos específico para el programa


---
---

## Matrices

Una matriz es un tipo de vector que contiene vectores en su interior que puede
ser declarado tanto como un vector de vectores directamente como mediante el 
uso de typedef.

```c++

// Declaración como vector de vectores de tamaño 0
vector<vector<int> > matrix;

// Declaración como vector de vectores de tamaño determinado
vector<vector<int> > matrix(5, vector<int>(10));

// Declaración como vector de vector de tamaño determinado y elemento inicial
vector<vector<int> > matrix(5, vector<int>(10, 0));

// Declaración usando typedef
typedef vector<int> row;
typedef vector<row> matrix2D;
typedef vector<matrix2D> matrix3D;
```

/!\ Importante poner ```> >``` en la declaración de una matriz para evitar
problemas de ambigüedad con ciertos compiladores.

Como se puede ver en el ejemplo dado, una matriz no tiene que ser solo de dos
dimensiones. Puede ser de cuantas sea necesario, teniendo solo que añadir la 
matriz de dimensión menor a otra más.

También se puede declarar usando arrays pero no se permite su uso en PRO1:

```c++
int A[5][10];
```


---
---

## Structs

Sirve para guardar cierta información de una clase, por ejemplo, para guardar
los datos de una persona se haría de la siguiente manera:

```c++
struct {
    string first_name, last_name;
    int age;
    bool can_vote;
    Email email;
} var_person;
```

El problema con esto es al momento de pasarlo como parámetro en una
acción/función. En ese caso se utiliza un ```typedef``` para permitir una mayor
facilidad de escritura en estos casos:

```c++
typedef struct {
    string first_name, last_name;
    int age;
    bool can_vote;
    Email email;
} Person;

// ---

int get_age(Person data_person) {
    // Código
}
```

Otra opción de declaración de una tupla pero sin usar el typedef es de la
siguiente manera:

```c++
struct Person {
    string first_name, last_name;
    int age;
    bool can_vote;
    Email email;
};

// ---

int get_age(Person data_person) {
    // Código
}
```

Para acceder a los datos guardados en una tupla o escribir en ella, se accede
así:

```c++
struct Person {
    string first_name, last_name;
    int age;
    bool can_vote;
    Email email;
};

// ---

int get_age(Person data_person) {
    return data_person.age;
}
```

---
---

## Sorting

Los algoritmos de sorting son algoritmos dedicados a ordenar elementos de un
vector de más pequeño a más grande.

### Selection sort

```c++
// Get position of the minimum element
int pos_min(const vector<elem>& v, int left, int right) {
    int min = left;

    for (int i = left + 1, i < right; ++i) {
	if (v[i] < v[min])
	    min = i;
    }

    return i;
}

void selection_sort(vector<elem>& v) {
    int last = v.size() - 1;

    for (int i = 0; i < last; ++i) {
	int k = pos_min(v, i, last);
	swap(v[k], v[i]);
    }
}
```

### Insertion sort

```c++
void insertion_sort(vector<elem>& v) {
    int n = v.size();

    for (int i = 1; i < n; ++i) {
	elem x = v[i];
	int j = i;
	while(j > 0 and v[j - i] > x) {
	    v[j] = v[j - 1];
	    --j;
	}
	v[j] = x;
    }
}
```

### Bubble sort

```c++
void swap(int& a, int& b) {
    int aux = a;
    a = b;
    b = aux;
}

void bubble_sort(vector<elem>& v) {
    int n = v.size();

    for (int i = 0; i < n - 1; ++i) {
	for (int j = n - 1; j > i; --j) {
	    if (v[j - 1] > v[j])
		swap(v[j - 1], v[j]);
	}
    }
}
```

### Merge sort



---
---

## Información importante

### Preincremento y postincremento

Hay que utilizar el preincremento.

---

### Variables y bloques

Las variables declaradas dentro de un bloque solo se pueden utilizar dentro de
este. En caso de ser necesaria una variable fuera de este pero recibir el valor
dentro hay que declararla justo antes de entrar al bloque.

---
