#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#define LINE printf("\t\t|---|---|---|");

int main() {
    int choice = 0;
    char winner = 0;
    std::string board[9] = { "0", "1", "2", "3", "4", "5" ,"6", "7", "8" };
    std::string player1;
    std::string player2;
    char play1, play2;
    std::fstream Username_filecheck(".username");

  if(!Username_filecheck) {
    std::cout << "Username for player 1; ";
    getline(std::cin, player1);
    system("clear");
    std::cout << "Username for player 2; ";
    getline(std::cin, player2);
    system("clear");
        std::cout << "Each player has to select to play either as X or O.\n";
        std::cout << player1 << " you are; ";
        std::cin >> play1;
        system("clear");
        std::cout << player2 << " you are; ";
        std::cin >> play2;
        system("clear");
    std::ofstream Username(".username");
    char buffer = toupper(play1);
    play1 = buffer;
    buffer = toupper(play2);
    play2 = buffer;
    Username << player1 << "\n" << play1 << "\n" << player2 << "\n" << play2;
  }
  else {
      std::vector<std::string> ContentsofFile(5);
      std::string buffer;
      while(Username_filecheck >> buffer) { ContentsofFile.insert(ContentsofFile.begin(), buffer); }
      player1 = ContentsofFile[1];
      char* play_buffer = const_cast<char*>(ContentsofFile[0].c_str());
      play1 = *play_buffer;
      player2 = ContentsofFile[2];
      play_buffer = const_cast<char*>(ContentsofFile[3].c_str());
    play2 = *play_buffer;
  }
    while(winner == 0) {
     system("clear");
     LINE;
     std::cout << "\n\t\t| " << board[0] << " | " << board[1] << " | " << board[2] << " |\n";
     LINE;
     std::cout << "\n\t\t| " << board[3] << " | " << board[4] << " | " << board[5] << " |\n";
     LINE;
     std::cout << "\n\t\t| " << board[6] << " | " << board[7] << " | " << board[8] << " | \n";
     LINE;
     std::cout << std::endl;
     std::cout << player1 << ", your choice; ";
     std::cin >> choice;
    if(choice == 0) {board[0] = play1; std::cout << board[0] << std::endl;}
    else if(choice == 1) {board[1] = play1;}
    else if(choice == 2) {board[2] = play1;}
    else if(choice == 3) {board[3] = play1;}
    else if(choice == 4) {board[4] = play1;} 
    else if(choice == 5) {board[5] = play1;} 
    else if(choice == 6) {board[6] = play1;}
    else if(choice == 7) {board[7] = play1;}
    else if(choice == 8) {board[8] = play1;}
    }



}