/*
 * File.h
 *
 *  Created on: 6 Mar 2014
 *      Author: Peter
 */

#ifndef FILE_H
#define FILE_H

#include "Grid.h"
#include <string>

using namespace std;

class File {
public:
	static Grid * LoadDataFile(const char * strFileName);
	static void SaveDataFile(Grid * g, const char * strFileName);
	static void SaveDataFile(Grid * g, const char * strFileName, float fTime, int nIterationCount);
	static void SaveDiffFile(Grid * diff, const char * strFileName);
};

#endif /* FILE_H */
