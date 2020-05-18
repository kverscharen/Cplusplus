#include <iostream>
using namespace std;

bool PlayGame(int Difficulty) 
{
  
       // generate code
    const int FirstNumber = rand() % Difficulty + 1;
    const int SecondNumber = rand() % Difficulty + 1;
    const int ThirdNumber = rand() % Difficulty + 1;
    const int &ArraySum = FirstNumber + SecondNumber + ThirdNumber;
    const int &ArrayProduct = FirstNumber * SecondNumber * ThirdNumber;
    
       // welcome message
    std::cout << "\nYou are a mage building a rank " << Difficulty << " array. \n";
    std::cout <<" \nThere are three numbers in the code \n" << "The codes add up to: " << ArraySum << "\nThe codes multiply to give: "<< ArrayProduct;
    
    // take player guesses
    int GuessOne, GuessTwo, GuessThree;
    std::cout << "\nWhat numbers make up the array? \n";
    std::cin >> GuessOne >> GuessTwo >> GuessThree;

    int GuessSum = GuessOne + GuessTwo + GuessThree;
    int GuessProduct = GuessOne * GuessTwo * GuessThree;
    
    // check if guess is correct and print win or lose message
    if (GuessSum == ArraySum & GuessProduct == ArrayProduct)
        {
        std::cout << "\nYou are correct mage. \n";
        return true;
    }
    else
    {
        std::cout << "\n Wrong rune. The array explodes in your face. Try again. \n";
        return false;
    }
}
    
    
int main() 
{
    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;
    
    while (LevelDifficulty <= MaxDifficulty) // game loops until all levels completed
    {
    bool bLevelComplete = PlayGame(LevelDifficulty);
    std::cin.clear(); // clears any errors
    std::cin.ignore(); // discards the buffer
    
    if (bLevelComplete) 
        {
        ++LevelDifficulty;
    }
    }
    
    std::cout << "You built the array. You won. \n";
    return 0;
    }