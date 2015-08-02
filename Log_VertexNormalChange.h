#pragma once
#include "HistoryLog.h"

class Log_VertexNormalChange :
	public HistoryLog
{
public:
	const size_t index;

public:
	const float x;
	const float y;
	const float z;

public:
	Log_VertexNormalChange(size_t theTarget,size_t theIndex,float theX,float theY,float theZ);
	std::string toString()
	{
		char temp[256];
        sprintf(temp,"\t\t\t<Log Type=\"VertexNormalChange\" Target=\"%d\" Index=\"%d\" X=\"%f\" Y=\"%f\" Z=\"%f\" />\n",target,index,x,y,z);
		std::string out(temp);
		return out;
	};

		void operator=(const Log_VertexNormalChange& in) 
	{
		in;
	};

public:
	~Log_VertexNormalChange(void);
};
