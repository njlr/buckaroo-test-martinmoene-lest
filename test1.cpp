#include <gtest/gtest.h>
#include <lest.hpp>

TEST(lest, basics) {

  using namespace std;

  const lest::test specification[] = {
    CASE("Empty string has length zero (succeed)") {
      EXPECT(0 == string(  ).length());
      EXPECT(0 == string("").length());
      EXPECT_NOT(0 < string("").length());
    }
  };

  ASSERT_TRUE(lest::run(specification) == 0);
}
