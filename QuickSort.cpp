
#include<iostream>
using namespace std;
int Partition(int A[],int l,int h)
{   int i=l,j=h;
    int pivot;
    pivot=A[l];
    do{
        do{
            i++;
        }while(A[i]<=pivot);
        do{
            j--;
        }while(A[j]>pivot);

        if(i<j)
        {
            swap(A[i],A[j]);
        }
    }while(i<j);
    swap(A[j],pivot);
    return j;
}


void Quicksort(int A[],int l,int h)
{
    if(l<h)
    {
        int j=Partition(A,l,h);
        Quicksort(A,l,j-1);
        Quicksort(A,j+1,h);
    }
}


int main()
{
    int n;
    cout<<"enter no of elements in a array:";
    cin>>n;
    cout<<"\nenter the array to be sorted:";
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    Quicksort(A,0,n-1);
    cout<<"\nthe sorted array is:";
    for(int i=0;i<n;i++)
    {
        cout<<A[i];
    }
}
