// Función para ordenar un arreglo de enteros usando el método de ordenación por inserción binaria
void ordenar(int arr[], int n) {
  // Recorrer el arreglo desde el segundo hasta el último elemento
  for (int i = 1; i < n; i++) {
    // Guardar el elemento actual en una variable temporal
    int temp = arr[i];
    // Buscar la posición correcta del elemento usando una búsqueda binaria entre los elementos ordenados
    int pos = buscarPosicion(arr, i, temp);
    // Desplazar los elementos mayores que el temporal una posición a la derecha
    for (int j = i; j > pos; j--) {
      arr[j] = arr[j - 1];
    }
    // Insertar el elemento temporal en la posición correcta
    arr[pos] = temp;
  }
}

// Función auxiliar que realiza la búsqueda binaria entre los elementos ordenados
int buscarPosicion(int arr[], int n, int dato) {
  // Inicializar los límites de la búsqueda
  int izq = 0; // Límite izquierdo
  int der = n - 1; // Límite derecho
  // Repetir mientras el intervalo de búsqueda no esté vacío
  while (izq <= der) {
    // Calcular el índice del elemento medio del intervalo
    int medio = (izq + der) / 2;
    // Si el elemento en medio es igual al dato buscado, retornar su posición
    if (arr[medio] == dato) {
      return medio;
    }
    // Si el elemento en medio es menor que el dato buscado, descartar la primera mitad del intervalo y buscar en la segunda
    if (arr[medio] < dato) {
      izq = medio + 1;
    }
    // Si el elemento en medio es mayor que el dato buscado, descartar la segunda mitad del intervalo y buscar en la primera
    if (arr[medio] > dato) {
      der = medio - 1;
    }
  }
  // Si no se encontró el dato, retornar la posición donde debería estar insertado
  return izq;
}
