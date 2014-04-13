/*
 * File:   newtestclass1.hpp
 * Author: m
 *
 * Created on 13.4.2014, 17:40:59
 */

#ifndef NEWTESTCLASS1_HPP
#define	NEWTESTCLASS1_HPP

#include <cppunit/extensions/HelperMacros.h>

class newtestclass1 : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass1);

    CPPUNIT_TEST(testMethod);
    CPPUNIT_TEST(testFailedMethod);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass1();
    virtual ~newtestclass1();
    void setUp();
    void tearDown();

private:
    void testMethod();
    void testFailedMethod();
};

#endif	/* NEWTESTCLASS1_HPP */

