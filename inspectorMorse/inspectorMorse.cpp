#include "stdafx.h"
int f(string i){const char*c="1322131421130102123023121211210120032121323101112232";int j=0,h[2]={0};while(j<sizeof(i)/28)*h+=c[i[j]-97],h[1]+=c[i[j++]-71];return*h>h[1];}
int main()
{
	string input;
	cin >> input;
	return f(input);
}