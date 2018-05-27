#define CATCH_CONFIG_RUNNER
#include <stdio.h>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include "catch.hpp"


int main(int argc, char *argv[]){
  
    
    return Catch::Session().run(argc, argv);
}
TEST_CASE("testing_aufgabe_12", "[v_3]")
{
    std::vector<int> v_1{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> v_2{9, 8, 7, 6, 5, 4, 3, 2, 1};
    std::vector<int> v_3(9);
    
    std::transform (v_1.begin(), v_1.end(), v_2.begin(), v_3.begin(), [] (int x, int y){return x+y;} );
    REQUIRE(std::all_of(v_3.begin(), v_3.end(), [] (int x) {return x == 10;}));
}
