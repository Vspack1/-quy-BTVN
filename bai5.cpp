//BAI5
#include <iostream>  
using namespace std;  

int countDigits(int n) {  
    if (n == 0) return 0;  
    return 1 + countDigits(n / 10);  
}  

int main() {  
    int n;  
    cout << "Nhap n: ";  
    cin >> n;  
    cout << "So chu so: " << countDigits(n) << endl;  
    return 0;  
}