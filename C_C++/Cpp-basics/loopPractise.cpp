#include <iostream>
using namespace std;

void guessNumber(){
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuess = false;

    while (guess != secretNum){
        cout << "What is the secret number" << endl;
        cin >> guess;
        guessCount ++;
        if (guessCount > guessLimit){
            outOfGuess = true;
        }        
    }

    if (outOfGuess){
        cout << "You lose" << endl;
    }else{
        cout << "You win" << endl;
    }
}

int power(int baseNum, int powerNum){
    int result = 1;
    for (int i = 1;i<=powerNum;i++){
        result = result * baseNum;
    }
    return result;

}

int main(){
    int index = 6;
    while (index > 4){
        cout << index << endl;
        index -- ;
    }

    for (int i = 0;i <=5;i++){
        cout << i << endl;
    }

    cout << power(2,1) << endl;

    //guessNumber();
    return 0;
}