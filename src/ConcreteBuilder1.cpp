#include "builder/ConcreteBuilder1.h"

ConcreteBuilder1::ConcreteBuilder1() { Reset(); }
ConcreteBuilder1::~ConcreteBuilder1() { delete product; }

void ConcreteBuilder1::Reset() {
    product = new Product1();
}

void ConcreteBuilder1::ProducePartA() const {
    product->parts_.push_back("PartA1");
}
void ConcreteBuilder1::ProducePartB() const {
    product->parts_.push_back("PartB1");
}
void ConcreteBuilder1::ProducePartC() const {
    product->parts_.push_back("PartC1");
}

Product1* ConcreteBuilder1::GetProduct() {
    Product1* result = product;
    Reset();
    return result;
}
