import java.time.LocalDate;
import java.time.Period;
import java.util.Scanner;


public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Introduce un nombre: ");
    String nombre = scanner.nextLine();

    System.out.print("Introduce tu día de nacimiento: ");
    int diaNacimiento = scanner.nextInt();

    System.out.print("Introduce tu mes de nacimiento: ");
    int mesNacimiento = scanner.nextInt();

    System.out.print("Introduzca su año de nacimiento: ");
    int anioNacimiento = scanner.nextInt();

    LocalDate fechaNacimiento = LocalDate.of(anioNacimiento, mesNacimiento, diaNacimiento);
    LocalDate hoy = LocalDate.now();

    Period periodo = Period.between(fechaNacimiento, hoy);
    int edad = periodo.getYears();

    System.out.println("Hola " + nombre + ", tienes " + edad + " años. Este programa está hecho en el lenguaje de programación: [Java]");

    scanner.close();
}

