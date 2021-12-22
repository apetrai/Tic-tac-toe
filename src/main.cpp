#include <iostream>
#include <string>
#include <fstream>
#include <vector>

void play(char &A, char &B, bool &turn);

int main() {
  bool turn = 0;
  char A = '\0', B = '\0';

  std::cout << "User A: enter your first initial. ";
  std::cin >> A;

  system("clear");

  std::cout << "User B: enter your first initial. ";
  std::cin >> B;

  system("clear");

  play(A, B, turn);
}

void play(char &A, char &B, bool &turn)
{
  std::vector<char> PlayerOption = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  char option = '\0';
 while (true) {
    std::cout << "\t\t\t\t\t ___________ " << std::endl;
    std::cout << "\t\t\t\t\t| " << PlayerOption[0] << " | " << PlayerOption[1] << " | " << PlayerOption[2] << " |" << std::endl;
    std::cout << "\t\t\t\t\t|-----------|" << std::endl;
    std::cout << "\t\t\t\t\t| " << PlayerOption[3] << " | " << PlayerOption[4] << " | " << PlayerOption[5] << " |" << std::endl;
    std::cout << "\t\t\t\t\t|-----------|" << std::endl;
    std::cout << "\t\t\t\t\t| " << PlayerOption[6] << " | " << PlayerOption[7] << " | " << PlayerOption[8] << " |" << std::endl;
    std::cout << "\t\t\t\t\t|___________|\n\n" << std::endl;

  if( PlayerOption[0] == 'X' && PlayerOption[1] == 'X' && PlayerOption[2] == 'X' || PlayerOption[3] == 'X' && PlayerOption[4] == 'X' && PlayerOption[5] == 'X'
   || PlayerOption[6] == 'X' && PlayerOption[7] == 'X' && PlayerOption[8] == 'X' || PlayerOption[0] == 'X' && PlayerOption[3] == 'X' && PlayerOption[6] == 'X' //All possibilities of winning for X.
   || PlayerOption[1] == 'X' && PlayerOption[4] == 'X' && PlayerOption[7] == 'X' || PlayerOption[2] == 'X' && PlayerOption[5] == 'X' && PlayerOption[8] == 'X'
   || PlayerOption[0] == 'X' && PlayerOption[4] == 'X' && PlayerOption[8] == 'X' || PlayerOption[6] == 'X' && PlayerOption[4] == 'X' && PlayerOption[2] == 'X')
      exit(EXIT_SUCCESS);
  else if (PlayerOption[0] == 'O' && PlayerOption[1] == 'O' && PlayerOption[2] == 'O' || PlayerOption[3] == 'O' && PlayerOption[4] == 'O' && PlayerOption[5] == 'O'
   || PlayerOption[6] == 'O' && PlayerOption[7] == 'O' && PlayerOption[8] == 'O' || PlayerOption[0] == 'O' && PlayerOption[3] == 'O' && PlayerOption[6] == 'O'
   || PlayerOption[1] == 'O' && PlayerOption[4] == 'O' && PlayerOption[7] == 'O' || PlayerOption[2] == 'O' && PlayerOption[5] == 'O' && PlayerOption[8] == 'O' //All possibilities of winning for O.
   || PlayerOption[0] == 'O' && PlayerOption[4] == 'O' && PlayerOption[8] == 'O' || PlayerOption[6] == 'O' && PlayerOption[4] == 'O' && PlayerOption[2] == 'O')
      exit(EXIT_SUCCESS);

  if(turn == false) {
    std::cout << A << " you are X choose where you want to input 0-8: ";
    std::cin >> option;
    switch(option) {
      case '0':
          PlayerOption[0] = 'X';
        break;
      case '1':
          PlayerOption[1] = 'X';
        break;
      case '2':
          PlayerOption[2] = 'X';
        break;
      case '3':
          PlayerOption[3] = 'X';
        break;
      case '4':
          PlayerOption[4] = 'X';
        break;
      case '5':
          PlayerOption[5] = 'X';
        break;
      case '6':
          PlayerOption[6] = 'X';
        break;
      case '7':
          PlayerOption[7] = 'X';
        break;
      case '8':
          PlayerOption[8] = 'X';
        break;
    }
    turn = 1;
  }
  else {
    std::cout << B << " you are O choose where you want to input 0-8: ";
    std::cin >> option;
    switch(option) {
    case '0':
          PlayerOption[0] = 'O';
        break;
      case '1':
          PlayerOption[1] = 'O';
        break;
      case '2':
          PlayerOption[2] = 'O';
        break;
      case '3':
          PlayerOption[3] = 'O';
        break;
      case '4':
          PlayerOption[4] = 'O';
        break;
      case '5':
          PlayerOption[5] = 'O';
        break;
      case '6':
          PlayerOption[6] = 'O';
        break;
      case '7':
          PlayerOption[7] = 'O';
        break;
      case '8':
          PlayerOption[8] = 'O';
        break;
    }
    turn = 0;
  }
  system("clear");
 }

}