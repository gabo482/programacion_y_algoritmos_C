// Función para ordenar un arreglo de enteros usando el método de ordenación tipo Shaker
void ordenar(int arr[], int n) {
  // Inicializar los límites del subarreglo a ordenar
  int izq = 0; // Límite izquierdo
  int der = n - 1; // Límite derecho
  bool cambio = true; // Bandera para indicar si hubo algún intercambio
  // Repetir mientras haya algún intercambio y el subarreglo no esté vacío
  while (cambio && izq < der) {
    cambio = false; // Suponer que no hay intercambios
    // Recorrer el subarreglo desde izq hasta der - 1 y comparar pares consecutivos
    for (int i = izq; i < der; i++) {
      // Si el elemento en i es mayor que el siguiente, intercambiarlos y actualizar la bandera
      if (arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        cambio = true;
      }
    }
    // Si no hubo ningún intercambio, el subarreglo ya está ordenado y se termina el algoritmo
    if (!cambio) {
      break;
    }
    // Reducir el límite derecho en uno, ya que el último elemento ya está en su posición correcta
    der--;
    // Recorrer el subarreglo desde der hasta izq + 1 y comparar pares consecutivos en sentido inverso
    for (int i = der; i > izq; i--) {
      // Si el elemento en i es menor que el anterior, intercambiarlos y actualizar la bandera
      if (arr[i] < arr[i - 1]) {
        int temp = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = temp;
        cambio = true;
      }
    }
    // Aumentar el límite izquierdo en uno, ya que el primer elemento ya está en su posición correcta
    izq++;
  }
}
