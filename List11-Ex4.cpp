#include <iostream>

int calcMaior(int num1, int num2){
  if (num1 > num2)
  {
  std::cout << (num1);
  std::cout << (",");
  std::cout << (num2);
    return 0;
  }
  else
  {
    int aux;
    aux = num1;
    num1 = num2;
    num2 = aux;
    std::cout << (num1);
    std::cout << (",");
    std::cout << (num2);
    return 0;
  }
};


int main() {
  int x , y;
  std::cout << "Digite dois números\n";
  std::cin >> x;
  std::cin >> y;
  calcMaior (x,y);
  return 0;
}
