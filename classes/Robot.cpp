#include "Robot.h"
#include <fstream>

Robot::Robot(std::string src) {
    std::ifstream in(src);
    if (in.is_open()) {
        int i = 0;
        maze.resize(1);
        do {
            char ch = in.get();
            if (ch == '\n') {
                i++;
                maze.resize(i+1);
            }
            else if (ch == '^' || ch == '>' || ch == 'v' || ch == '<') {
                for (int k = 0; k < 4; k++) {
                    if (visualDir[k] == ch) curDir = dir(k);
                }
                curY = i;
                curX = maze[i].size();
                maze[i].push_back(' ');
            }
            else if (ch == '0') {
                maze[i].push_back(' ');
            }
            else if (ch == '1') {
                maze[i].push_back('Z');
            }
            else if (ch == '!') {
                maze[i].push_back('O');
            }
        }
        while (!in.eof());
        mazeheight = i+1;
        mazewidth = maze[i-1].size();
        in.close();
    }
    else throw (std::string("File with name ") + src + "doesn't exist!");
}

void Robot::printMaze() {
    auto tmpmaze = maze;
    tmpmaze[curX][curY] = visualDir[int(curDir)];
    for (auto& y: tmpmaze) {
        std::string s;
        for (auto& x: y) {
            s.append(1, x);
            s.append(1, ' ');
        }
        std::cout << s << std::endl;
    }
}

void Robot::right() {
    int tmp = (int)curDir + 1;
    if (tmp > 3) curDir = dir(0);
    else curDir = dir(tmp);
}

void Robot::left() {
    int tmp = (int)curDir - 1;
    if (tmp < 0) curDir = dir(3);
    else curDir = dir(tmp);
}

bool Robot::move(int amount) {
    if (amount < 0) throw "Error! Amount of steps should be above zero";
    switch (curDir)
    {
    case U: {
        int tmpX = curX - amount;
        if (tmpX < 0) return false;
        for (int i = curX - 1; i >= tmpX; i--) if (maze[i][curY] == 'Z') return false;
        curX = tmpX;
        return true;
    }
    case R: {
        int tmpY = curY + amount;
        if (tmpY > mazewidth) return false;
        for (int i = curY + 1; i <= tmpY; i++) if (maze[curX][i] == 'Z') return false;
        curY = tmpY;
        return true;
    }
    case D: {
        int tmpX = curX + amount;
        if (tmpX > mazeheight) return false;
        for (int i = curX + 1; i <= tmpX; i++) if (maze[i][curY] == 'Z') return false;
        curX = tmpX;
        return true;
    }
    case L: {
        int tmpY = curY - amount;
        if (tmpY < 0) return false;
        for (int i = curY - 1; i >= tmpY; i--) if (maze[curX][i] == 'Z') return false;
        curY = tmpY;
        return true;
    }
    default:
        throw "Error!";
    }
}

int Robot::wall() {
    switch (curDir)
    {
    case U: {
        int steps = 0;
        for (int i = curX - 1; i >= 0; i--) {
            if (maze[i][curY] == 'Z' || maze[i][curY] == 'O') return steps;
            steps++;
        }
        return steps;
    }
    case R: {
        int steps = 0;
        for (int i = curY + 1; i < mazewidth; i++) {
            if (maze[curX][i] == 'Z' || maze[curX][i] == 'O') return steps;
            steps++;
        }
        return steps;
    }
    case D: {
        int steps = 0;
        for (int i = curX + 1; i < mazeheight; i++) {
            if (maze[i][curY] == 'Z' || maze[i][curY] == 'O') return steps;
            steps++;
        }
        return steps;
    }
    case L: {
        int steps = 0;
        for (int i = curY - 1; i >= 0; i--) {
            if (maze[curX][i] == 'Z' || maze[curX][i] == 'O') return steps;
        }
        return steps;
    }
    default:
        throw "Error!";
    }
}

bool Robot::exit() {
    switch (curDir)
    {
    case U: {
        for (int i = curX - 1; i >= 0; i--) {
            if (maze[i][curY] == 'Z') return false;
            else if (maze[i][curY == 'O']) return true;
        }
        return false;
    }
    case R: {
        for (int i = curY + 1; i < mazewidth; i++) {
            if (maze[curX][i] == 'Z') return false;
            else if (maze[curX][i] == 'O') return true;
        }
        return false;
    }
    case D: {
        for (int i = curX + 1; i < mazeheight; i++) {
            if (maze[i][curY] == 'Z') return false;
            else if (maze[i][curY] == 'O') return true;
        }
        return false;
    }
    case L: {
        for (int i = curY - 1; i >= 0; i--) {
            if (maze[curX][i] == 'Z') return false;
            else if (maze[curX][i] == 'O') return true;
        }
        return false;
    }
    default:
        throw "Error!";
    }
}