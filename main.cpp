#include <iostream>
#include <vector>
#include <utility> // for std::move
#include <algorithm> // for std::reverse

#include "Graphics.h"

using namespace std;


void printGrid(vector<vector<string>>& matrix) {
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
bool transpose(vector<vector<string>>& matrix) {

    if (matrix.empty()) {
        return false; 
    }
    
    int originalRows = matrix.size();
    int originalColumns = matrix[0].size();

    vector<vector<string>> transposed(originalColumns, vector<string>(originalRows, " "));

    for (int r = 0; r < originalRows; r++) {
        for (int c = 0; c < originalColumns; c++) {
            transposed[c][r] = matrix[r][c];
        }
    }

    matrix = move(transposed);
    return true;
}

bool swap(vector<vector<string>>& matrix) {
    
    if (matrix.empty() || matrix.size() < 2) {
        return false;
    }

    vector<string> temp = matrix[1];
    matrix[1] = matrix[0];
    matrix[0] = temp;
    
    return true;
}

bool reverse(vector<vector<string>>& matrix) {

    if (matrix.empty() || matrix.size() < 2) {
        return false;
    }
    
    for (int i = 0; i < matrix.size(); i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    return true;
}

int main() {

    Graphics canvas;
    canvas.drawCanvas();
    // vector<vector<string>> grid = {
    //     {"X", "X", "X"},
    //     {".", ".", "X"}
    // };

    // cout << "Original:\n";
    // printGrid(grid);

    // swap(grid);
    // transpose(grid);

    // cout << "\ntranspose(swap(grid)):\n";
    // printGrid(grid);

    // transpose(grid);    
    // reverse(grid);

    // cout << "\nreverse(transpose(transpose(swap(grid)))):\n";
    // printGrid(grid);

    // swap(grid);
    // transpose(grid);
    // cout << "\ntranspose(swap(reverse(transpose(transpose(swap(grid)))))):\n";
    // printGrid(grid);

    // transpose(grid);
    // reverse(grid);
    // cout << "\nreverse(transpose(transpose(swap(reverse(transpose(transpose(swap(grid)))))))):\n";
    // printGrid(grid);

    // the pattern seems to be swap-transpose-transpose-reverse for every two rotations from the original position
    
    return 0;
}


/*
Consider putting Graphics in Game, or giving Graphics a Game pointer so that Game's data can be used in Graphics (dropSpeed, etc.)
Figure out the relationship between Player and Game.
Player should outlive Game

Current Mermaid diagram:


classDiagram

class Player {
    -score: int
    +addPoints(points : int) bool
    +getScore() int
    keyboard stuff
}

class Piece {
    -type : string
    -direction : char
    -posX : int
    -posY : int
    +rotate(key : char) bool
    +place() void
    +getPosX() int
    +getPosY() int
}

class Game {
    -highestScore : int
    -dropSpeed : int
    -pieces : array<array<array<string, x>, y>, z>
    +getHighestScore() int
    +getDropSpeed() int
    +setDropSpeed() bool
}

class Graphics {
    -board : array<array<string, 50>, 50>
    -canvas : array<array<string, 52>, 52>

    
    +Graphics()
    +updateCanvas() void
    +drawCanvas() void
}

Game *-- "1" Graphics
Game *-- "1" Piece
Game --> "1" Player
*/