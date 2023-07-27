// Función para buscar un elemento en un arreglo ordenado usando el método de búsqueda binaria
int buscar(int arr[], int n, int dato) {
  // Inicializar los límites del subarreglo a buscar
  int izq = 0; // Límite izquierdo
  int der = n - 1; // Límite derecho
  // Repetir mientras el subarreglo no esté vacío
  while (izq <= der) {
    // Calcular el índice del elemento medio del subarreglo
    int medio = (izq + der) / 2;
    // Si el elemento en medio es igual al dato buscado, retornar su posición
    if (arr[medio] == dato) {
      return medio;
    }
    // Si el elemento en medio es menor que el dato buscado, descartar la primera mitad del subarreglo y buscar en la segunda
    if (arr[medio] < dato) {
      izq = medio + 1;
    }
    // Si el elemento en medio es mayor que el dato buscado, descartar la segunda mitad del subarreglo y buscar en la primera
    if (arr[medio] > dato) {
      der = medio - 1;
    }
  }
  // Si no se encontró el dato, retornar -1
  return -1;
}
