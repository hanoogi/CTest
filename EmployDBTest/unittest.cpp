#include <gtest/gtest.h>
#include "Debug/EmployDB"

TEST(DBTestSuite, dbSearch)
{
	auto testdb = new EmployDB::EmployDB();
	testdb.
	testdb->addEmployee("emp1", "12345678");
	bool result = testdb->searchEmployee("emp1");
	EXPECT_TRUE(result);

	delete testdbl;
}

#include <iostream>
{
	std::cout << "Hello World!\n";
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}