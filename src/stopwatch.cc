/* ---------------------------------------------------------------------------
 * StopWatch - methods and macros for precise time measurments
 * 
 * File:        stopwatch.h
 * Author:      Martin Zamba, martin.zamba@gmail.com
 * Date:        13.4.2014
 * Description: StopWatch implementation
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

#include "stopwatch.h"

long numOps;
timespec t0, t1;

void tick(void) {
    clock_gettime(1, &t0);
}

long long tock(void) {
    clock_gettime(1, &t1);
    long long t0Long = (long long) t0.tv_sec * BILION + t0.tv_nsec;
    long long t1Long = (long long) t1.tv_sec * BILION + t1.tv_nsec;
    return t1Long - t0Long;
}

void setOperationsNumber(long ops) {
    numOps = ops;
}

double getGOpsPerSecond(void) {
    return ((double) 1 / (double) (t1.tv_nsec - t0.tv_nsec)) * numOps;
}


