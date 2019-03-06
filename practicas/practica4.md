## Objetivo
~~~
Hacer un planificador de procesos basados en prioridades.
El proceso con mayor prioridad se ejecuta primero. Si hay dos o más prioridades iguales, entonces se ejcuta el primero de la lista.
~~~

## Herramientas
~~~
git
make
gcc
~~~

## Conceptos
~~~
1) Proceso: Instancia de un programa. 
            Puede estar en varios estados (practica 3).
2) Planificación de procesos: 
            Es el mecanismo que el SO tiene para asignarle el CPU a un proceso.
3) Estados de un proceso.
4) Cambio de contexto: 
            Ocurre cuando el CPU deja de ejecutar un proceso para ejecutar otro.
            Guardar el PC y la dirección del stack del proceso actual.
            Restaurar el PC y la dirección del nuevo proceso.
~~~

## ¿Qué aprendí?
~~~
En la primera parte aprendí a crear nuevas funciones, ahora más avanzadas, a nuestro sistema operativo. Hoy entendí mejor que un sistema operativo es exactamente lo mismo que un programa. Aprendí bastante sobre la organización de procesos (planificación de procesos) donde existe una "lista" de prioridades que seguir. Modificamos muchas cosas en C, por lo que además aprendimos un poco sobre el lenguaje. Cabe resaltar que utilizamos una versión algo vieja de C, por lo que es un poco más retador e interesante hacer cambios.
~~~

## Url del commit
~~~
link 1: https://github.com/AlexisFreud/clase-SO/commit/4ba394daf57c126abef95b5face7c3a45f9773d1

~~~

## ¿Cómo se relaciona con los conceptos anteriores?
~~~
Llamadas a sistema y procesos.
~~~
