#include <gtest/gtest.h>
#include "builder/ConcreteBuilder1.h"

TEST(ConcreteBuilder1Test, ProductBuildParts) {
    ConcreteBuilder1 builder;
    builder.ProducePartA();
    builder.ProducePartB();
    auto* product = builder.GetProduct();
    ASSERT_EQ(product->parts_.size(), 2);
    EXPECT_EQ(product->parts_[0], "PartA1");
    EXPECT_EQ(product->parts_[1], "PartB1");
    delete product;
}
