## Objetivo
~~~
Modificar al programa init para que muestre un programa de bienvenida.
~~~

## Herramientas
~~~
git
make
gcc
~~~

## Conceptos
~~~
1) Proceso:
  - Instancia de un programa.
  - Tiene tres partes:
      + Stack: variables y llamadas a funciones.
      + Heap: Memoria dinámica (malloc o new).
      + Código
  - Se crea mediante dos llamadas a sistema:
      + fork (clona)
      + exec (cambia el código)
  - Tiene un estado:
      + Corriendo
      + Durmiento
      + Espera
      + Completado
      + Zombie
      
2) Programa init
  - Es el programa encargado de inicializar el sistema operativo y dejarlo listo para usarse.
  - Es el único proceso que crea el sistema operativo.
~~~

## ¿Qué aprendí?
~~~
Aprendí bastante sobre los tipos de estados que tienen los procesos. Aprendimos en general todo
lo que es un proceso, que es una instancia de un programa, y que el sistema operativo es el unico
programa que no es un proceso, que además no se sabe que existe.

Aprendimos sobre el proceso init, que es el que crea el Sistema Operativo. 

Aprendí a hacer cambios en el init de un Sistema Operativo. Lo cambié para hacer
que el arranque muestre mensajes diferentes.
~~~

## Url del commit
~~~
https://github.com/AlexisFreud/clase-SO/commit/e81e5c21cadde4e2686220cd34a1b4789e552e6c
~~~
