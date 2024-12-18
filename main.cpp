#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void MAGE(string name, int age) {
    cout << "Welcome to the world mage " << name << "..." << endl;
    cout << "You see a brigand, a pegasus knight, and a swordsman" << endl;
    cout << "Who do you choose to fight?" << endl;
    cout << "Enter BRIGAND, KNIGHT, or SWORDSMAN" << endl;
    string option;
    cin >> option;
    if (option == "BRIGAND") {
        cout << "Brigands have low res! Your magic bested the brigand";
    }
    if (option == "KNIGHT") {
        cout << "Choose a number 1-10" << endl;
        int random;
        cin >> random;
        if (random >= 5) {
            cout << "You win the fight!" << endl;
        }
        if (random < 5) {
            cout << "You lose the fight!" << endl;
        }
    }
    if (option == "SWORDSMAN") {
        //cout << "Choose a number 1-10" << endl;
        int random = rand() % 21;
        if (random <= 10) {
            cout << "You win the fight!" << endl;
        }
        if (random > 10) {
            cout << "You lose the fight!" << endl;
        }
    }
}

void KNIGHT(string name, int age) {
    cout << "Welcome to the world knight " << name << "..." << endl;
    cout << "You see a brigand, a pegasus knight, and a swordsman" << endl;
    cout << "Who do you choose to fight?" << endl;
    cout << "Enter BRIGAND, KNIGHT, or SWORDSMAN" << endl;
    string option;
    cin >> option;
    if (option == "BRIGAND") {
        cout << "Do you engage with SWORDS or LANCES?" << endl;
        string weapon;
        cin >> weapon;
        if (weapon == "SWORDS") {
            cout << "You know the weapon triangle! Swords beat axes. You win";
        }
        if (weapon == "LANCES") {
            cout << "The axe cuts your lance in half and you lose!";
        }
    }
    if (option == "KNIGHT") {
        cout << "What a fair duel!" << endl;
    }
    if (option == "SWORDSMAN") {
        cout << "Smart! Lances best swords. You win!" << endl;
    }
}

void ARCHER(string name, int age) {
    cout << "Welcome to the world archer " << name << "..." << endl;
    cout << "You see a brigand, a pegasus knight, and a swordsman" << endl;
    cout << "Who do you choose to fight?" << endl;
    cout << "Enter BRIGAND, KNIGHT, or SWORDSMAN" << endl;
    string option;
    cin >> option;
    if (option == "BRIGAND") {
        int num = rand() % 21;
        if (num >= 10) {
            cout << "Lady luck is on your side. You win!";
        } else {
            cout << "You will meet Hades today. You lose!";
        }
    }
    if (option == "KNIGHT") {
        cout << "Your arrow pierces the pegasus' wing and you win";
    }
    if (option == "SWORDSMAN") {
        int num = rand() % 21;
        if (num >= 10) {
            cout << "Lady Luck is on your side. You win!";
        } else {
            cout << "You lose! How shameful!";
        }
    }
}

int main() {
    string playAgain = "yes";

    while (playAgain == "yes") {
        cout << "Hello, Welcome to the world!" << endl;
        cout << "WHO ARE YOU?" << endl;
        string name;
        int age;
        string user_class;
        cout << "Enter your name: " << endl;
        cin >> name;
        cout << "Enter your age: " << endl;
        cin >> age;
        cout << "In this world, you can become an archer, knight, or mage. What do you choose?" << endl;
        cout << "Enter ARCHER, KNIGHT, or MAGE :" << endl;
        cin >> user_class;

        if (user_class == "MAGE") {
            MAGE(name, age);
        }
        else if (user_class == "KNIGHT") {
            KNIGHT(name, age);
        }
        else if (user_class == "ARCHER") {
            ARCHER(name, age);
        }

        cout << "\nDo you want to play again? (yes/no): ";
        cin >> playAgain;
    }

    cout << "See you next time!" << endl;
    return 0;
}
