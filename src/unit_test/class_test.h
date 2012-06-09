#ifndef CLASS_TEST_H
#define CLASS_TEST_H

#include <cxxtest/TestSuite.h>

class ClassTestSuite : public CxxTest::TestSuite
{
public:
	
	// test methods must begin with "test", otherwise cxxtestgen ignores them
	void testClass();
	void testOverload();
	void testLuaAPI();
};


#endif /* CLASS_TEST_H */
