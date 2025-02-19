//BAI2
#include <iostream>  
using namespace std;  

int factorial(int n) {  
    if (n <= 1) return 1;  
    return n * factorial(n - 1);  
}  

int main() {  
    int n;  
    cout << "Nhap n: ";  
    cin >> n;  
    cout << "Giai thua " << n << " = " << factorial(n) << endl;  
    return 0;  
}