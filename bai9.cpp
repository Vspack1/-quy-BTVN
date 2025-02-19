//BAI9
#include <iostream>  
using namespace std;  

int binaryToDecimal(int n) {  
    if (n == 0) return 0;  
    return (n % 10) + 2 * binaryToDecimal(n / 10);  
}  

int main() {  
    int n;  
    cout << "Nhap so nhi phan: ";  
    cin >> n;  
    cout << "So thap phan: " << binaryToDecimal(n) << endl;  
    return 0;  
}