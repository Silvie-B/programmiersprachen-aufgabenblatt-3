#include <list>
#include <iostream>
#include <cstdlib>
#include "aufgabe_2_und_3.hpp"


int main()
{
    std::list<unsigned int> clist;
    
    for(int i = 0; i < 100; i++)
        clist.push_back(rand() % 101);
    
    int counter[101] = {};
    for (unsigned int num : clist)
    {
        counter[num]++;
    }
    
    int diffNums = 0;
    for (int j = 0; j <= 100; j++)
    {
        if (counter[j] != 0)
            diffNums++;
    }

    std::cout << diffNums << " different numbers in the list" << std::endl;
    
    for(int k = 0; k <= 100; k++)
    {
        bool found = std::find(clist.begin(), clist.end(), k) != clist.end();
        if (!found)
            std::cout << k <<std::endl;
    }
    return 0;
}

