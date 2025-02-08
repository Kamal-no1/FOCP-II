#include<iostream>
using namespace std;

int main() {
    int size = 3;
    int grid[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int row = 0; row < size; row++) {
        for (int col = row; col < size; col++) {
            int temp = grid[row][col];
            grid[row][col] = grid[col][row];
            grid[col][row] = temp;
        }
    }

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size / 2; col++) {
            int temp = grid[row][col];
            grid[row][col] = grid[row][size - col - 1];
        }
   cout << "90-degree rotated matrix is:" << endl;
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << grid[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
}
