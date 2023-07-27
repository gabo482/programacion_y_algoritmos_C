// Función para ordenar un arreglo de enteros usando el método de intercambio directo con desplazamiento hacia la derecha
void ordenar(int arr[], int n) {
  // Recorrer el arreglo desde el final hasta el segundo elemento
  for (int i = n - 1; i > 0; i--) {
    // Buscar el máximo elemento en el subarreglo desde el inicio hasta i
    int max = i; // Indice del máximo elemento
    for (int j = 0; j < i; j++) {
      // Si el elemento en j es mayor que el máximo actual, actualizar el máximo
      if (arr[j] > arr[max]) {
        max = j;
      }
    }
    // Si el máximo no es el elemento en i, intercambiarlos
    if (max != i) {
      int temp = arr[i];
      arr[i] = arr[max];
      arr[max] = temp;
    }
    // Desplazar el subarreglo desde el inicio hasta i - 1 una posición hacia la derecha
    for (int k = i - 1; k > 0; k--) {
      int temp = arr[k];
      arr[k] = arr[k - 1];
      arr[k - 1] = temp;
    }
  }
}
