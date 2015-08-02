#pragma once
#include "HistoryLog.h"

class Log_FaceEdgeChange :
	public HistoryLog
{
public:
	const size_t index;
	const size_t edgeIndex;
public:
	const int o;
public:
	Log_FaceEdgeChange(size_t theTarget,size_t theIndex,size_t theEdgeIndex,int theO);
	std::string toString()
	{
		char temp[256];
        sprintf(temp,"\t\t\t<Log Type=\"FaceEdgeChange\" Target=\"%d\" Index=\"%d\" EdgeIndex=\"%d\" O=\"%d\" />\n",target,index,edgeIndex,o);
		std::string out(temp);
		return out;
	};

			void operator=(const Log_FaceEdgeChange& in) 
	{
		in;
	};
public:
	~Log_FaceEdgeChange(void);
};
