//BAI8
#include <iostream>  
using namespace std;  

void convertToBinary(int n) {  
    if (n > 1) convertToBinary(n / 2);  
    cout << n % 2;  
}  

int main() {  
    int n;  
    cout << "Nhap n: ";  
    cin >> n;  
    cout << "So nhi phan: ";  
    convertToBinary(n);  
    cout << endl;  
    return 0;  
}