# CIS25-Tetris
The final project for CIS25: Tetris

Mermaid Diagram:
<img width="2046" height="1375" alt="Mermaid Diagram" src="https://github.com/user-attachments/assets/86407566-3eff-499f-81e6-7f9a20fc0a95" />

-- Mermaid syntax --
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
