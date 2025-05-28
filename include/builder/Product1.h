#pragma once
#include <string>
#include <vector>
#include <iostream>

class Product1 {
public:
    std::vector<std::string> parts_;
    void ListParts() const;
};
