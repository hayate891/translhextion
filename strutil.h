#ifndef _STRUTIL_H
#define _STRUTIL_H

#include <string>
#include <vector>

std::string makelength(std::string x, size_t y)
{
	if(x.length() > y)
	{
		x = x.substr(0,y-4);
		x += "... ";
		return x;
	}
	else
	{
		size_t i = 0;
		for(i = 0;i<(y - x.length());i++)
		{
			x += " ";
		}
		return x;
	}
}
bool isalpha(std::string x)
{
	if((x[0] >= 65 && x[0] <= 90) || (x[0] >= 97 && x[0] <= 122))
		return true;
	return false;
}
void error(std::string x)
{
	MessageBox(NULL,x.c_str(),0,0);
}

void stringswap(std::vector<std::string>& arr, int i, int j)
{
	std::string temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
#endif