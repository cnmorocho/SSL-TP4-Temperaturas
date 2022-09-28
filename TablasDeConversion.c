#include <stdio.h>
#include "./dependencies/Conversion.h"

int main()
{

  double t_celsius = 0, t_farenheit;
  double t_max = 200;

  // * Tabla de Celsius a Farenheit

  printf("Celsius\tFarenheit\n");
  while (t_celsius <= t_max)
  {
    t_farenheit = farenheit(t_celsius);
    printf("%.2f \t %.2f \n", t_celsius, t_farenheit);
    t_celsius += 1;
  }

  printf("========================");
  printf("\n\n");
  // TODO: Habría que hacer una función generica para no repetir lógica

  // * Tabla de Farenheit a Celsius

  t_farenheit = 32;
  t_max = 392;
  printf("Farenheit\tCelsius\n");
  while (t_farenheit <= t_max)
  {
    t_celsius = celsius(t_farenheit);
    printf("%.2f \t %.2f \n", t_farenheit, t_celsius);
    t_farenheit += 1;
  }

  return 0;
}