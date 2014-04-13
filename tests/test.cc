/* 
 * File:   libraryPresenceTest.cc
 * Author: m
 *
 * Created on 13.4.2014, 3:52:08
 */

#include <stdlib.h>
#include <iostream>

/*
 * Simple C++ Test Suite
 */

void test1() {
    std::cout << "libraryPresenceTest test 1" << std::endl;
}

void test2() {
    std::cout << "libraryPresenceTest test 2" << std::endl;
//    std::cout << "%TEST_FAILED% time=0 testname=test2 (libraryPresenceTest) message=error message sample" << std::endl;
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% libraryPresenceTest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% test1 (libraryPresenceTest)" << std::endl;
    test1();
    std::cout << "%TEST_FINISHED% time=0 test1 (libraryPresenceTest)" << std::endl;

    std::cout << "%TEST_STARTED% test2 (libraryPresenceTest)\n" << std::endl;
    test2();
    std::cout << "%TEST_FINISHED% time=0 test2 (libraryPresenceTest)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

