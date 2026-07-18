//Number guessing game
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand((unsigned int)(time(NULL)));//USED TO GENERATE UNSIGNED INTEGERS
    int number=rand()%100+1;//NUMBER RANGE BETWEEN 1-100.
    int guess;
    do{
        cout<<"Enter your guess number(1-100): ";
        cin>>guess;

        if(guess<number)
            cout<<"Too High."<<endl;
        else if(guess>number)
            cout<<"Too Low."<<endl;
        else
            cout<<"You Won!"<<endl<<endl;

    }while(guess!=number);
    return 0;
}
