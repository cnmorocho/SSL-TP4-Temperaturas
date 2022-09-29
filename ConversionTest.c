#include <stdio.h>
#include <assert.h>
#include "./dependencies/Conversion.h"

#include <math.h>

/* --- funcion compare double ---*/
int compare_double(double x, double y) {
   double epsilon = 0.1f;
   if(fabs(x - y) < epsilon)
      return 0; //true
      return 1; //false
  }

// Epsilon es un rango de error
// 44.98 - 44.89 = 0.09   

int main(){
  printf("\n - - Inició de pruebas - - \n");
  assert(compare_double(farenheit(0),32)==0); //0°C es igual a 32°F
  assert(compare_double(celsius(200),93)==0);//200°F es igual a 93°C
  assert(compare_double(celsius(43),6.11)==0);//43°F es igual a 6.11°C
  assert(compare_double(celsius(44), 6.66)==0);//44°F es igual a 6.66°C
  assert(compare_double(celsius(392),200)==0);//392°F es igual a 200°C
  
  assert(compare_double(farenheit(93.33),200)==0);//93°C es igual a 200°F
  assert(compare_double(farenheit(6),42.8)==0);//6°C es igual a 42.8°F
  assert(compare_double(farenheit(6.11),43)==0);//6.11°C es igual a 43°F
  assert(compare_double(farenheit(6.66),44)==0);//6.66°C es igual a 44°F
  assert(compare_double(farenheit(200),392)==0);//200°C es igual a 392°F
  
  printf("--Paso las pruebas --");
   
  
  return 0;
}