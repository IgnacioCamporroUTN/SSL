#include "TablasDeConversion.h"
#include "Conversion.h"
#include <stdio.h>

void crearTablaConversionFahrFromCels(float inicio, float fin, int incremento) {
    double celsius, fahrenheit;

    printf("Tabla de conversion de Celsius a Fahrenheit:\n");
    printf("Celsius\t\tFahrenheit\n");
    printf("=======\t\t==========\n");

    for (celsius = inicio; celsius <= fin; celsius += incremento) {
        fahrenheit = GetFahrFromCels(celsius);
        printf("%.2f\t\t%.2f\n", celsius, fahrenheit);
    }
    getchar();
}
void crearTablaConversionCelsFromFahr(float inicio, float fin, int incremento) {
    double celsius, fahrenheit;

    printf("Tabla de conversion de Fahrenheit a Celsius:\n");
    printf("Fahrenheit\t\tCelsius\n");
    printf("=======\t\t==========\n");

    for (fahrenheit = inicio; fahrenheit <= fin; fahrenheit += incremento) {
       celsius  = GetCelsFromFahr(fahrenheit);
        printf("%.2f\t\t%.2f\n", fahrenheit, celsius);
    }
        getchar();
  
}
int main(void) {
    float iniC; 
    float finC; 
    int incrementoC; 
    float iniF; 
    float finF; 
    int incrementoF; 
   printf("-----Tabla de conversion de Celsius a Fahrenheit-----\n");
    printf("=======\t\t==========\n");
    printf("Introduzca valor inicial en Celsius: \n");
    scanf("%f",&iniC),
    printf("Introduzca valor final en Celcius: \n");
    scanf("%f", &finC);
    printf("Introduzca incremento: \n");
    scanf("%d", &incrementoC);
    crearTablaConversionFahrFromCels(iniC,finC,incrementoC);
  
    printf("-----Tabla de conversion de Fahrenheit a Celsius-----\n");
    printf("=======\t\t==========\n");
    printf("Introduzca valor inicial en Fahrenheit: \n");
    scanf("%f",&iniF),
    printf("Introduzca valor final en Fahrenheit: \n");
    scanf("%f", &finF);
    printf("Introduzca incremento: \n");
    scanf("%d", &incrementoF);
    crearTablaConversionCelsFromFahr(iniF,finF,incrementoF);
    getchar();
     return 0;
}

