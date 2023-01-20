#include <iostream>
using namespace std;

void countSort(int array[], int size) {
  int arr1[10];
  int arr2[10];
  int max = array[0];

  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }
  for (int i = 0; i <= max; ++i) {
    arr2[i] = 0;
  }

  for (int i = 0; i < size; i++) {
    arr2[array[i]]++;
  }

  for (int i = 1; i <= max; i++) {
    arr2[i] += arr2[i - 1];
  }

  for (int i = size - 1; i >= 0; i--) {
    arr1[arr2[array[i]] - 1] = array[i];
    arr2[array[i]]--;
  }

  for (int i = 0; i < size; i++) {
    array[i] = arr1[i];
  }
}
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int main() {
  int n =5;
  int array[n] = {0 , 5 , 1 , 8, 9};
  
  countSort(array, n);
  printArray(array, n);
}
