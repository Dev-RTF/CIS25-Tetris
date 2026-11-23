#include <iostream>
#include "Graphics.h"

using namespace std;

Graphics::Graphics() {
    // fill board with something to test
    for (int r = 0; r < board.size(); r++) {
        for (int c = 0; c < board[r].size(); c++) {
            board[r][c] = '#';
        }
    }
    
    // fill canvas
    for (int r = 0; r < canvas.size(); r++) {
        for (int c = 0; c < canvas[r].size(); c++) {
            
            if (r == (canvas.size() - canvas.size()) && c == (canvas.size() - canvas.size())) {
                canvas[r][c] = "┌";
            }
            
            else if (r == (canvas.size() - canvas.size()) && c == canvas.size() - 1) {
                canvas[r][c] = "┐";
            }

            else if (r == canvas.size() - 1 && c == canvas[0].size() - canvas[0].size()) {
                canvas[r][c] = "└";
            }

            else if (r == canvas.size() - 1 && c == canvas[0].size() - 1) {
                canvas[r][c] = "┘";
            }

            else if (r == (canvas.size() - canvas.size()) || r == canvas.size() - 1) {
                canvas[r][c] = "─";
            }
            
            else if (c == canvas[0].size() - canvas[0].size() || c == canvas[0].size() - 1) {
                canvas[r][c] = "│";
            }
        }
    }
}

// void Graphics::updateCanvas() {

// }

void Graphics::drawCanvas() {
    
    /*
    a totally blank canvas uses these ┌ ┐└ ┘ ─ │ and looks something like this:
    
    ┌────────────────────────────────────────────────┐
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    │                                                │
    └────────────────────────────────────────────────┘
    
    
    
    */
    
    for (int r = 0; r < canvas.size(); r++) {
        for (int c = 0; c < canvas[r].size(); c++) {
            cout << canvas[r][c];

        }
        cout << endl;
    }
}