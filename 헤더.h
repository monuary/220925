#ifndef __���_H__
#define __���_H__

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
	void Init(const char* a);	//	Init �Լ��� a�� �ٲ� �� ����
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
