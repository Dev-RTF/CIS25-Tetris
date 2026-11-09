# CIS25-Tetris
The final project for CIS25: Tetris

Mermaid Diagram:

classDiagram

class Player {
    -score: int
    +addPoints(points : int) bool
    +getScore() int
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
    +getHighestScore() int
    +getDropSpeed() int
    +setDropSpeed() bool
}

class Graphics {
    -currentBoard : array<array<char, v>, w>
    -pieces : array<array<array<char, x>, y>, z>
    +drawBoard() void
}

Game *-- Graphics
Game *-- Piece
Game --> Player