#include <iostream>  
  
using namespace std;  
  
int getMax(int a[], int n) {  
   int max = a[0];  
   for(int i = 1; i<n; i++) {  
      if(a[i] > max)  
         max = a[i];  
   }  
   return max; 
}  
  
void countSort(int a[], int n) 
{  
   int output[n+1];  
   int max = getMax(a, n);  
   int count[max+1]; 
  for (int i = 0; i <= max; ++i)   
  {  
    count[i] = 0; 
  }  
    
  for (int i = 0; i < n; i++) 
  {  
    count[a[i]]++;  
  }  
  
   for(int i = 1; i<=max; i++)   
      count[i] += count[i-1];  
  
  
  for (int i = n - 1; i >= 0; i--) {  
    output[count[a[i]] - 1] = a[i];  
    count[a[i]]--; 
}  
  
   for(int i = 0; i<n; i++) {  
      a[i] = output[i]; 
   }  
}  
  
void display(int a[], int n)
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout<<a[i]<<" ";  
}  
  
int main() {  
    int a[] = { 31, 11, 42, 7, 30, 11 };  
    int n = sizeof(a)/sizeof(a[0]);
    countSort(a, n);  
    cout<<"\nSorted array\n:";    
    display(a, n);  
    return 0;  
}  
