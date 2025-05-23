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



void mostrar_historial(){
 FILE *archivo = fopen("historial_de_conversiones.txt", "r");
 if (archivo == null){
   printf("no existe el historial de conversiones");
   return;
  }

 char linea[100];
 printf("historial de conversiones");
 while (fgets(linea, sizeof(linea), archivo) != null){
     printf("%s", linea);
  }
 fclose(archivo);
}


void guardar_conversion(float valor_inicial, valor_convertido) {
 FILE *archivo = fopen("historial_de_conversiones.txt", "a");
 if (archivo == null){
   printf("error en el archivo del historial");
   return;
  }
 fprintf(archivo, "valor inicial: %.2f -> valor convertido: %.2f", valor_inicial, valor_convertido);
 fclose(archivo);
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

   switch (opcion) {
    case 1:
       printf("el valor es: %.2f metros son %.2f pies", valor, metros_pies(valor));
       break;

    case 2:
       printf("el valor es: %.2f pies son %.2f metros", valor, pies_metros(valor));
       break;

    case 3:
       printf("el valor es: %.2f kilogramos son %.2f libras", valor, kg_libras(valor));
       break;
    case 4:
       printf("el valor es: %.2f libras son %.2f kilogramos", valor, libras_kg(valor));
       break;
    default:
        printf("error no hay opcion soportada por este numero ingrese uno valido");
    } 
     
   }

  printf("perfecto saliendo del programa tenga un buen dia");
  return 0;
  }
 }
