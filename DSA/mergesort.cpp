#include<bits/stdc++.h>
using namespace std;
void merge( vector<int>& arr, int left, int mid, int right ) // 0-0-1 | 0-1-2 | 3-3-4 | 0-2-4
{
    int n1 = mid - left + 1 ; // 1 | 2 | 1 | 3
    int n2 = right - mid ; // 1 | 1 | 1 | 2
    vector<int> L(n1), R(n2) ;

    for ( int i = 0 ; i < n1 ; i++ )
    {
        L[i] = arr[left+i] ; //
    }
    for ( int i = 0 ; i < n2 ; i++ )
    {
        R[i] = arr[mid+1+i] ;
    }

    int i = 0, j = 0 ;
    int k = left ;

    while ( i < n1 && j < n2 )
    {
        if ( L[i] <= R[j] )
        {
            arr[k] = L[i] ;
            i++ ;
        }
        else
        {
            arr[k] = R[j] ;
            j++ ;
        }
        k++ ;
    }

    while ( i < n1 )
    {
        arr[k] = L[i] ;
        i++ ;
        k++ ;
    }
    while ( j < n2 )
    {

        arr[k] = R[j] ;
        j++ ;
        k++ ;
    }
}
void mergesort ( vector<int>& arr, int left, int right )
{
    if ( left >= right )
    {
        return ;
    }
    int mid = left + ( right - left ) / 2 ;
    mergesort( arr, left, mid ) ; // 0-4 0-2 , 0-1 , 0-0| 3-3 |
    mergesort( arr, mid+1, right ) ; // 1-1 | 2-2 | 3-4 ,4-4 |
    merge( arr, left, mid, right ) ; // 0-0-1 | 0-1-2 | 3-3-4 | 0-2-4

}

void view( vector<int>& arr )
{
    for ( int i = 0 ; i < arr.size() ; i++ )
    {
        cout << arr[i] << endl ;
    }
    cout << endl ;
}
int main()
{
    int n, value ;
    cin >> n ; // 5
    vector<int> arr;
    for ( int i = 0 ; i < n ; i++ )
    {
          cin >> value ;
          arr.push_back(value) ;
    }

    view(arr) ; // 5 4 3 2 1
    mergesort( arr, 0, n-1 ) ;
    view( arr ) ;
}
