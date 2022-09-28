#include <stdio.h>

int main()
{
  printf("Celsius\tFarenheit\n");
  double tcelsius = 0, tfarenheit;
  const double tmax = 200;

  while (tcelsius < tmax)
  {
    tfarenheit = (tcelsius * 9 / 5) + 32;
    printf("%.2f \t %.2f \n", tcelsius, tfarenheit);
    tcelsius += 1;
  }

  return 0;
}