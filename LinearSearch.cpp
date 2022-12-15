#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    if(arr[i]==x) return i;
    
    return -1;
}

int main()
{ int arr[10]={ 2,5,8,19,45,99,612,700,951,1000};
  cout<<linearSearch(arr,sizeof(arr)/sizeof(arr[0]),951);
}
