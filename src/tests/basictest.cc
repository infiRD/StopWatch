/* ---------------------------------------------------------------------------
 * StopWatch - methods and macros for precise time measurments
 * 
 * File:        basictest.cc
 * Author:      Martin Zamba, martin.zamba@gmail.com
 * Date:        13.4.2014
 * Description: StopWatch library basic test
 * ---------------------------------------------------------------------------
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 * ---------------------------------------------------------------------------
 */

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cmath>

#include "stopwatch.h"

#define MAG 500

using namespace std;

/*
 * Simple C++ Test Suite
 */

void test1() {
    cout << "basictest test 1" << endl;

    __tick;

    long long sum = 0;
    long long n = pow(MAG, 3);
    __setOps(n);

    for (int i = 0; i < MAG; i++) {
        for (int j = 0; j < MAG; j++) {
            for (int k = 0; k < MAG; k++) {
                sum++;
            }
        }
    }

    long long ns = __tock;

    if (sum != n) {
        cerr << "%TEST_FAILED% testname=test1 (basictest) message=sum doesn't "
                "equal to pre-specified value" << endl;
        exit(EXIT_FAILURE);
    }

    fprintf(stdout, "Execution took %lld ns\n", ns);
    fprintf(stdout, "Performance is %.2f Gops\n", __gops);
}

int main(int argc, char** argv) {
    cout << "%SUITE_STARTING% basictest" << endl;
    cout << "%SUITE_STARTED%" << endl;

    cout << "%TEST_STARTED% test1 (basictest)" << endl;
    test1();
    cout << "%TEST_FINISHED% test1 (basictest)" << endl;

    cout << "%SUITE_FINISHED% " << endl;

    return (EXIT_SUCCESS);
}

