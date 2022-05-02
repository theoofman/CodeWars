#include <iostream>
bool isPrime(int number){
  int i = 2;
  while(i < number){
    if(number % i == 0){
      return false;
    }
    i++;
  }
  return true;
}
void calculatePrimes(int amount){
  int i = 2;
  while(i < amount){
    if(isPrime(i)){
      std::cout << i << std::endl;
    }
    i++;
  }
}

int main(){
  //get input
  int amount;
  std::cout << "Enter amount of primes to calculate: ";
  std::cin >> amount;
  calculatePrimes(amount);
  return 0;
}
