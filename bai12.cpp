//BAI12
#include <iostream>  
using namespace std;  

int findMax(int arr[], int n) {  
    if (n == 1) return arr[0];  
    return max(arr[n - 1], findMax(arr, n - 1));  
}  

int main() {  
    int arr[] = {1, 3, 5, 7, 9};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    cout << "GTLN: " << findMax(arr, n) << endl;  
    return 0;  
}