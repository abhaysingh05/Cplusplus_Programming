#include <iostream>
#include <vector>
using namespace std;
void takeInput(vector<vector<char>> &matrix, int x, int y, bool turn) {
    if (matrix[x - 1][y - 1] == ' ' && x <= 3 && y <= 3)
        matrix[x - 1][y - 1] = (turn ? 'X' : 'O');
    else if (x > 3 || y > 3) {
        while (x > 3 || y > 3) {
            cout << "Invalid Position!! Enter other position...\n";
            cin >> x >> y;
            while (matrix[x - 1][y - 1] != ' ') {
                cout << "This is occupied! Choose Another..\n";
                cin >> x >> y;
                if (x > 3 || y > 3) {
                    while (x > 3 || y > 3) {
                        cout << "Invalid Position!! Enter other position...\n";
                        cin >> x >> y;
                    }
                }
            }
        }
        matrix[x - 1][y - 1] = (turn ? 'X' : 'O');
    } else {
        int a, b;
        cout << "This is occupied! Choose Another..\n";
        cin >> a >> b;
        if (a > 3 || b > 3) {
            while (a > 3 || b > 3) {
                cout << "Invalid Position!! Enter other position...\n";
                cin >> a >> b;
            }
        }
        while (matrix[a - 1][b - 1] != ' ') {
            cout << "This is occupied! Choose Another..\n";
            cin >> a >> b;
            if (a > 3 || b > 3) {
                while (a > 3 || b > 3) {
                    cout << "Invalid Position!! Enter other position...\n";
                    cin >> a >> b;
                }
            }
        }
        matrix[a - 1][b - 1] = (turn ? 'X' : 'O');
    }
}
void print(vector<vector<char>> &matrix) {
    cout << "  ";
    for (int i = 0; i < 3; i++) {
        cout << " " << i + 1 << "  ";
    }
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0) cout << i + 1 << " ";
            if (j < 2)
                cout << " " << matrix[i][j] << " |";
            else
                cout << " " << matrix[i][j];
        }
        cout << "\n";
        if (i < 2) {
            for (int j = 0; j < 14; j++) {
                if (j < 2)
                    cout << " ";
                else
                    cout << '_';
            }
            cout << "\n";
        } else {
            cout << "\n";
        }
    }
}
int checkWin(vector<vector<char>> &matrix) {
    vector<bool> conditions(16);
    int ans;
    conditions[0] = (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X');
    conditions[8] = (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O');
    conditions[1] = (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X');
    conditions[9] = (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O');
    conditions[2] = (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X');
    conditions[10] = (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O');
    conditions[3] = (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X');
    conditions[11] = (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O');
    conditions[4] = (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X');
    conditions[12] = (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O');
    conditions[5] = (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X');
    conditions[13] = (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O');
    conditions[6] = (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X');
    conditions[14] = (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O');
    conditions[7] = (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X');
    conditions[15] = (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O');
    bool val = false;
    for (int i = 0; i < 8; i++) {
        val = (val || conditions[i]);
    }
    if (val == true) return 1;
    val = false;
    for (int i = 8; i < 16; i++) {
        val = (val || conditions[i]);
    }
    if (val == true) return 0;
    return -1;
}
int main() {
    vector<vector<char>> matrix(3, vector<char>(3, ' '));
    cout << "Player1: O\nPlayer2: X\n";
    bool turn = false;
    bool tie = true;
    for (int i = 0;; i++) {
        int x, y;
        if (i == 0) print(matrix);
        cout << ((i & 1) ? "Player2 :: Enter Co-ordinate(x,y): " : "Player1 :: Enter Co-ordinate(x,y): ");
        cin >> x >> y;
        takeInput(matrix, x, y, turn);
        turn = !turn;
        print(matrix);
        if (i >= 6) {
            if (checkWin(matrix) == 0) {
                cout << "Player 1 Wins i.e 'O'\n";
                return 0;

            } else if (checkWin(matrix) == 1) {
                cout << "Player 2 Wins i.e 'X'\n";
                return 0;
            }
        }
    }
    cout << "Tie\n";
    return 0;
}