/* ---------------------------------------------------------------------------
 * StopWatch - methods and macros for precise time measurments
 * 
 * File:        stopwatch.h
 * Author:      Martin Zamba, martin.zamba@gmail.com
 * Date:        13.4.2014
 * Description: StopWatch Header file
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

#ifndef STOPWATCH_H
#define	STOPWATCH_H

#include <time.h>

/**
 * Macro which will start the stopwatch
 * 
 */
#define __tick tick()

/**
 * Macro which will stop the stopwatch and return measured time
 * 
 * @return measured time difference in nano-seconds
 */
#define __tock tock()

/**
 * Macro which will return giga-operations-per-second. Number of operations 
 * has to be specified by call __setOps(number_of_ops)
 * 
 * @return double value representing giga-operations-per-second
 */
#define __gops getGOpsPerSecond()


/**
 * Macro which will set number of operations which can be used afterwards
 * by calling __gops which returns giga-operations-per-second
 * 
 */
#define __setOps(ops) setOperationsNumber(ops)

/**
 * One bilion constant = 1.000.000.000 (long long)
 */
#define BILION 1000000000LL

/**
 * Will start the stopwatch
 */
void tick(void);

/**
 * Will stop the stopwatch and return measured time
 * @return measured time difference in nano-seconds
 */
long long tock(void);

/**
 * Will return giga-operations-per-second. Number of operations 
 * has to be specified by call setOperationsNumber(number_of_ops)
 * 
 * @return double value representing giga-operations-per-second
 */
double getGOpsPerSecond();

/**
 * Will set number of operations which can be used afterwards
 * by calling __gops which returns giga-operations-per-second
 * 
 */
void setOperationsNumber(long long ops);

#endif	/* STOPWATCH_H */

