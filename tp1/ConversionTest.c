// palindromo_tests.c
#include <stdio.h>
#include <assert.h>
#include "conversion.h"
int main(void) {
 double celsius = 15;
    double fahrenheit = 32;

    double convertedCelsius = GetCelsFromFahr(fahrenheit);
    double convertedFahrenheit = GetFahrFromCels(celsius);

    printf("Conversion de Fahrenheit a Celsius: %.2f -> %.2f\n", fahrenheit, convertedCelsius);
    printf("Conversion de Celsius a Fahrenheit: %.2f -> %.2f\n", celsius, convertedFahrenheit);

    assert(convertedCelsius == celsius);
    assert(convertedFahrenheit == fahrenheit);

    printf("All assertions passed successfully.\n");

 return 0;
}
