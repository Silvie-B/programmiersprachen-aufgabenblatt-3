#define CATCH_CONFIG_RUNNER
#include "aufgabe_6.hpp"
#include "circle.hpp"
#include <vector>
#include <algorithm>
#include <cstdlib>
#include "catch.hpp"

int main(int argc, char *argv[]){
    
 return Catch::Session().run(argc, argv);
}

TEST_CASE("testing_aufgabe_6" , "[sorted_vector]")
{
    std::vector<Circle> sorted_circles;
    std::vector<Circle> sorted_circles2;
    Vec2 center1(0.0f, 0.0f);
    Color color1(1.0f, 1.0f, 1.0f);
    Circle c1("Kreis1", 20.0f, center1, color1);
    sorted_circles.push_back(c1);
    sorted_circles2.push_back(c1);
    Vec2 center2(0.0f, 0.0f);
    Color color2(1.0f, 1.0f, 1.0f);
    Circle c2("Blabla", 30.0f, center2, color2);
    sorted_circles.push_back(c2);
    sorted_circles2.push_back(c2);
    Vec2 center3(0.0f, 0.0f);
    Color color3(1.0f, 1.0f, 1.0f);
    Circle c3("Kreis Pi", 5.0f, center3, color3);
    sorted_circles.push_back(c3);
    sorted_circles2.push_back(c3);
    
    std::sort(sorted_circles.begin(), sorted_circles.end());
    
    std::sort(sorted_circles2.begin(), sorted_circles2.end(),[] (Circle c1, Circle c2) {return c1.radius < c2.radius;} );
    
REQUIRE(std::is_sorted(sorted_circles2.begin(), sorted_circles2.end()));
}
