#include <iostream>

using namespace std;

/*
This function is used for rotating pieces.

For a piece that looks like this:
[
[#, #, #]             so ###
[ ,  , #]                  #
]

W1 calls transpose, turning it to ⅃ 

Turns this
[
[1, 2, 3],
[4, 5, 6],
]

to this
[
[1, 4],
[2, 5],
[3, 6]
]

returns true if successful

*/
bool transpose() {
    /*
    matrices: `a` as a 2x3 matrix 
    1) Keep track of the dimensions of a (so, 2x3)
    2) Create a new matix b with dimensions 3x2
    3) Copy as such:
    a(1, 1) to b(1, 1)
    a(1, 2) to b(2, 1)
    a(1, 3) to b(3, 1)
    a(2, 1) to b(1, 2)
    a(2, 2) to b(2, 2)
    a(2, 3) to b(3, 2)
    */
    
    return false;
}



int main() {
    cout << "Hello, world! This is main!" << endl;
    return 0;
}