#ifndef FUNCTION_TEST_H
#define FUNCTION_TEST_H

#include <cxxtest/TestSuite.h>

class FunctionTestSuite : public CxxTest::TestSuite
{
public:
	
	// test methods must begin with "test", otherwise cxxtestgen ignores them
	void testFunction();
};


#endif /* FUNCTION_TEST_H */
