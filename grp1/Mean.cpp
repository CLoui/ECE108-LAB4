#include "Mean.h"
#include <iostream>

// Mean member functions
//
Mean::Mean(const std::vector<int> &population) {
  _population_stored = population;
}

Mean::~Mean() {
  _input_set_size = 0;              // sets size of population stack to 0
  _calculated_value = 0;            // sets the mean to 0
  _population_stored.clear();        // clears the vector stored for population
}

float Mean::CalculateMean() {
  
  _input_set_size = CalculateSetSize();

  int sumOfAges = 0;
  
  for (auto const& age: _population_stored) {
    sumOfAges += age;
  }
  
  _calculated_value = static_cast<float>(sumOfAges) / static_cast<float>(_input_set_size);
  
  return _calculated_value;
}

unsigned int Mean::CalculateSetSize() {
  _input_set_size = _population_stored.size();
  return _input_set_size;
}

std::vector<int> Mean::getPopulationStack() {
  return _population_stored;
}
