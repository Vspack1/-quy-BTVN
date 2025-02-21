//BAI 13
#include <iostream>  
using namespace std;  

// Hàm đệ quy để tính giá trị trong tam giác Pascal  
int pascal(int row, int col) {  
    // Trường hợp cơ bản  
    if (col == 0 || col == row) {  
        return 1;  
    }  
    // Gọi đệ quy để tính giá trị  
    return pascal(row - 1, col - 1) + pascal(row - 1, col);  
}  

// Hàm để in tam giác Pascal  
void printPascal(int height) {  
    for (int row = 0; row < height; row++) {  
        // In các khoảng trắng để canh giữa  
        for (int space = 0; space < height - row - 1; space++) {  
            cout << " ";  
        }  
        // In các giá trị trong tam giác Pascal  
        for (int col = 0; col <= row; col++) {  
            cout << pascal(row, col) << " ";  
        }  
        cout << endl; // Xuống dòng sau mỗi hàng  
    }  
}  

int main() {  
    int height = 5; // Chiều cao của tam giác Pascal  
    printPascal(height); // Gọi hàm để in tam giác Pascal  
    return 0;  
}
