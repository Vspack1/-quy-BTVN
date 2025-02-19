//BAI11
#include <iostream>  
using namespace std;  

int pascal(int i, int j) {  
    if (j == 0 || j == i) return 1;  
    return pascal(i - 1, j - 1) + pascal(i - 1, j);  
}  

void printPascalTriangle(int n) {  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j <= i; j++) {  
            cout << pascal(i, j) << " ";  
        }  
        cout << endl;  
    }  
}  