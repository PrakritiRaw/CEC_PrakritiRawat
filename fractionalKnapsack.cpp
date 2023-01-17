#include<iostream>
using namespace std;
int main()
{
    int array[2][100], n, w, i, curw, used[100], maxi = -1, totalprofit = 0;
    cout << "total objects: ";
    cin >> n;
    cout << "weight of the knapsack: ";
    cin >> w;
    for (i = 0; i < n; i++)
    {
        cin >> array[0][i] >> array[1][i];
    }
    for (i = 0; i < n; i++)
    {
        used[i] = 0;
    }
    curw = w;
    while (curw >= 0)
    {
        maxi = -1;
        for (i = 0; i < n; i++)
        {
            if ((used[i] == 0) && ((maxi == -1) || (((float) array[1][i]
                    / (float) array[0][i]) > ((float) array[1][maxi]
                    / (float) array[0][maxi]))))
            {
                maxi = i;
            }
        }
        used[maxi] = 1;
        curw -= array[0][maxi];
        totalprofit += array[1][maxi];
        
    }
    
    cout << "\nProfit: " << totalprofit;
    return 0;
}
