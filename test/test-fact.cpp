#include "fact.hpp"

#include "catch.hpp"

TEST_CASE( "Factorial" , "[factorial]" ) {
    REQUIRE( factorial( 1 ) ==   1 );
    REQUIRE( factorial( 2 ) ==   2 );
    REQUIRE( factorial( 3 ) ==   6 );
    REQUIRE( factorial( 4 ) ==  24 );
    REQUIRE( factorial( 5 ) == 120 );
}