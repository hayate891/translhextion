#ifndef _HEX_H
#define _HEX_H

#include <algorithm>
#include <string>
#include <vector>

//takes hex string
//returns decimal value of hex string
inline int hex_value(TCHAR x)
{
	switch(x)
	{
		case '0':return 0;
		case '1':return 1;
		case '2':return 2;
		case '3':return 3;
		case '4':return 4;
		case '5':return 5;
		case '6':return 6;
		case '7':return 7;
		case '8':return 8;
		case '9':return 9;
		case 'a':
		case 'A':return 10;
		case 'b':
		case 'B':return 11;
		case 'c':
		case 'C':return 12;
		case 'd':
		case 'D':return 13;
		case 'e':
		case 'E':return 14;
		case 'f':
		case 'F':return 15;
		default:return -1;
	}
}

inline bool is_hex(std::string x)
{
	for(size_t i = 0;i<x.length();i++)
	{
		if(hex_value(x[i]) == -1)
			return false;
	}
	return true;
}

//takes int or unsigned character
//returns hex value of character
inline std::string hex_char(int c)
{
	std::string a;
	char cBuf[6];
	sprintf(cBuf, "%02X ", (unsigned char) c); 
	//a = (string) cBuf;
	a += cBuf[0];
	a += cBuf[1];
	return a.substr(0,2);
}

//takes hex string
//returns character value of hex string
inline unsigned char char_hex(std::string hex)
{
	return (unsigned char) (( hex_value(hex[0]) << 4 ) + hex_value(hex[1]));
}

//takes start, end, buffer, filestream
//returns dumps hex from start to end into buffer
void hex_dump(std::fstream& fs, std::vector<std::string>& data, long start, long end)
{
	unsigned char c;
	int i = start;
	fs.seekg(start, std::ios::beg);
	while (!fs.eof() && i != end)
	{
		c = fs.get();
		data.push_back(hex_char(c));
		i++;
	}
}

//takes start, end, buffer, filestream
//returns replaces hex from start to end into file from buffer
void hex_overwrite(std::fstream& fs, std::vector<std::string>& data, long start, long end)
{
	size_t i = start;
	size_t j = 0;
	fs.seekg(start, std::ios::beg);
	while (!fs.eof() && i != end && j < data.size())
	{
		fs.put((unsigned char) (char_hex(data[j])));
		i++;
		j++;
	}
}

#endif