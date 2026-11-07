#pragma once
#include <iostream>
#include <fstream>
#include <string>
class Game {
private:
    const std::string filename = "stats.txt";

    void saveResult(int secret, int attempts);

public:
    Game();
    void play();
    void showStats();
};

