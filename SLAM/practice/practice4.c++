//For loop

#include <iostream>
#include <vector>
#include <map>

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        std::cout << i << std::endl;
    }

    for (int i=0; i<vec.size(); i++)
    {
        std::cout << vec[i] << std::endl;
    }
    for (const auto& i : vec)
    {
        std::cout << i << std::endl;
    }   


    std::map<std::string, int> map;
    map["One"] = 1;
    map["Two"] = 2;
    map["Three"] = 3;
    map["Four"] = 4;
    map["Five"] = 5;

    for (const auto& [first, second] : map)
    {
        std::cout << second << std::endl;
    }   
}