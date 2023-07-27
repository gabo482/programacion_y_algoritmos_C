// Función para ordenar un arreglo de enteros usando el método de ordenación tipo Burbuja
void ordenar(int arr[], int n) {
  // Recorrer el arreglo desde el inicio hasta el penúltimo elemento
  for (int i = 0; i < n - 1; i++) {
    // Recorrer el subarreglo desde el inicio hasta el último elemento no ordenado y comparar pares consecutivos
    for (int j = 0; j < n - i - 1; j++) {
      // Si el elemento en j es mayor que el siguiente, intercambiarlos
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
