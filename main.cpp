#include <iostream>
#include <vector>
#include <utility> // for std::move
#include <algorithm> // for std::reverse

using namespace std;


void printGrid(vector<vector<char>>& matrix) {
    for (int r = 0; r < matrix.size(); r++) {
        for (int c = 0; c < matrix[r].size(); c++) {
            cout << matrix[r][c];
        }
        cout << endl;
    }
}
/*
This function is used along with swap() for rotating pieces clockwise.
Eventually, I want the program to be able to keep track of what "position" (direction) a piece is in
Also, transpose does NOT accept "jagged matrices", and I'll try to avoid creating them
*/
bool transpose(vector<vector<char>>& matrix) {

    if (matrix.empty()) {
        return false; 
    }
    
    int originalRows = matrix.size();
    int originalColumns = matrix[0].size();

    vector<vector<char>> transposed(originalColumns, vector<char>(originalRows, ' ')); // already initializes to 0 by default

    for (int r = 0; r < originalRows; r++) {
        for (int c = 0; c < originalColumns; c++) {
            transposed[c][r] = matrix[r][c];
        }
    }

    matrix = move(transposed);
    return true;
}

bool swap(vector<vector<char>>& matrix) {
    
    if (matrix.empty() || matrix.size() < 2) {
        return false;
    }

    vector<char> temp = matrix[1];
    matrix[1] = matrix[0];
    matrix[0] = temp;
    
    return true;
}

bool reverse(vector<vector<char>>& matrix) {

    if (matrix.empty() || matrix.size() < 2) {
        return false;
    }
    
    for (int i = 0; i < matrix.size(); i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    return true;
}

int main() {
    cout << "Hello, world! This is main!" << endl;

    vector<vector<char>> grid = {
        {'X', 'X', 'X'},
        {'.', '.', 'X'}
    };

    cout << "Original:\n";
    printGrid(grid);

    swap(grid);
    transpose(grid);

    cout << "\ntranspose(swap(grid)):\n";
    printGrid(grid);

    transpose(grid);    
    reverse(grid);

    cout << "\nreverse(transpose(transpose(swap(grid)))):\n";
    printGrid(grid);

    swap(grid);
    transpose(grid);
    cout << "\ntranspose(swap(reverse(transpose(transpose(swap(grid)))))):\n";
    printGrid(grid);

    transpose(grid);
    reverse(grid);
    cout << "\nreverse(transpose(transpose(swap(reverse(transpose(transpose(swap(grid)))))))):\n";
    printGrid(grid);

    // the pattern seems to be swap-transpose-transpose-reverse for every two rotations from the original position
    
    return 0;
}