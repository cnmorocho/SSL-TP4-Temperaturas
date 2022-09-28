#include <stdio.h>
#include "./dependencies/Conversion.h"

void tablaDeConversion(double t_min, double t_max, char init_scale) {
  double current_t = t_min;
  double t_converted;
  /* 
    Si es 'c': Celsius -> Farenheit
    Si es 'f': Farenheit -> Celsius 
  */
  if (init_scale == 'c') {
    printf("Celsius || Farenheit\n");
    for(current_t; current_t <= t_max; current_t++){
      t_converted = farenheit(current_t);
      printf("%.1f°C || %.1f°F \n", current_t, t_converted);
    }
  } else if (init_scale == 'f') {
    printf("Farenheit || Celsius\n");
    for(current_t; current_t <= t_max; current_t++){
      t_converted = celsius(current_t);
      printf("%.1f°F || %.1f°C \n", current_t, t_converted);
    }
  }
}

int main()
{

  tablaDeConversion(0, 200, 'c');

  printf("\n============================\n");

  tablaDeConversion(0, 200, 'f');

  return 0;
}