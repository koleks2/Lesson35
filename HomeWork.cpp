#include <iostream>
#include "Game.h"

int main() {
    Game game;
    int choice = 0;

    while (true) {
        std::cout << "\n====== GUESS THE NUMBER ======\n";
        std::cout << "1. Play Game\n";
        std::cout << "2. View Statistics\n";
        std::cout << "3. Exit\n";
        std::cout << "Choose an option (1-3): ";

        std::cin >> choice;

        if (choice == 1) {
            game.play();
        }
        else if (choice == 2) {
            game.showStats();
        }
        else if (choice == 3) {
            std::cout << "Goodbye!\n";
            break;
        }
        else {
            std::cout << "Invalid choice! Please try again.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
    }

}