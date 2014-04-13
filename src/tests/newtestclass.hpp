/*
 * File:   newtestclass.hpp
 * Author: m
 *
 * Created on 13.4.2014, 16:18:13
 */

#ifndef NEWTESTCLASS_HPP
#define	NEWTESTCLASS_HPP

#include <cppunit/extensions/HelperMacros.h>

class newtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass);

    CPPUNIT_TEST(testMethod);
    CPPUNIT_TEST(testFailedMethod);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass();
    virtual ~newtestclass();
    void setUp();
    void tearDown();

private:
    void testMethod();
    void testFailedMethod();
};

#endif	/* NEWTESTCLASS_HPP */

