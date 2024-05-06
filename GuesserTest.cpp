/**
 * Unit Tests for the class
**/

#include <gtest/gtest.h>
#include "Guesser.h"

class GuesserTest : public ::testing::Test
{
	protected:
		GuesserTest(){} //constructor runs before each test
		virtual ~GuesserTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

// String Matches and remaining equal 3
TEST(GuesserTest, strings_match)
{
    string secret = "match";
    string guess = "match";
    Guesser guesser(secret);

	ASSERT_EQ(guesser.remaining(), 3);
    ASSERT_TRUE(guesser.match(guess));

}

// Not match strings
TEST(GuesserTest, not_matching)
{

    string secret = "match";
    string guess = "MatcH";
    Guesser guesser(secret);

    // Act & Assert
    ASSERT_EQ(guesser.match(guess), false); // Ensure match returns false for non-matching guess
}

