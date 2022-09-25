#ifndef __헤더_H__
#define __헤더_H__

#include<cstdio>
#include<cstring>

namespace PRINT
{
	enum
	{
		LEN=100
	};
}

class Printer
{
	char text[PRINT::LEN];
public:
	void Init(const char* a);	//	Init 함수는 a를 바꿀 수 없다
	void print();
};

inline void Printer::Init(const char* a)
{
	strcpy(text, a);
}

inline void Printer::print()
{
	printf("%s\n", text);
}

#endif
