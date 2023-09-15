#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
   srand(time(0));


   int randomNumber = rand() % 100 + 1;

   int userGuess;
   int attempts = 0;

   cout<< "Guess the number between 1 and 100." <<endl;

   do{
    cout<<"enter the Guess: ";
    cin>> userGuess;
    attempts++;

    if(userGuess > randomNumber){
        cout<<"Too high! Try again. "<<endl;
    }
    else if(userGuess < randomNumber){
        cout<<"Too low! Try agin. "<<endl;
    }
    else{
        cout<<"congratulation! you guessed the number "<<" in "<<attempts<<" Attempts";
    }

   }while(userGuess != randomNumber);
   
    return 0;
}