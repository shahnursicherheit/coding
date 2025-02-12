#include<bits/stdc++.h>
using namespace std ;
int partition ( vector<int>& arr, int low, int high )
{
    int pivot = arr[high] ;

    int i = low - 1 ;
    for ( int j = low ; j < high ; j++ )
    {
        if ( arr[j] < pivot )
        {
            i++ ;
            swap(arr[j],arr[i]) ;
        }
    }

    swap(arr[i+1],arr[high]) ;
    return i+1 ;
}
void quickSort ( vector<int>& arr, int low, int high )
{
    if ( low < high )
    {
        int pi = partition( arr, low, high ) ;
        quickSort ( arr, low, pi-1 ) ;
        quickSort ( arr, pi+1, high ) ;
    }
}
int main ()
{
    int n, temp ;
    cin >> n ;
    vector<int> arr;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> temp ;
        arr.push_back(temp) ;
    }

    for ( int i = 0 ; i < n ; i++ )
    {
        cout << arr[i] ;
    }
    cout << endl ;
    quickSort(arr, 0, n-1) ;

    for ( int i = 0 ; i < n ; i++ )
    {
        cout << arr[i] << " " ;
    }
}
