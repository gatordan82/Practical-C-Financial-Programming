//#include <iostream>
//#include "IntRateCalculator.h"
//
//int main(int argc, const char* argv[])
//{
//	if (argc != 3)
//	{
//		std::cout << "Usage: progName <interest rate> <value>" << std::endl;
//		return 1;
//	}
//
//	double rate = atof(argv[1]);
//	double value = atof(argv[2]);
//
//	IntRateCalculator irc(rate);
//	double res = irc.singlePeriod(value);
//
//	std::cout << "Value after one period is: " << res << std::endl;
//
//	std::cin.get();
//
//	return 0;
//}

#include <iostream>
#include "CompoundIntRateCalculator.h"

int main(int argc, const char* argv[])
{
	if (argc != 4)
	{
		std::cout << "Usage: progName <interest rate> <present value> <num periods>" << std::endl;
		return 1;
	}

	double rate = atof(argv[1]);
	double value = atof(argv[2]);
	int numPeriods = atoi(argv[3]);

	CompoundIntRateCalculator circ(rate);
	double result = circ.multiPeriod(value, numPeriods);
	double contRestuls = circ.continuousCompounding(value, numPeriods);

	std::cout << "Future value for multi period compounding is: " << result << std::endl;
	std::cout << "Future value for continuous compounding is: " << contRestuls << std::endl;

	std::cin.get();

	return 0;
}