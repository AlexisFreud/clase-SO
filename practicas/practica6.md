## Objetivo
~~~
Investigar y practicar sobre hilos.
~~~

## Herramientas
~~~
git
gcc
~~~

## Conceptos
~~~
Hilos
  - Proceso ligero
  - Solo tiene un stack y el código. El heap se comparte con el proceso principal. 
    Si el proceso principal termina, entonces los hilos tambien.
~~~
~~~
Lock
  - Mecanismo de sincronización.
  - La diferencia con un semaforo es que el Lock permite uno a uno, 
    y el semáforo pueden ser muchos antes de detenerse.
  - Variable global que soporta dos operaciones:
    - Lock: el primer hilo que hace lock se adueña del recurso. El resto lo espera.
    - Unlock: el hilo dueño del recurso lo libera.
    - Ayuda a resolver el problema de la sección crítica.
~~~
~~~
Semáforos
  - Mecanismo de sincronización.
  - Variable global que tiene un valor inicial positivo o cero.
  - Soporta dos operaciones:
    - wait/decress: Si es mayor a cero, decrementa y continua. Si es igual a cero, se suspende.
    - post/increase: Incrementa el valor del semáforo en uno.
  - Se utiliza para asignar recursos.
 ~~~
 ~~~
Problemas de sincronización.
  - Condición de carrera: cuando el resultado depende del orden de los hilos.
  - Deadlock: cuando dos o más hilos están esperando por un recurso que no se libera.
  - Productor/consumidor: Ocurre cuando los datos se pueden sobreescribir y perder antes de usarse.
  
~~~

## ¿Qué aprendí?
~~~

~~~

## Url del commit
~~~

~~~

## ¿Cómo se relaciona con los conceptos anteriores?
~~~

~~~
