#include <gtest/gtest.h>
#include "database.hpp"
#include "student.hpp"

// // Demonstrate some basic assertions.
// TEST(HelloTest, BasicAssertions) {
//   // Expect two strings not to be equal.
//   EXPECT_STRNE("hello", "world");
//   // Expect equality.
//   EXPECT_EQ(7 * 6, 42);
// }
struct DatabaseTest : ::testing::Test{
  Database db;
};


TEST_F(DatabaseTest, DisplayEmptyDb)
{

auto content = db.show();
auto expected = "";
EXPECT_EQ(content,expected);
}

TEST_F(DatabaseTest, DisplayNonEmptyDb)
{
  Student adam{
    "Adam", 
    "Kowalski", 
    "ul.Dobra 134, 00-200 Warszawa",
    123456,
    "11223344557",
    Gender::Male
    };

db.add(adam);
//check adding the same person twice

auto content = db.show();
auto expected = "Adam Kowalski; ul.Dobra 134, 00-200 Warszawa; 123456; 11223344557; Male" ;
EXPECT_EQ(content,expected);
}