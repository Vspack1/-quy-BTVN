//BAI1
#include <iostream>  
using namespace std;  

// Hàm tính S1 = 1 + 2 + ... + n  
int S1(int n) {  
    if (n == 0) return 0;  
    return n + S1(n - 1);  
}  

// Hàm tính S2 = 1^2 + 2^2 + ... + n^2  
int S2(int n) {  
    if (n == 0) return 0;  
    return n * n + S2(n - 1);  
}  

// Hàm tính S3 = 1 + 1/3 + 1/5 + ... + 1/n (n là số lẻ)  
double S3(int n) {  
    if (n == 0) return 0;  
    if (n % 2 == 0) return S3(n - 1);  
    return 1.0 / n + S3(n - 1);  
}  

// Hàm tính S4 = 1 + 2 + 3 + ... + n!  
int factorial(int n) {  
    if (n <= 1) return 1;  
    return n * factorial(n - 1);  
}  

int S4(int n) {  
    if (n == 0) return 0;  
    return factorial(n) + S4(n - 1);  
}  

int main() {  
    int n;  
    cout << "Nhap n: ";  
    cin >> n;  
    
    cout << "S1: " << S1(n) << endl;  
    cout << "S2: " << S2(n) << endl;  
    cout << "S3: " << S3(n) << endl;  
    cout << "S4: " << S4(n) << endl;  

    return 0;  
}