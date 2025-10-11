#include <stdio.h>
#include <time.h>

int main() {
    char nombre[50];
    int dia_nacimiento, mes_nacimiento, anio_nacimiento;
    
    printf("Introduce un nombre: ");
    scanf("%s", nombre);
    
    printf("Introduce tu día de nacimiento: ");
    scanf("%d", &dia_nacimiento);
    
    printf("Introduce tu mes de nacimiento: ");
    scanf("%d", &mes_nacimiento);
    
    printf("Introduzca su año de nacimiento: ");
    scanf("%d", &anio_nacimiento);
    
    // Obtener fecha actual
    time_t t = time(NULL);
    struct tm *fecha_actual = localtime(&t);
    
    int anio_actual = fecha_actual->tm_year + 1900;
    int mes_actual = fecha_actual->tm_mon + 1;
    int dia_actual = fecha_actual->tm_mday;
    
    // Calcular edad
    int edad = anio_actual - anio_nacimiento;
    
    if (mes_actual < mes_nacimiento || (mes_actual == mes_nacimiento && dia_actual < dia_nacimiento)) {
        edad--;
    }
    
    printf("Hola %s, tienes %d años. Este programa está hecho en el lenguaje de programación: [C]\n", nombre, edad);
    
    return 0;
}
