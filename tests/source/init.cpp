#include <lab3.hpp>
#include <catch.hpp>

SCENARIO("lab3 sum", "[sum]") {
    double eps = 1e-4;
    
    double rv = round(sum( eps ));
    
	REQUIRE( rv == 1 );
}
