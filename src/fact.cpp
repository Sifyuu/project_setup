#include "fact.hpp"

unsigned int factorial( unsigned const int number ) {
    return number <= 1 ? number : factorial( number-1 )*number;
}