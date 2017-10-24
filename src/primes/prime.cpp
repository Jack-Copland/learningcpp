#include<iostream>
#include<vector>

bool primeCheck(int tmp, int x, std::vector<int>& primes) {
  for (int i = 0; i <= x; ++i) {
    if (tmp % primes[i] == 0) {
      return false;
    }
  }
  std::cout << tmp << " ";
  return true;
}

void primeCounter(std::vector<int>& primes, int y) {
  int tmp = 3;
  int x = 0;
  int counter = 1;
  bool isPrime = false;

  while (counter < y) {
    if (primes[x] * primes[x] == tmp) {
      ++tmp;
      ++x;
    }
    else if (primes[x] * primes[x] < tmp)
      ++x;

    isPrime = primeCheck(tmp, x, primes);

    if (!isPrime)
      ++tmp;
    else {
      primes[counter] = tmp;
      ++tmp;
      ++counter;
      isPrime = false;
    }
  }
  return;
}



int main(){
  int numberOfPrimes;
  std::cout << "Going to find some primes in this program!\n";
  std::cin >> numberOfPrimes;

  if (numberOfPrimes <= 0) {
    std::cout << "Guess we wont find many primes after all :(\n";
    return 0;
  }
  else if (numberOfPrimes == 1) {
    std::cout << 2 << std::endl;
    return 0;
  }
  std::vector<int> primes(numberOfPrimes);
  primes[0] = 2;

  primeCounter(primes, numberOfPrimes);

  return 0;
}
