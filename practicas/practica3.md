## Objetivo
~~~
Modificar el programa sh.c para ejecutar el comando anterior.
~~~

## Herramientas
~~~
git
make
gcc
~~~

## Conceptos
~~~
1) Como es que se crean nuevos procesos.
    * Un programa padre (sh.c) ejecuta la llamada a sistema fork
    * La llamada a sistema fork clona al proceso padre
    * El proceso hijo manda a llamar a exec para ejecutar otro código.
~~~

## ¿Qué aprendí?
~~~
Al final de la práctica habiamos logrado crear las llamadas al sistema, pero fue directamente desde la parte central de la computadora.
Logramos, despues de dos clases, crear la función para apagar y reiniciar la computadora. 
También aprendí que no se puede acceder directamente al hardware de la computadora, si no que se debe acceder a traves del kernel.
Aprendi todo lo que se necesita para poder crear una función en sistema, y como plus una manera de apagar la computadora. 
~~~

## Url del commit
~~~

~~~

## Como se relaciona con los conceptos anteriores
