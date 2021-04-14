------------------------------
Librerias Necesarias Para Que Corra La Libreria: 
* "string"
* "iostream"
* "std"
------------------------------

Para que corra la libreria en el programa se usa:
------------------------------
* "block_string.h"
------------------------------

# FUNCIONES

```validar(int dato, string description, string error)  
Si la validacion es erronea, devuelve un 0
(Necesita Instruccion Do While)

_validar(int dato, string description , string error) 
Si la validacion es erronea, devuelve un 0
(No Necesita Instruccion Do While )
```


# EJEMPLO FUNCTION VALIDAR
```cpp
int numero1;
int numero2;

do{
numero1 = validar(numero1, "Ingresa El Numero 1, "Error en el numero. No Podes Ingresar Caracteres");
}while(numero1 == 0);
// SALIDA


do{
numero2 = validar(numero2, "Ingresa El Numero 2, "Error en el numero. No Podes Ingresar Caracteres");
}while(numero1 == 0);
// SALIDA
```

# EJEMPLO FUNCTION _VALIDAR
```cpp
numero1 = _validar(numero1, "Ingresa El Numero 1", "Error En El Numero. No Podes Ingresar Caracteres"); 
Numero2 = _validar(numero2, "Ingresa El Numero 2", "Error En El Numero. No podes ingresar caracteres");
```
# AUTORES

```cpp
//Authors: Margarita (https://github.com/ElMargaritox), Ojeelafriend(https://github.com/ojeelafriend) (library based on @esutoraiki)
//font: https://www.cristalab.com/tutoriales/validacion-de-tipos-de-datos-en-c--c92149l/
```
