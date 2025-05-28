#include "builder/Director.h"

void Director::set_builder(Builder* builder) {
    this->builder = builder;
}
void Director::BuildMinimalViableProduct() {
    builder->ProducePartA();
}
void Director::BuildFullFeaturedProduct() {
    builder->ProducePartA();
    builder->ProducePartB();
    builder->ProducePartC();
}
