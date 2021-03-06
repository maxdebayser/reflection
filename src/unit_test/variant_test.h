#ifndef VARIANT_TEST_H
#define VARIANT_TEST_H

#include "variant.h"
#include <cxxtest/TestSuite.h>

class VariantTestSuite : public CxxTest::TestSuite
{
public:
	
	// test methods must begin with "test", otherwise cxxtestgen ignores them

	void testInvalid();
	void testValue();
	void testConversions();
	void testNonCopyable();
	void testBaseConversion();
};


#endif /* VARIANT_TEST_H */
