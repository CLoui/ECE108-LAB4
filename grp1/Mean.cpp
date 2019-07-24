#include "Mean.h"
#include <iostream>

// Mean member functions
//
Mean::Mean(const std::vector<int> &population) {
  population_stored = population;
  _input_set_size = CalculateSetSize();
  _calculated_value = CalculateMean();
}

Mean::~Mean() {
  _input_set_size = 0;              // sets size of population stack to 0
  _calculated_value = 0;            // sets the mean to 0
  population_stored.clear();        // clears the vector stored for population
}

float Mean::CalculateMean() {
  long int sumOfAges;
  
  for (auto const& age: population_stored) {
    sumOfAges += age;
  }
  
  float mean = sumOfAges / _input_set_size;
  
  return mean;
}

unsigned int Mean::CalculateSetSize() {
  return population_stored.size();
}
