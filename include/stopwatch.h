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

#define __tick tick()
#define __tock tock()
#define __gops getGOpsPerSecond()
#define __setOps(ops) setOperationsNumber(ops)

#define BILION 1000000000LL

void tick(void);
long long tock(void);
void setOperationsNumber(long ops);
double getGOpsPerSecond();

#endif	/* STOPWATCH_H */

