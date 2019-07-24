#include "Mean.h"
#include <iostream>
#include <string>
#include "../team/shared.h"
#include "testMean.h"

int main() {
  
  bool test1 = testMean();
  bool test2 = testCalculateMean();
  bool test3 = testCalculateSetSize();
  
  if (test1 && test2 && test3) std::cout << greenColor("\n PASSED CLASS: Mean ") << std::endl;
  else std::cout << redColor("\nFAILED CLASS: Mean") << std::endl;

  return 0;
}


bool testMean() {
  
  return true;
}

bool testCalculateMean() {
  
  return true;
}

bool testCalculateSetSize() {
  
  return true;
}

std::string greenColor(std::string message) {
  return "\033[1;32m" + message + "\033[0m";
}

std::string redColor(std::string message) {
  return "\033[1;31m" + message + "\033[0m";
}


