//BAI10
#include <iostream>  
using namespace std;  

int gcd(int a, int b) {  
    if (b == 0) return a;  
    return gcd(b, a % b);  
}  

int main() {  
    int a, b;  
    cout << "Nhap a: ";  
    cin >> a;  
    cout << "Nhap b: ";  
    cin >> b;  
    cout << "UCLN(" << a << ", " << b << ") = " << gcd(a, b) << endl;  
    return 0;  
}