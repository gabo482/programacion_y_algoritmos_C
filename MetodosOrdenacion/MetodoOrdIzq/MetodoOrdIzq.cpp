// Función para ordenar un arreglo de enteros usando el método de intercambio directo con desplazamiento hacia la izquierda
void ordenar(int arr[], int n) {
  // Recorrer el arreglo desde el inicio hasta el penúltimo elemento
  for (int i = 0; i < n - 1; i++) {
    // Buscar el mínimo elemento en el subarreglo desde i hasta el final
    int min = i; // Indice del mínimo elemento
    for (int j = i + 1; j < n; j++) {
      // Si el elemento en j es menor que el mínimo actual, actualizar el mínimo
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    // Si el mínimo no es el elemento en i, intercambiarlos
    if (min != i) {
      int temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
    }
    // Desplazar el subarreglo desde i + 1 hasta el final una posición hacia la izquierda
    for (int k = i + 1; k < n - 1; k++) {
      int temp = arr[k];
      arr[k] = arr[k + 1];
      arr[k + 1] = temp;
    }
  }
}
