// IntRateCalculator Test

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


// CompoundIntRateCalculator Test

//#include <iostream>
//#include "CompoundIntRateCalculator.h"
//
//int main(int argc, const char* argv[])
//{
//	if (argc != 4)
//	{
//		std::cout << "Usage: progName <interest rate> <present value> <num periods>" << std::endl;
//		return 1;
//	}
//
//	double rate = atof(argv[1]);
//	double value = atof(argv[2]);
//	int numPeriods = atoi(argv[3]);
//
//	CompoundIntRateCalculator circ(rate);
//	double result = circ.multiPeriod(value, numPeriods);
//	double contRestuls = circ.continuousCompounding(value, numPeriods);
//
//	std::cout << "Future value for multi period compounding is: " << result << std::endl;
//	std::cout << "Future value for continuous compounding is: " << contRestuls << std::endl;
//
//	std::cin.get();
//
//	return 0;
//}

// Cash Flow Calculator Test

#include <iostream>
#include "CashFlowCalculator.h"

int main(int argc, const char* argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: progName <interest rate>" << std::endl;

		std::cin.get();

		return 1;
	}

	double rate = atof(argv[1]);

	CashFlowCalculator cfc(rate);

	do
	{
		int period;
		std::cin >> period;
		if (period == -1)
			break;

		double value;
		std::cin >> value;
		cfc.addCashPayment(value, period);

	} while (true);

	double result = cfc.presentValue();

	std::cout << "The present value is: " << result << std::endl;

	std::getchar();

	return 0;
}