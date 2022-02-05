#pragma once
#include <iostream>
#include <string>
#include <vector>

class Robot {
private:
    const char visualDir[4] = {'^', '>', 'v', '<'};
    enum dir {
        U,
        R,
        D,
        L
    };

    std::vector<std::vector<char>> maze;

    dir curDir;
    int curX;
    int curY;

    int mazeheight;
    int mazewidth;
public:
    void printMaze();
    void right();
    void left();
    bool move(int amount);
    int wall();
    bool exit();

    Robot() {};
    Robot(std::string);
    ~Robot() {};
};