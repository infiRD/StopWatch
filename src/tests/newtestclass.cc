/*
 * File:   newtestclass.cc
 * Author: m
 *
 * Created on 13.4.2014, 16:18:14
 */

#include "newtestclass.hpp"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

void newtestclass::testMethod() {
    CPPUNIT_ASSERT(true);
}

void newtestclass::testFailedMethod() {
    CPPUNIT_ASSERT(false);
}

