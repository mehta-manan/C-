#include <iostream>
#include <vector>
#include <unordered_map>

int main()
{
    std::vector<int> values = {1, 2, 3, 4, 5};

    // traditional loop to iterate over the collection
    // not a cleaner code as i is kind of redundant
    // all data structures are not linear like sets, maps, trees,.. hence we need iterators and range based loops for them
    for (int i = 0; i < values.size(); i++)
    {
        std::cout << values[i] << std::endl;
    }

    // range based for loop since C++11
    // cleaner code
    // this code works as vector class provides implementation for begin and end value and returns and iterator
    // read-only
    // cant change begin and end of collection
    // short-hand for below code
    for (int value : values)
    {
        std::cout << value << std::endl;
    }

    // manipulate the iterator position and collection values - read +  write
    // explicit begin and end
    for (std::vector<int>::iterator it = values.begin(); it != values.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    std::unordered_map<std::string, int> map;
    map["Cherno"] = 5;
    map["C++"] = 2;

    using ScoreMap = std::unordered_map<std::string, int>;
    using ScoreMapConstiter = ScoreMap::const_iterator;

    for (ScoreMapConstiter it = map.begin(); it != map.end(); it++)
    {
        // std::pair <string, int>
        auto& key = it->first; // ->
        auto& value = it->second;
        std::cout << key << " " << value << std::endl;
    }

    // range loop for above
    for( auto kv : map)
    {
        auto& key = kv.first; //.
        auto& value = kv.second;
        std::cout << key << " " << value << std::endl;
    }

    // more cleaner c++17
    for (auto& [key, value] : map)
    {
        std::cout << key << " " << value << std::endl;
    }
    std::cin.get();
}