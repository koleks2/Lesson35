#include "Game.h"

Game::Game() {
    srand(time(NULL));
}

void Game::saveResult(int secret, int attempts) {
    std::ofstream outFile(filename, std::ios::app);
    if (outFile.is_open()) {
        outFile << "Secret: " << secret << " | Attempts: " << attempts << std::endl;
        outFile.close();
    }
}

void Game::play() {
    int secret = rand() % 500 + 1;
    int guess = 0;
    int attempts = 0;

    std::cout << "\n--- New Game Started ---\n";
    std::cout << "I have guessed a number between 1 and 500. Try to guess it!\n";

    while (guess != secret) {
        std::cout << "Enter your guess: ";
        if (!(std::cin >> guess)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        attempts++;

        if (guess < secret) {
            std::cout << "The secret number is GREATER.\n";
        }
        else if (guess > secret) {
            std::cout << "The secret number is LESS.\n";
        }
        else {
            std::cout << "\nCongratulations! You guessed it in " << attempts << " attempts!\n";
            saveResult(secret, attempts);
        }
    }
}

void Game::showStats() {
    std::ifstream inFile(filename);
    std::cout << "\n=== Previous Games Statistics ===\n";

    if (!inFile.is_open()) {
        std::cout << "No statistics found yet. Play a game first!\n";
        return;
    }

    std::string line;
    int gameCount = 0;
    while (std::getline(inFile, line)) {
        std::cout << ++gameCount << ". " << line << std::endl;
    }

    inFile.close();
}