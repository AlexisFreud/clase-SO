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
Aprendí a cambiar la forma en que se interpretan comandos en la consola.
Ahora se que se puede agregar funcionalidad facilmente. 
También aprendí que es fácil agregar o hacer crecer un código si esta bien hecho. Pudimos agregar facilmente funcionalidades unicamente siguiendo el estilo de quienes programaron el SO que utilizamos (xv6).
Aprendí que para programar un buen código, primero hay que hacer el proceso real de programación, que es todo el proceso de análisis y comprensión del problema, la posible implementación, prueba y error y finalmente el código final despues del proceso iterativo anterior.
~~~

## Url del commit
~~~
https://github.com/AlexisFreud/clase-SO/commit/e0727a50f5ecde1148c1b35bb358e7363c2a1804
~~~

## Como se relaciona con los conceptos anteriores
Se relaciona con las llamadas a sistema que vimos en clases anteriores porque lo que estamos haciendo es cambiar la manera en que la computadora interpreta ciertos comandos, existan o no, solo la manera en que los interpreta.
