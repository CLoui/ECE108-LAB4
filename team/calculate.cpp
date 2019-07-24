/* Calculate.cpp
 * - Mean and Median Age Consensus
 */

#include <iostream>
#include <vector>
#include <Mean.h>
#include <Median.h>
#include "shared.h"

int main() {

    //Generate 10 Data Samples
    std::vector<int> sample;
    sample = generate_random_sequence(10);

    //Display latest input set values
    for( int i = 0; i < 10; i++){
        std::cout << sample[i] << " ";
    }
    std::cout << std::endl;

    // Test Mean Class
    // Test Median Class

    //Conclusion
    std::cout << "Conclusion: " << std::endl;

    // Credits
    std:: cout << "Credits: " << std::endl;

    return 0;
}

