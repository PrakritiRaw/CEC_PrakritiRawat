#include<iostream>
using namespace std;

void SelectionSort(int array[], int size) {
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;   
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;
         swap(array[i], array[imin]);
   }
}
int main() {
   int arr[5]={4,9,12,1,66 };        
   SelectionSort(arr, 5);
  for(int i = 0; i<5; i++)
      cout << arr[i] << endl;
}
