#include<iostream>
using namespace std;

int main() {
    int size = 4;
    int matrix[4][4] = {0};

    int top = 0, bottom = size - 1, left = 0, right = size - 1;
    int value = 1;

    while (value <= size * size) {
        for (int col = left; col <= right; col++) {
            matrix[top][col] = value;
            value++;
        }
        top++;

        for (int row = top; row <= bottom; row++) {
            matrix[row][right] = value;
            value++;
        }
        right--;

        for (int col = right; col >= left; col--) {
            matrix[bottom][col] = value;
            value++;
        }
        bottom--;

        for (int row = bottom; row >= top; row--) {
            matrix[row][left] = value;
            value++;
        }
        left++;
    }

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << matrix[row][col] << "\t";
        }
        cout << endl;
    }

    return 0;
}
