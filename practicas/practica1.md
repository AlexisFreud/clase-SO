## Objetivo
~~~
Crear dos llamadas a sistema: una para apagar y otra para reiniciar.
Además, crear sus respectivos programas.
~~~

## Herramientas
~~~
git
make
gcc
~~~

## Conceptos
~~~
1)  Llamadas a sistema
* La forma en que el kernel (SO) da acceso al HW.
* Se implementa mediante interrupciones de software (trap), ie, la aplicación interrumpe que el kernel se ejecute

2) Modo Kernel
* Es bit/registro que activa el CPU para acceder al HW.
* Solo hay un programa que se ejecuta con este bit, es el kernel

3) Interrupciones
* La forma en que el HW interactua con el CPU
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
https://github.com/AlexisFreud/clase-SO/commit/1adafa9e92010cf2ffbedece302a083897217a25
~~~
