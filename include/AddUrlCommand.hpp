// AddUrlCommand.hpp
#pragma once
#include <iostream>

class AddUrlCommand 
{
public:
    // Override the execute method from AbstractCommand to define specific behavior for adding a URL to a BloomFilter.
    void execute(std::string &url, BloomFilter &bloomFilter) override;
    // Static method to return a unique identifier for this command type.
    static std::string getId();
    // Static variable to handle the automatic registration of the command with the CommandFactory.
    // The actual registration logic is implemented in the corresponding .cpp file.
    static bool registered;
};