#include <list>
#include <set>
#include <map>
#include <iostream>
#include <cstdlib>
#include "aufgabe_2_und_3.hpp"


int main()
{
    std::list<unsigned int> clist;
    std::set<unsigned int> cSet;
    std::multimap<unsigned int, unsigned int> cMultiMap;
    for(int i = 0; i < 100; i++)
    {
        cMultiMap.insert({i, 0});
        unsigned int rndm = rand() %101;
        clist.push_back(rndm);
        cSet.insert(rndm);
        cMultiMap.insert({rndm, rndm});
    }
    
    for (int j = 0; j<=100; j++)
    {
        auto num = cMultiMap.equal_range(j);
        int count = 0;
        unsigned int number;
            for (auto it=num.first; it != num.second; it++)
            {
                if((*it).second != 0)
                    count++;
                number = (*it).first;
            }
            std::cout << number << " : " << count <<std::endl;
    }

    int countDiff = 0;
    for(int k = 0; k <= 100; k++)
    {
        if (cSet.count(k) == 0)
        {
            countDiff++;
            std::cout << k <<std::endl;
        }
    }
    std::cout << (100 - countDiff) << " verschiende Zahlen in der Liste" << std::endl;
    return 0;
}

