#include <iostream>
using namespace std;

int main() {
  float num;
  int contn=0, contp=0, contz=0;
  
  cout << "Digite os numeros abaixo: ";
  while (1){
  cin >> num;
    if (num == -99){
      break;
    }
    if (num == 0){
      contz++;
    }
    else if (num > 0){
      contp++;
    }
    else{
      contn++;
    }
    
  }
  cout << "A quantidade de números negativos escritos foram: ";
  cout << contn;
  cout << ",a quantidade de números positivos foram: ";
  cout << contp;
  cout << ",e por fim a quantidade de zeros foram: ";
  cout << contz;
  
  return 0;
}
