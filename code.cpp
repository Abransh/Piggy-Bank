#include <iostream>

int main() {
  
  double Pesos; 
  double Reais; 
  double Soles; 
  double dollars; 

  std::cout << "Enter number of Colombian Pesos: " << "\n" ; 
  std::cin >> Pesos; 
  std::cout << "Enter number of Brazilian Reais: " << "\n" ; 
  std::cin >> Reais; 
  std::cout << "Enter number of Peruvian Soles: " << "\n" ; 
  std::cin >> Soles; 

double usd1 = Pesos* 0.049; 
double usd2 = Reais* 0.175; 
double usd3 = Soles* 0.270; 

dollars = usd1 = usd2 + usd3;

  std::cout << "US Dollars = $" << dollars << std::endl; 

}
