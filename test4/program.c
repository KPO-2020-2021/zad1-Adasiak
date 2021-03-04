#include <stdio.h>
#include <math.h>

double Dodaj(double,double); /*byl brak argumentow w nawiasie, nalezalo uzupelnic go 2 argumentami*/


int main( )
{
  double  Skl1 = 2.0,  Skl2 = 2.0;
  double  Wynik = Dodaj(Skl1,Skl2);

  printf("  Wynik dodawania:  %f + %f = %f\n",Skl1,Skl2,Wynik);

  return 0;
}
