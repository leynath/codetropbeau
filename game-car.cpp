#include <iostream>

char whoWon(char player, char computer);
char computerChoice(char computer);
void playerChoice(char player);

int main(){

    char player;
    char computer;
    bool play;

    do{
        std::cout << "\n\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n";
        std::cout << "°°° PAPER ROCK CISSORS GAME °°°\n";
        std::cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n";
        std::cout << "For Paper type 'p'\n";
        std::cout << "For Rock type 'r'\n";
        std::cout << "For Cissors type 'c'\n\n";
        std::cin >> player;
        std::cout << "Your choice is: ";
        playerChoice(player);

        std::cin.clear();
        fflush(stdin);
        
        computer = computerChoice(computer);
        whoWon(player, computer);

        std::cout << "\nPlay again ?\n1. Yes\n0. No\n\n";
        std::cin >> play;
        
    }while(play);

    std::cout << "\n\n\n";
    
    return 0;
}

char whoWon(char player, char computer){
    switch(player){
        case 'p': if(computer == 'p'){
                    std::cout << "It's a tie!\n";
                }
                else if(computer == 'r'){
                    std::cout << "You win!\n";
                }
                else{
                    std::cout << "You lose...\n";
                }
            break; 
        case 'r': if(computer == 'r'){
                    std::cout << "It's a tie!\n";
                }
                else if(computer == 'c'){
                    std::cout << "You win!\n";
                }
                else{
                    std::cout << "You lose...\n";
                }
            break;
        case 'c': if(computer == 'c'){
                    std::cout << "It's a tie!\n";
                }
                else if(computer == 'p'){
                    std::cout << "You win!\n";
                }
                else{
                    std::cout << "You lose...\n";
                }
            break;
    }
    return 0;
}
char computerChoice(char computer){
    
    int randNum;

    srand(time(0));
    randNum = rand()%3 +1;

    switch(randNum){
        case 1: computer = 'r';
            std::cout << "The IA chose: rock\n";
            break;
        case 2: computer = 'c';
            std::cout << "The IA chose: cissors\n";
            break;
        case 3: computer = 'p';
            std::cout << "The IA chose: paper\n";
            break;
    }

    return computer;
}
void playerChoice(char player){
    switch(player){
        case 'p': std::cout << "paper\n";
            break;
        case 'c': std::cout << "cissors\n";
            break;
        case 'r': std::cout << "rock\n";
            break;
        default:std::cout << "Invalid choice\n"; 
    }
}
