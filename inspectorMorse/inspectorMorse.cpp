// inspectorMorse.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
int main()
{
	const int dotCount[] = {1,3,2,22,1,3,1,4,2,1,1,3,0,1,0,2,1,2,3,0,2,3,1,2,1,2};
	const int dashCount[] = {1,1,2,1,0,1,2,0,0,3,2,1,2,1,3,2,3,1,0,1,1,1,2,2,3,2};
	std::cout << "Enter String:\n";
	std::string input;
	std::cin >> input;
	int inputsHeavyness[2] = { 0 };
	for(int i = 0;i < sizeof(input)/sizeof(std::string);i++)
	{
		inputsHeavyness[0] += dotCount[input[i] - 'a'];
		inputsHeavyness[1] += dashCount[input[i] - 'a'];
	}
	if (inputsHeavyness[0] > inputsHeavyness[1])
	{
		std::cout << "Dot Heavy\n";
	}
	else
	{
		std::cout << "Dash Heavy or Neutral\n";
	}
	return 0;
}

