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

TEST(CheckStructure, CanAddStudentToDb_Req1_Req2) {
    Student adam{
    "Adam", 
    "Kowalski", 
    "ul.Dobra 134, 00-200 Warszawa",
    123456,
    "11223344557",
    Gender::Male
    };
    Database db;
    EXPECT_TRUE(db.add(adam));
    EXPECT_FALSE(db.add(adam));
    
}

TEST(DisplayDb, DisplayEmptyDb)
{
Database db;
auto content = db.show();
auto expected = "";
EXPECT_EQ(content,expected);
db.display();
}

// TEST(DisplayDb, DisplayNonEmptyDb)
// {
// Database db;

//   Student adam{
//     "Adam", 
//     "Kowalski", 
//     "ul.Dobra 134, 00-200 Warszawa",
//     123456,
//     "11223344557",
//     Gender::Male
//     };
  
//     EXPECT_TRUE(db.add(adam));

// db.display();
// }