//BAI6
#include <iostream>  
using namespace std;  

int reverse(int n) {  
    static int reversedNum = 0;  
    if (n > 0) {  
        reversedNum = reversedNum * 10 + n % 10;  
        reverse(n / 10);  
    }  
    return reversedNum;  
}  

int main() {  
    int n;  
    cout << "Nhap n: ";  
    cin >> n;  
    cout << "So dao nguoc: " << reverse(n) << endl;  
    return 0;  
}