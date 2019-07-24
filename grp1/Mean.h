#ifndef GRP1_MEAN_H_
#define GRP1_MEAN_H_

#include <cstdint>

class Mean {
 private:
  size_t _input_set_size;
  float _calculated_value;

 public:
  Mean();
  ~Mean();
};

#endif  // GRP1_MEAN_H_
