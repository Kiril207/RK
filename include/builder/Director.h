#pragma once
#include "Builder.h"

class Director {
private:
    Builder* builder;
public:
    void set_builder(Builder* builder);
    void BuildMinimalViableProduct();
    void BuildFullFeaturedProduct();
};
