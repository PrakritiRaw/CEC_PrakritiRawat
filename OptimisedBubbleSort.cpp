#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n)
{for(int i=0;i<n-1;i++)
    {   bool flag=false;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
              {
                flag=true;
                swap(arr[j],arr[j+1]);
              }
        }
        if(!flag)
        {
            return;
        }
    }
}
int main()
{  int arr[5]={4,2,6,1,7};
   BubbleSort(arr,5);
   for(int i=0;i<5;i++) cout<<arr[i]<<endl;
}
