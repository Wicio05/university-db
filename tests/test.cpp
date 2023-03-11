#include <gtest/gtest.h>
#include "../src/database.hpp"
#include "../src/student.hpp"

TEST(CheckStructure, CanAddStudentToDB)
{
    Student adam
    {
        "Adam", 
        "Kowalski", 
        "ul. Dobra 134, 00-200 Warszawa",
        123456,
        "11223344556",
        Gender::Male
    };

    Database db;
    EXPECT_TRUE(db.add(adam));
    EXPECT_FALSE(db.add(adam));
}