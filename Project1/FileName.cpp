#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void printAdjacentElements(const vector<vector<int>>& grid, int row, int col) {
    int rows = grid.size();
    int cols = grid[0].size();

    
    if (row > 0) {
        cout << "Top: " << grid[row - 1][col] << endl;
    }

   
    if (row < rows - 1) {
        cout << "Bottom: " << grid[row + 1][col] << endl;
    }

    
    if (col > 0) {
        cout << "Left: " << grid[row][col - 1] << endl;
    }

    
    if (col < cols - 1) {
        cout << "Right: " << grid[row][col + 1] << endl;
    }
}

int main() {
    srand(time(nullptr)); 

    const int rows = 5;
    const int cols = 5;

    vector<vector<int>> grid(rows, vector<int>(cols));

    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            grid[i][j] = rand() % 100; 
        }
    }

    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element at (" << i << ", " << j << "): " << grid[i][j] << endl;
            printAdjacentElements(grid, i, j);
            cout << endl;
        }
    }

    return 0;
}