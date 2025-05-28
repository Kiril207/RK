#pragma once
#include "Product1.h"
#include "Builder.h"

class ConcreteBuilder1 : public Builder {
private:
    Product1* product;
public:
    ConcreteBuilder1();
    ~ConcreteBuilder1();
    void Reset();
    void ProducePartA() const override;
    void ProducePartB() const override;
    void ProducePartC() const override;
    Product1* GetProduct();
};
