#include "Mean.h"
#include "../team/shared.h"
#include "testMean.h"
#include <iostream>
#include <string>
#include <vector>


std::vector<int> testPopulation1{0,10,20,30,40,50,60,70,80,90,100,110};
float testPopulation1Mean = 55;
int testPopulation1Size = 12;
std::vector<int> testPopulation2{12,13,15,16,24,15,22,10,9,13,13,18,16,25,23,24};
float testPopulation2Mean = 16.75;
int testPopulation2Size = 16;
std::vector<int> testPopulation3{3,33,44,6,7,16,5,99,77,10};
float testPopulation3Mean = 30;
int testPopulation3Size = 10;



int main() {
  
  bool test1 = testMean();
  bool test2 = testCalculateMean();
  bool test3 = testCalculateSetSize();
  
  if (test1 && test2 && test3) std::cout << greenColor("PASSED CLASS: Mean ") << std::endl;
  else std::cout << redColor("FAILED CLASS: Mean") << std::endl;
  
  Mean mean1 = Mean({0,10,20,30,40,50,60,70,80,90,100,110});
  mean1.CalculateMean();

  return 0;
}


bool testMean() {
  
  bool passORfailConstructor = true;

  std::cout << blueColor("Testing Mean Constructor") << std::endl;
  
  Mean testing1(testPopulation1);
  if (testing1.getPopulationStack() == testPopulation1) {
    std::cout <<  greenColor("     TEST MEAN CONSTRUCTOR 1 PASSED") << std::endl;
  }
  else {
    std::cout <<  redColor("     TEST MEAN CONSTRUCTOR 1 FAILED") << std::endl;
    passORfailConstructor = false;
  }
  
  Mean testing2(testPopulation2);
  if (testing2.getPopulationStack() == testPopulation2) {
    std::cout <<  greenColor("     TEST MEAN CONSTRUCTOR 2 PASSED") << std::endl;
  }
  else {
    passORfailConstructor = false;
    std::cout <<  redColor("     TEST MEAN CONSTRUCTOR 2 FAILED") << std::endl;
  }
  
  Mean testing3(testPopulation3);
  if (testing3.getPopulationStack() == testPopulation3) {
    std::cout <<  greenColor("     TEST MEAN CONSTRUCTOR 3 PASSED") << std::endl;
  }
  else {
    passORfailConstructor = false;
    std::cout <<  redColor("     TEST MEAN CONSTRUCTOR 3 FAILED") << std::endl;
  }
  
  return passORfailConstructor;
}

bool testCalculateMean() {
  
  bool passORfailCalculateMean = true;
  
  std::cout << blueColor("Testing Mean Calculation") << std::endl;
  Mean testing1(testPopulation1);
  if (testing1.CalculateMean() == testPopulation1Mean) {
    std::cout <<  greenColor("     TEST MEAN CALCULATION 1 PASSED") << std::endl;
  }
  else {
    std::cout <<  redColor("     TEST MEAN CALCULATION 1 FAILED") << std::endl;
    passORfailCalculateMean = false;
  }
  
  Mean testing2(testPopulation2);
  if (testing2.CalculateMean() == testPopulation2Mean) {
    std::cout <<  greenColor("     TEST MEAN CALCULATION 2 PASSED") << std::endl;
  }
  else {
    passORfailCalculateMean = false;
    std::cout <<  redColor("     TEST MEAN CALCULATION 2 FAILED") << std::endl;
  }
  
  Mean testing3(testPopulation3);
  if (testing3.CalculateMean() == testPopulation3Mean) {
    std::cout <<  greenColor("     TEST MEAN CALCULATION 3 PASSED") << std::endl;
  }
  else {
    passORfailCalculateMean = false;
    std::cout <<  redColor("     TEST MEAN CALCULATION 3 FAILED") << std::endl;
  }
  
  return passORfailCalculateMean;
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

std::string blueColor(std::string message) {
  return "\033[1;34m" + message + "\033[0m";
}

