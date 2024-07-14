#include "gtest/gtest.h"

TEST(TestGroupName, Subtest_1) {
ASSERT_TRUE(1 == 1);
}

TEST(TestGroupName, Subtest_2) {
ASSERT_FALSE('b' == 'b');
std::cout << "continue test after failure" << std::endl;
}