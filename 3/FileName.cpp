#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int SIZE = 8;
    vector<vector<char>> chessboard(SIZE, vector<char>(SIZE));

    
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if ((i + j) % 2 == 0) {
                chessboard[i][j] = 'X';  
            }
            else {
                chessboard[i][j] = ' ';  
            }
        }
    }

    
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << chessboard[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}