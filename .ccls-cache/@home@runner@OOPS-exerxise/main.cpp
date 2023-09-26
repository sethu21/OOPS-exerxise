#include <iostream>
#include <vector>
#include <ctime>
using namespace std;


int main() {
  

  int x;
  int n;
  vector<int> lottery_cards;
  vector<int> lottery_numbers;

  
  cout << "Please enter the number of lottery number to pick(5,6or,7): ";
  cin >> x;

   n = x * x;

  while(x< 5||x>7){
    cout << "please enter number from 5 to 7";
    cin >> x;
  }

  cout<< "Fill out the lottery card";
  for (int i = 0; i<x; i++){
    int number;
    cout << "enter numbers " << i + 1<<" : ";
    cin >> number;
  
   if(number < 1 || number > n){
    cout << "invalid number.please enter a number between 1 and "<< n <<".";
    cin >> number;
   }
    for (int j = 0;j < i;j++){
      if (lottery_cards[j] == number){
        cout << "Duplicate number. please enetr again "<< endl;
        cin >> number;
      }
    }
    lottery_cards.push_back(number);
  }
}