#ifndef _STRUCTS_H
#define _STRUCTS_H

#include <string>

typedef struct
{
	int x;
	int y;
} intpair;

typedef struct
{
	long offset;
	char* name;
} bookmark;

struct tablevalue
{
	std::string hex;
	std::string ascii;
};

struct scriptdump
{
	long start;
	long end;
	std::string name;
};

struct longpair
{
	long x;
	long y;
};
struct relation
{
	int relate;
	long offset;
	std::string op;
	int related;
};
struct relativescandata
{
	std::string listitem;
	std::string search;
	long start;
	long end;
	std::string A;
	std::string a;
	std::string n;
};
struct linkedvalue
{
	std::string hex;
	int links;
};
struct RelativeOffsets
{
	unsigned char a;
	bool ba;
	unsigned char A;
	bool bA;
	unsigned char n;
	bool bn;
};

#endif