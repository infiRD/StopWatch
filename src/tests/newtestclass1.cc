/*
 * File:   newtestclass1.cc
 * Author: m
 *
 * Created on 13.4.2014, 17:41:00
 */

#include "newtestclass1.hpp"

CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass1);

newtestclass1::newtestclass1() {
}

newtestclass1::~newtestclass1() {
}

void newtestclass1::setUp() {
}

void newtestclass1::tearDown() {
}

void newtestclass1::testMethod() {
    
    CPPUNIT_ASSERT(true);
}

void newtestclass1::testFailedMethod() {
//    CPPUNIT_ASSERT(false);
}

