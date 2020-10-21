
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <string>

void boardPass();
int password();
char number[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
void task1();
void task2();
void task2_2();
void task3();
void task4();


int main()
{
    int Player = 0;
    char choise;
    password();

    std::cout << "welcome to the program :D\n";
    std::cout << "choose between these 4 tasks\n1/ Dice simulator\n2/ Healtbar simulation\n3/ Map exploration\n4/ pacman hybrid\n  : ";
    std::cin >> Player;
    if (Player == 1) {
        task1();
    }
    else if (Player == 2) {
        task2();
    }
    else if (Player == 3) {
        task3();
    }
    else if (Player == 4) {
        task4();
    }
    else {
        std::cout << "Wrong input ... Do you want to try again : (Y/N)\n  : ";
        std::cin >> choise;
        if (choise == 'y' || choise == 'Y') {
            std::cout << "choose between these 4 tasks\n1/ Dice simulator\n2/ Healtbar simulation\n3/ Map exploration\n4/ pacman hybrid\n  : ";
            std::cin >> Player;
            if (Player == 1) {
                task1();
            }
            else if (Player == 2) {
                task2();
            }
            else if (Player == 3) {
                task3();
            }
            else if (Player == 4) {
                task4();
            }
        }
        else {
            std::cout << "\n Now exiting the program";
        }
    }
}

int password() 
{

    char player;
    int gameover = 3;
    char symbol;
    symbol = '*';
    number[1] = symbol;

    do {
        boardPass();
        std::cin >> player;
        if (player == 's') {
            if (number[1] == symbol) {
                number[4] = symbol;
                boardPass();
            }
            else {
                gameover--;
            }
        }
        else if (player == 'd') {
            if (number[2] !=symbol && number[4] == symbol) {
                number[5] = symbol;
                boardPass();
            }
            else if (number[4] == symbol || number[5] == symbol) {
                number[3] = symbol;
                return(1);
            }
            else {
                gameover--;
            }
        }
        else if (player == 'w') {
            if (number[4] == symbol || number[5] == symbol) {
                number[2] = symbol;
                boardPass();
                
            }
            else {
                gameover--;             
            }
        }

        else {
            gameover--;
        }
        boardPass();
    } while (gameover  > 0);
    return (1);
}



void boardPass() {
    system("cls"); // i clean the program so that we dont get more than one board at a time.

    std::cout << "Type the password : "  << "\n\n";
    std::cout << "  |  " << number[1] << "  |  " << number[2] << "  |  " << number[3] << "  |\n\n";
    std::cout << "  |  " << number[4] << "  |  " << number[5] << "  |  " << number[6] << "  |\n\n";
    std::cout << "  |  " << number[7] << "  |  " << number[8] << "  |  " << number[9] << "  |\n\n";
}

void task1() {
    int d1 = 0;
    int d2 = 0;
    int d3 = 0;
    int d4 = 0;
    int d5 = 0;
    int d6 = 0;

       srand((unsigned)time(0));

    for (int i = 0; i <= 2000; i++) {
        int generatedNum = rand() % 6 + 1;
        switch (generatedNum)
        {
        case 1: d1++; break;
        case 2: d2++; break;
        case 3: d3++; break;
        case 4: d4++; break;
        case 5: d5++; break;
        case 6: d6++; break;
        }

    }
    std::cout << "        ______________" << std::endl;
    std::cout << "you got |1| : " << d1 << "times|" << std::endl;
    std::cout << "        ______________" << std::endl;
    std::cout << "        |2| : " << d2 << "times|" << std::endl;
    std::cout << "        ______________" << std::endl;
    std::cout << "        |3| : " << d3 << "times|" << std::endl;
    std::cout << "        ______________" << std::endl;
    std::cout << "        |4| : " << d4 << "times|" << std::endl;
    std::cout << "        ______________" << std::endl;
    std::cout << "        |5| : " << d5 << "times|" << std::endl;
    std::cout << "        ______________" << std::endl;
    std::cout << "        |6| : " << d6 << "times|" << std::endl;

}

void task2() {
    char values[21] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14', '15', '16', '17', '18', '19', '20' };
    srand((unsigned)time(0));
    

    std::cout << "No\t Name\t Value\t Health Bar" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "0 \t A   \t " << values[(rand() % 20) + 1] << std::endl;
    std::cout << "1 \t B   \t " << values[(rand() % 20) + 1] << std::endl;
    std::cout << "2 \t C   \t " << values[(rand() % 20) + 1] << std::endl;
    std::cout << "3 \t D   \t " << values[(rand() % 20) + 1] << std::endl;
    std::cout << "4 \t E   \t " << values[(rand() % 20) + 1] << std::endl;
    std::cout << "5 \t F   \t " << values[(rand() % 20) + 1] << std::endl;
    std::cout << "6 \t G   \t " << values[(rand() % 20) + 1] << std::endl;
    std::cout << "7 \t H   \t " << values[(rand() % 20) + 1] << std::endl;
    std::cout << "8 \t I   \t " << values[(rand() % 20) + 1] << std::endl;
    std::cout << "9 \t J   \t " << values[(rand() % 20) + 1] << std::endl; // i dont know why but the values dont go beyond 10 it seems
}

void task2_2() {
    // i was supposed to sort here
}

void task3() {
    char grid[10][10] = {
 {'+','#','#','#','#','#','#','#','#','|'},
 {'|','X',' ',' ',' ',' ',' ',' ',' ','|'},
 {'|','#','#',' ','#','#','#','#','#','|'},
 {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
 {'|',' ','|',' ','|','#','#','#','|','|'},
 {'|',' ','|',' ','|',' ',' ',' ','|','|'},
 {'|',' ','|',' ',' ',' ',' ',' ',' ','|'},
 {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
 {'|',' ',' ','#','#','#','#','#',' ','|'},
 {'|','_','_','_','_','_','_','_','_','|'},
    };

}

void task4() {

}