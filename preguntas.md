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

- 

- 

## 5.4. Criterio de Evaluación 1.e: Clasificación de Lenguajes de Programación
**Preguntas:**

- Clasifica los tres lenguajes utilizados (interpretado, compilado y en máquina virtual) según su:

    - Modo de ejecución (interpretado vs compilado vs máquina virtual).
    - Nivel de abstracción (alto nivel vs bajo nivel).
    - Paradigma de programación (imperativo, orientado a objetos, funcional,...).

- Explica qué características de estos lenguajes influyeron en su clasificación. Es decir, ahonde en las razones por las que cada lenguaje pertenece a una categoría específica.

**Respuestas:**

- 

- 

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
- He hecho uso de Visual Studio Code
- Para compilar el codigo he hecho uso de gcc en la terminal, y para el interpetre he hecho uso de las extensiones de Python par VSCode para que este pueda ejecutar el codigo
- El depurador de VSCode se puede usar para ver que valores toman las variables y usar puntos de ruptura en partes del codigo para que cuando llegue a ese parte ir poco a poco viendo los valores.
- Usando git he podido guardar versiones del codigo haciendo uso de repositorios donde guardar el codigo y commits para subir los cambios