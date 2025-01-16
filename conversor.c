#include <stdio>

float metros_pies (float metros) {
 return metros * 3.280;
}

float pies_metros (float pies) {
  return pies / 3.280;
}

float kg_libras (float kg){
 return kg * 2.204;
}

float libras_kg (float libras){
  return libras / 2.204;
}

int main() {
 int opcion;
 float valor;

 do {
  printf("Bienvenido al conversor de unidades");
  printf("1-convertir de metros a pies");
  printf("2-convertir de pies a metros");
  printf("3-convertir de kilogramos a libras");
  printf("4-convertir de libras a kilogramos");
  printf("0-salir del sistema");
  scanf("%d", &opcion);

  if (opcion != 0){
   printf("ingrese el valor a convertir: ");
   scanf("%f", &valor);
   }
  }
 }
