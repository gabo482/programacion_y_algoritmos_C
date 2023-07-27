// Función para buscar un elemento en un arreglo usando el método de búsqueda secuencial
int buscar(int arr[], int n, int dato) {
  // Recorrer el arreglo desde el inicio hasta el final
  for (int i = 0; i < n; i++) {
    // Si el elemento en i es igual al dato buscado, retornar su posición
    if (arr[i] == dato) {
      return i;
    }
  }
  // Si no se encontró el dato, retornar -1
  return -1;
}
