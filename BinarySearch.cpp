#include<iostream>
using namespace std;
int binarySearch(int arr[],int l,int r, int x)
{int mid;
    if(r>=l)
    {mid=l+(r-l)/2;
    if(arr[mid]==x) return mid;
    if(arr[mid]>x) return binarySearch(arr,l,mid-1,x);
    
    return binarySearch(arr,mid+1,r,x);
    }
    return -1;
}

int main()
{ int arr[10]={ 2,5,8,19,45,99,612,700,951,1000};
  cout<<binarySearch(arr,0,9,5);
}
