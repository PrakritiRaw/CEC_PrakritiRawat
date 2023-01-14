
#include<iostream>  
using namespace std;

void InsertionSort( int arr[],int n)
{   

    int temp;
    for(int i=1;i<n;i++)
    {

        temp=arr[i];
        int j=i-1;

        
        while(j>-1&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
      
        arr[j+1]=temp;
    }
}


int main()
{
    int  n;
    cout<<"enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"enter elements into the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    InsertionSort(arr,n); 
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
