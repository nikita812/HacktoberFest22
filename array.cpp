#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;

void print_array(int n, int arr[]){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
}

int* array_rotation(int arr_size, int arr[], int rotate_by){
    int d = rotate_by;
    int n = arr_size;
    int temp[d];
    for(int i = 0; i<d; i++){
        temp[i] = arr[i];
    }
    for(int i=0; i<n-d; i++){
        arr[i] = arr[i+d];
    }
    for(int i=n-d; i<n; i++){
        arr[i] = temp[i-n+d];
    }
    return arr;
}

int* array_reverse(int start, int end, int arr[]){
    int temp;
    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return arr;
}

bool binarySearch(int n, int arr[], int s){
    int left, right, mid;
    left = 0;
    right = n-1;
    while(left <= right){
        mid = (left + right) / 2;
        if(arr[mid] > s){
            right = mid-1;
        }
        else if(arr[mid] < s){
            left = mid+1;
        }
        else if(arr[mid] == s){
            cout<<"yes";
            return true;
        }
    }
    return false;
}

int spiral_order_print(int m, int n, int *arr){
    int row_start = 0, row_end = n-1, column_start = 0, column_end = n-1;
    while(row_start < row_end && column_start < column_end){
        
    }
}
    

int main()
{
    cout<<"hi"<<endl;aVB I[1]
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    array_rotation(n, arr, 4);
    print_array(n, arr);
 //   cout<<endl;
   // bool p = binarySearch(n, arr, 5);
   // cout<<p;

    return 0;
}
