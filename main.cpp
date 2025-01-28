#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <random>

using namespace std;

const int dx[] = { 0, 0, 2, -2 };
const int dy[] = { 2, -2, 0, 0 };

const int WIDTH = 21;
const int HEIGHT = 21;

vector<vector<char>> maze(HEIGHT, vector<char>(WIDTH, '#'));

bool isValid(int x, int y)
{
    return x > 0 && y > 0 && x < HEIGHT - 1 && y < WIDTH - 1 && maze[x][y] == '#';
}

void carveMaze(int x, int y)
{
    maze[x][y] = ' ';

    vector<int> directions = { 0, 1, 2, 3 };

    // Use std::shuffle with a random number generator
    random_device rd;
    mt19937 gen(rd());
    shuffle(directions.begin(), directions.end(), gen);

    for (int dir : directions)
    {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (isValid(nx, ny))
        {
            maze[x + dx[dir] / 2][y + dy[dir] / 2] = ' ';
            carveMaze(nx, ny);
        }
    }
}

void generateMaze()
{
    carveMaze(1, 1);

    maze[1][1] = 'S';
    maze[HEIGHT - 2][WIDTH - 2] = 'E';
}

void printMaze()
{
    for (const auto& row : maze) {
        for (char cell : row) {
            cout << cell;
        }
        cout << '\n';
    }
}

int main()
{
    generateMaze();
    printMaze();
    return 0;
}
