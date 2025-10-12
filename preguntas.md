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
