#include <gtest/gtest.h>
#include "db.h"

TEST(DBTestSuite, dbSearch)
{
	auto testdb = new EmployDB();
	EXPECT_EQ(testdb->add(1, 2), 3);

	delete testdb;
}

#include <iostream>
int main(int argc, char **argv)
{
	std::cout << "Hello World!\n";
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}