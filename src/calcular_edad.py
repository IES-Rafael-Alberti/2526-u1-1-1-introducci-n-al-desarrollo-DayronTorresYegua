""" 
Programa que recibe un nombre, y fecha de nacimiento y te saluda usando tu nombre y te dice cuantos años tienes
"""

from datetime import datetime

def main():
    nombre = input("Introduce un nombre: ")
    
    dia_nacimiento = int(input("Introduce tu día de nacimiento: "))
    mes_nacimiento = int(input("Introduce tu mes de nacimiento: "))
    anio_nacimiento = int(input("Introduzca su año de nacimiento: "))
    
    fecha_nacimiento = datetime(anio_nacimiento, mes_nacimiento, dia_nacimiento)
    hoy = datetime.now()
    
    edad = hoy.year - fecha_nacimiento.year
    
    if hoy.month < fecha_nacimiento.month or (hoy.month == fecha_nacimiento.month and hoy.day < fecha_nacimiento.day):
        edad -= 1
    
    print(f"Hola {nombre}, tienes {edad} años. Este programa está hecho en el lenguaje de programación: [python]")

if __name__ == '__main__':
    main()