// Función para ordenar un arreglo de enteros usando el método de ordenación tipo Quick Sort
void ordenar(int arr[], int n) {
  // Llamar a la función auxiliar que realiza el algoritmo recursivo
  quickSort(arr, 0, n - 1);
}

// Función auxiliar que realiza el algoritmo recursivo de Quick Sort
void quickSort(int arr[], int izq, int der) {
  // Si el subarreglo tiene al menos dos elementos, continuar con el algoritmo
  if (izq < der) {
    // Elegir un elemento pivote, por ejemplo el primero del subarreglo
    int pivote = arr[izq];
    // Particionar el subarreglo alrededor del pivote, de forma que los elementos menores o iguales al pivote queden a su izquierda y los mayores a su derecha
    // La función particionar devuelve la posición final del pivote en el subarreglo ordenado
    int pos = particionar(arr, izq, der, pivote);
    // Ordenar recursivamente el subarreglo izquierdo y el subarreglo derecho
    quickSort(arr, izq, pos - 1);
    quickSort(arr, pos + 1, der);
  }
}

// Función que realiza la partición del subarreglo alrededor del pivote
int particionar(int arr[], int izq, int der, int pivote) {
  // Inicializar los índices de recorrido del subarreglo
  int i = izq; // Índice que avanza desde la izquierda hacia la derecha
  int j = der; // Índice que retrocede desde la derecha hacia la izquierda
  // Repetir mientras los índices no se crucen
  while (i < j) {
    // Avanzar i mientras el elemento en i sea menor o igual al pivote
    while (arr[i] <= pivote && i < j) {
      i++;
    }
    // Retroceder j mientras el elemento en j sea mayor al pivote
    while (arr[j] > pivote && i < j) {
      j--;
    }
    // Si los índices no se han cruzado, intercambiar los elementos en i y j
    if (i < j) {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
  // Al final del bucle, i y j son iguales y apuntan al primer elemento mayor que el pivote
  // Intercambiar el elemento en i (o j) con el pivote, que está en la posición izq
  int temp = arr[i];
  arr[i] = arr[izq];
  arr[izq] = temp;
  // Devolver la posición final del pivote
  return i;
}
