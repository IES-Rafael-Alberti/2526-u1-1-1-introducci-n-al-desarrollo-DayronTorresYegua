# Preguntas a responder


## 5.1. Criterio de Evaluación 1.a: Relación entre Software y Hardware¶
**Pregunta:**

- Describe cómo el software que has creado se ha relacionado con los componentes físicos del dispositivo (memoria RAM, procesador, periféricos, etc.) durante la ejecución de los tres lenguajes (interpretado, compilado y en máquina virtual).

-   Puntos a incluir:
    - Cómo se almacenaron los datos en memoria.
    - Qué hizo el procesador con el código.
    - Si se interactuó con periféricos, como la pantalla para mostrar la salida.

**Respuesta:**

- Python (lenguaje interpetrado):

    - El interpetre carga el código en la RAM y lo ejecuta linea por linea, el procesador ejecuta las instrucciones del interprete traduciendo el código en tiempo real.

- C (lennguaje compilado):

    - Antes de ejecutarse el codigo se traduce a lenguaje maquina, el programa cargado en la RAM es ejecutado directamente por el procesador sin intermediarios con control manual de la memoria.

- Java (JVM)

    - Se genera un codigo intermedio llamado bytecode el cual se carga en la JVM la cuál gestiona la memoria automaticamente y traduce el bytecode a instrucciones nativas que ejecuta el procesador.


## 5.2. Criterio de Evaluación 1.c: Diferenciación entre Código Fuente, Código Objeto y Ejecutable

**Preguntas:**

- Explica cómo el código fuente que escribiste se transformó en código objeto y ejecutable en el caso de los lenguajes compilados. ¿Generaste archivos intermedios (código objeto)? ¿Qué nombres tomaron estos archivos?

- Para los lenguajes interpretados, describe cómo el código fuente se ejecutó directamente, sin generar archivos de código objeto o ejecutable.

- Para el lenguaje que genera código intermedio (Java, C#), explica cómo el código fuente se transformó en código intermedio (bytecode) y cómo este fue ejecutado por la máquina virtual.

**Respuestas:**

- Primero se escribe escribe el codigo fuente, despues mediante un compilador el codigo fuente es traducido a codigo objeto, luego de esto enlazamos los archivos de codigo objeto para generar un ejecutable, y una vez hecho esto ya podremos ejecutar el programa.

- En los lenguaje interpretados en vez de generar archivos de codigo objeto o ejecutable lo que se hace es que el codigo se carga en la RAM y este luego es procesado linea por linea

- Primero escribimos el codigo fuente de nuestro programa, luego este codigo se compila pero en vez de generar un codigo maquina especifico para un plataforma lo que hace es que genera un codigo intermedio llamado bytecode, para ejecutar en nuestro ordenador lo que pasa es que la JVM toma este bytecode y lo interpretea traduciendolo a lenguaje maquina para que el procesador lo pueda entender

## 5.3. Criterio de Evaluación 1.d: Generación de Código Intermedio para Máquinas Virtuales
**Preguntas:**

- Describe el proceso de generación de código intermedio (bytecode) en el lenguaje que utilizaste que emplea una máquina virtual (por ejemplo, Java o C#).

- Explica qué rol juega la máquina virtual en la ejecución del código y cómo difiere de la ejecución directa en un sistema operativo como ocurre con los lenguajes compilados e interpretados.

**Respuestas:**

- Primero escribimos el codigo fuente, luego debemos de compilarlo para generar el bytecode usando javac "nombredelarchivo.java", esto almacenara nuestro bytecode en una archivo .class. Una vez hayamos hecho todo esto ya podremos ejecutar nustro archivo haciendo java "nombredelarchivo"

- El rol de la JVM es traducir el bytecode en lenguaje maquina especifico dependiendo de la plataforma en la que estemos y mostrar el resultado en pantalla.

## 5.4. Criterio de Evaluación 1.e: Clasificación de Lenguajes de Programación
**Preguntas:**

- Clasifica los tres lenguajes utilizados (interpretado, compilado y en máquina virtual) según su:

    - Modo de ejecución (interpretado vs compilado vs máquina virtual).
    - Nivel de abstracción (alto nivel vs bajo nivel).
    - Paradigma de programación (imperativo, orientado a objetos, funcional,...).

- Explica qué características de estos lenguajes influyeron en su clasificación. Es decir, ahonde en las razones por las que cada lenguaje pertenece a una categoría específica.

**Respuestas:**

- Modo de ejecucion:
    - Python es interpretado
    - Java es de maquina virtual
    - C es compilado

- Nivel de abstracción:
    - Python y Java son lenguajes de alto nivel 
    - C es un lenguaje de bajo nivel 
    
- Paradigma de programación:
    - Python es imperativo
    - Java es orientado a objetos
    - C es funcional

- Python es un lenguaje interpretado debido a que es leido linea por linea por un interprete y este lo ejecuta al instante sin necesidad de compilar codigo, por su nivel de abstraccion es un lenguaje de alto nivel ya que es más facil de leer por las personas y es imperativo porque en este lenguaje el programador da instrucciones al codigo sobre como el programa se debe ejecutar

- Java genera bytecode para que despues en la JVM este se ejecute en diferentes plataformas, al igual que python es un lenguaje de alto nivel, es un paradigma orientado a objetos que se refiere a que hace uso de instancias de clases donde los objetos encapsulan datos y comportamientos

- En C el codigo fuente que es escrito por el programador es compilado a codigo maquina de una plataforma antes de ejecutarlo cuando se compila se genera un ejecutable con el que podemos ejecutar el programa, es un lenguaje de bajo nivel ya que es un lenguaje más cercacno al lenguaje máquina y es funcional ya que su enfoque en vez de dar instrucciones sobre como cambiar al estado lo que hace es que la funciones toman entradas y dan salidas sin cambiar el estado original.

## 5.5. Criterio de Evaluación 1.f: Evaluación de Herramientas Utilizadas en el Desarrollo

**Preguntas:**

- Para cada uno de los tres lenguajes (interpretado, compilado y en máquina virtual), describe las herramientas que utilizaste en el proceso de desarrollo:
    - Sistema operativo (¿en qué sistema ejecutaste el programa?).
    - Editor de texto o IDE (¿dónde escribiste el código?).
    - Compilador o intérprete (¿cómo se transformó o ejecutó el código?).
    - Depurador (si lo usaste, ¿cómo lo empleaste para encontrar errores?).
    - Sistema de gestión de versiones (si lo usaste, ¿cómo guardaste las versiones del código?).
    - Otras herramientas Añade alguna herramienta más a la lista. ¿Cómo te ayudó en el desarrollo?

**Respuestas:**

- El sistema operativo usado ha sido Ubuntu
- He hecho uso de Visual Studio Code y de  IntelijIdea Ultimate
- Para compilar el codigo he hecho uso de gcc en la terminal, y para el interpetre he hecho uso de las extensiones de Python par VSCode para que este pueda ejecutar el codigo
- El depurador de VSCode se puede usar para ver que valores toman las variables y usar puntos de ruptura en partes del codigo para que cuando llegue a ese parte ir poco a poco viendo los valores.
- Usando git he podido guardar versiones del codigo haciendo uso de repositorios donde guardar el codigo y commits para subir los cambios