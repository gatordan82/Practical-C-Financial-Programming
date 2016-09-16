#ifndef _CHAPTER1_CASHFLOWCALCULATOR_H
#define _CHAPTER1_CASHFLOWCALCULATOR_H

#include <vector>

class CashFlowCalculator
{
private:
	std::vector<double> cashPayments_;
	std::vector<int> timePeriods_;
	double rate_;

	double presentValue(double futureValue, int timePeriod);

public:
	CashFlowCalculator();
	CashFlowCalculator(double rate);
	CashFlowCalculator(const CashFlowCalculator& v);

	~CashFlowCalculator();

	CashFlowCalculator& operator=(const CashFlowCalculator& v);

	void addCashPayment(double value, int timePeriod);
	double presentValue();
};


#endif // !_CHAPTER1_CASHFLOWCALCULATOR_H