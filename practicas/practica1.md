## Objetivo
Crear dos llamadas a sistema: una para apagar y otra para reiniciar.
Además, crear sus respectivos programas.

## Herramientas
git
make
gcc

## Conceptos
1)  Llamadas a sistema
*La forma en que el kernel (SO) da acceso al HW.
* Se implementa mediante interrupciones de software (trap), ie, la aplicación interrumpe que el kernel se ejecute

2) Modo Kernel
* Es bit/registro que activa el CPU para acceder al HW.
* Solo hay un programa que se ejecuta con este bit, es el kernel
