
#include<iostream>
using namespace std;
#include<cstdlib> //For rand() and srand()
#include<ctime> //FOR time()
int main()
{
    //seed the random number generator.......
    srand(static_cast<unsigned int>(time(0)));
    //generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int playerGuess = 0;
    int attempts = 0;
    cout<<"welcome to the number guessing game!"<<endl;
    cout<<"I have selected a number between 1 and 100."<<endl;
    // loop untill the player guesses the correct number
    while(playerGuess!=randomNumber){
        cout<<"enter your guess:";
        cin>>playerGuess;
        attempts++;
        if(playerGuess<randomNumber){
            cout<<"Too lower number!try again."<<endl;
           } else if (playerGuess>randomNumber ){
               cout<<"Too higher number! Try again."<<endl;
               
           } 
           else {
               cout<<"congratulation! you have guessed the number"<<randomNumber<<"in"<<attempts<<"attempts"<<endl;
           }
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
}
 