#include "aufgabe_11.hpp"
#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>
#include <vector>

bool is_multiple_of_3(unsigned int x)
{
    return (x % 3) == 0;
}
TEST_CASE (" filter alle vielfache von drei ", "[ erase ]")
{
    std::vector<unsigned int> v;
    for (int i = 0; i <= 100; i++)
    {
        v.push_back(rand() % 101);
    }
    v.erase( std::remove_if(v.begin(), v.end(), std::not1(std::ptr_fun(is_multiple_of_3))), v.end());
    REQUIRE (std :: all_of (v. begin (), v.end (), is_multiple_of_3 ));
}
int main (int argc , char * argv [])
{
    return Catch :: Session (). run(argc , argv );
}
