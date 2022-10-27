#include <iostream>
using namespace std;

int main() {
  int num, a=1, b=1, c=0;
  cout << "Digite quantos elementos do fibonacci você deseja ver: ";
  cin >> num;
  if (num == 1 || num > 1){
    cout << "0 |";
  }
  if (num == 2 || num > 2){
    cout << " 1 |";
  }
  if (num == 3 || num > 3){
    cout << " 1 |";
  }
  if (num > 3){
    for (int i = 3; i < num ; i++){
     c=a+b;
     b=a;
     a=c;
     cout << " ";
     cout << c;
     cout << " |";
      }
   }  

  return 0;
}
