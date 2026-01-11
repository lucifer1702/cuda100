#include <gtest/gtest.h>

bool IsEven(int num) {
  return num % 2 == 0;
}

TEST(TestingCode, IsEvenTest) {
  ASSERT_TRUE(IsEven(4));    // Assertion succeeds since 4 is even
  ASSERT_FALSE(IsEven(7));   // Assertion succeeds since 7 is not even
  ASSERT_TRUE(IsEven(5));    // Assertion fails since 5 is not even
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
