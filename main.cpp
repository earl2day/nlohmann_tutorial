#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

int main(int argc,char** argv)
{
    std::fstream json_file(argv[1]);
    
    try
    {
        json jason_data = json::parse(json_file);

        int entry_size = jason_data.size();

        std::cout << "entry size=" << entry_size << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Parse exception on JSON file" << std::endl;
        return -1;
    }

    return 0;
}