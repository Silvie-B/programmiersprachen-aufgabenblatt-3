#include "aufgabe_4.hpp"
#include "circle.hpp"
#include <set>
#include <cstdlib>
#include <iostream>


int main()
{
    std::set<Circle> circleSet;
    std::set<std::string> circleNames;
    std::string name;
    
    Vec2 center1(0.0f, 0.0f);
    Color color1(1.0f, 1.0f, 1.0f);
    Circle c1("Kreis1", 20.0f, center1, color1);
    circleNames.insert("Kreis1");
    circleSet.insert(c1);
    Vec2 center2(0.0f, 0.0f);
    Color color2(1.0f, 1.0f, 1.0f);
    Circle c2("Blabla", 20.0f, center2, color2);
    circleNames.insert("Blabla");
    circleSet.insert(c2);
    Vec2 center3(0.0f, 0.0f);
    Color color3(1.0f, 1.0f, 1.0f);
    Circle c3("Kreis Pi", 20.0f, center3, color3);
    circleNames.insert("Kreis Pi");
    circleSet.insert(c3);
    
    
    std::cout << "Bitte einen Namen für einen Kreis eingeben: " << std::endl;
    std::getline(std::cin, name);
    
    Vec2 center4(0.0f, 0.0f);
    Color color4(1.0f, 1.0f, 1.0f);
    Circle c4(name, 20.0f, center4, color4);
    if(circleNames.count(name) == 1){
        std::cout << "Fehler, Name schon vorhanden!";
        return 0;
    }
    else{
        circleNames.insert(name);
        circleSet.insert(c4);
        std::cout << c4 << std::endl;
    }
    return 0;
}
