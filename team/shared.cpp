#include "shared.h"

#define RND_LOWER_BOUND 0
#define RNG_UPPER_BOUND 110

std::vector<int> generate_random_sequence(const int n) {
  int desired_size = n;
  std::srand(std::time(nullptr));

  int sequence = std::vector<int>();

  while (sequence.size() < desired_size) {
    int new_number = std::rand() % RNG_UPPER_BOUND + RND_LOWER_BOUND;

    if (new_number == 13 && sequence.size() != 0) {
      int num_to_delete = sequence[sequence.size() - 1];
      for (int i = 0; i < num_to_delete; ++i) {
        if (sequence.size() == 0) break;
        sequence.pop_back();
      }
    }

    if ((new_number == 9 || new_number == 18) && sequence.size() != 0) {
      desired_size += sequence[sequence.size() - 1];
    }

    sequence.push_back(new_number);
  }

  return sequence;
}
