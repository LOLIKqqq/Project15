#include <iostream>
#include <climits>

using namespace std;

const int ROWS = 3;
const int COLS = 4;

int findMaxColumnSum(int matrix[ROWS][COLS]) {
    int maxSum = INT_MIN;
    int maxColumn = -1;

    for (int j = 0; j < COLS; ++j) {
        int sum = 0;
        for (int i = 0; i < ROWS; ++i) {
            sum += matrix[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxColumn = j;
        }
    }

    return maxColumn;
}

int findMinColumnSum(int matrix[ROWS][COLS]) {
    int minSum = INT_MAX;
    int minColumn = -1;

    for (int j = 0; j < COLS; ++j) {
        int sum = 0;
        for (int i = 0; i < ROWS; ++i) {
            sum += matrix[i][j];
        }
        if (sum < minSum) {
            minSum = sum;
            minColumn = j;
        }
    }

    return minColumn;
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int maxColumn = findMaxColumnSum(matrix);
    int minColumn = findMinColumnSum(matrix);

    cout << "Column with maximum sum: " << maxColumn + 1 << endl;
    cout << "Column with minimum sum: " << minColumn + 1 << endl;

    return 0;
}