#ifndef GRP1_MEAN_H_
#define GRP1_MEAN_H_

#include <cstdint>
#include <vector>

class Mean {
 private:
  size_t _input_set_size;                       // stores the size of the set
  float _calculated_value;                      // stores the calculated mean of population
  std::vector<int> _population_stored;           // stores the vector of population ages

 public:
  Mean(const std::vector<int> &population);     // Constructor sets population vector<int>
  ~Mean();                                      // Destructor
  
  float CalculateMean();                        // Return mean age of population
  unsigned int CalculateSetSize();              // Return size of population
  std::vector<int> getPopulationStack();        // Gets the population stack
};

#endif  // GRP1_MEAN_H_
