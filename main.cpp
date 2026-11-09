#include <iostream>

using namespace std;


/*

1) A header (.h) for each class you expect to need, with a comment saying what the class is responsible for, its member variables, and declarations of its main member functions. No implementations yet.

Example class diagram:
classDiagram

class Player {
-score: int
+addPoints(points : int) void
+getScore() int
}

class Piece {
-type : string
-direction : char
+rotate(key : char) bool
+place() void
}

class Game {
-highestRecordedScore : int
-dropSpeed : int
+getHighestRecordedScore() int
+getDropSpeed() int
+setDropSpeed() void
}

2) A class diagram in README.md, as a Mermaid class diagram, showing each class and how the classes relate (inheritance, composition, aggregation or association), with multiplicities where they matter.

*/

int main() {
    cout << "Hello, world! This is main!" << endl;
    return 0;
}