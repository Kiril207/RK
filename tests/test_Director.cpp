#include <gtest/gtest.h>
#include "builder/Director.h"
#include "builder/ConcreteBuilder1.h"

TEST(DirectorTest, BuildFullFeaturedProduct) {
    Director director;
    ConcreteBuilder1 builder;
    director.set_builder(&builder);
    director.BuildFullFeaturedProduct();
    auto* p = builder.GetProduct();
    ASSERT_EQ(p->parts_.size(), 3);
    EXPECT_EQ(p->parts_[0], "PartA1");
    EXPECT_EQ(p->parts_[1], "PartB1");
    EXPECT_EQ(p->parts_[2], "PartC1");
    delete p;
}
