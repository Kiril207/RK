#include <gtest/gtest.h>
#include "builder/Product1.h"
#include <sstream>

TEST(Product1Test, ListPartsOutput) {
    Product1 p;
    p.parts_ = {"PartA", "PartB"};
    testing::internal::CaptureStdout();
    p.ListParts();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("PartA"), std::string::npos);
    EXPECT_NE(output.find("PartB"), std::string::npos);
}
