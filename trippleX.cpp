#include <iostream>
#include<ctime>

bool PlayGame(int CurrentLevel)
{

    //decalres the variables 
    int CodeA = rand() % 3+CurrentLevel;
    int CodeB = rand() % 3+CurrentLevel;
    int CodeC = rand() % 3+CurrentLevel;
    

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;
    std::cout << "\n Level " << CurrentLevel;   

    std::cout << "\nThere are three numbers in the code \n\n";   
    std::cout << "The code's numbers add up to: "<< CodeSum;   
    std::cout << "\nThe code's numbers multiply to: " << CodeProduct;
    
    std::cout << "\nPlease input the three numbers you \"believe\" makeup the code" <<std::endl;
   // store player guessess
    int GuessA;
    int GuessB;
    int GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;    
    std::cin >> GuessC;    

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct= GuessA * GuessB * GuessC;

    //this is not needed
    // std::cout << "\nyour sum total is: " << GuessSum;
    // std::cout << "\nyour sum product is: " << GuessProduct;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
    std::cout << "\nThe surgery was a success!";
    return true;
    } 
    else 
    {
    std::cout << "\nhe's dead! better luck next time!";
    return false;
    }
    
}

void PrintIntro()
{
        //prints starting messages
    std::cout << "Welcome to the World of Machines"<< std::endl;
    std::cout << "We need you to perform robo brain surgery on these robots"<< std::endl;
    std::cout << "The code to save the robot has three numbers"<< std::endl;
}

void VictoryText()
{
    std::cout << "\nHot damn son you won the whole damn game"<< std::endl;

}
int main() 
{    
    srand(time(NULL));
    
    int CurrentLevel = 1 ;
    PrintIntro();
    while(CurrentLevel < 5){
        if (PlayGame(CurrentLevel) == true)
        {
        CurrentLevel++;
        }
        std::cin.clear();
        std::cin.ignore();
    }

    VictoryText();
    return 0;
}

