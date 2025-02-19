//BAI7
#include <iostream>  
using namespace std;  

void sumEvenOdd(int n, int &evenSum, int &oddSum) {  
    if (n == 0) return;  
    if (n % 2 == 0) evenSum += n;  
    else oddSum += n;  
    sumEvenOdd(n - 1, evenSum, oddSum);  
}  

int main() {  
    int n, evenSum = 0, oddSum = 0;  
    cout << "Nhap n: ";  
    cin >> n;  
    sumEvenOdd(n, evenSum, oddSum);  
    cout << "Tong so chan: " << evenSum << "\nTong so le: " << oddSum << endl;  
    return 0;  
}