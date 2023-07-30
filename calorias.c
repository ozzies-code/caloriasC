/*El programa realiza un calculo de calorias*/ 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{  
    int num_de_elementos, cuenta, calorias_por_alimento, calorias_total;  
    printf(" Cuantos alimentos ha comido hoy?\n ");
    scanf("%d", &num_de_elementos);

    calorias_total = 0;
    cuenta = 1;

    printf("Introducir el numero de calorias de cada uno de los " );
    printf("%d %s", num_de_elementos, " Alimentos Tomados:\n");

    while(cuenta++ < num_de_elementos) 
    {
      scanf("%d", &calorias_por_alimento);
      calorias_total+= calorias_por_alimento;      
    }
  printf("Las calorias totales consumidas hoy son = " );
  printf("%d \n", calorias_total);
   system("PAUSE");	
  return 0;
}
