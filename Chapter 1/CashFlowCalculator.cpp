#include "CashFlowCalculator.h"
#include <cmath>


double CashFlowCalculator::presentValue(double futureValue, int timePeriod)
{
	double pv = futureValue / pow(1 + rate_, timePeriod);
	return pv;
}

CashFlowCalculator::CashFlowCalculator() 
	: rate_{ 0.0 }
{
}

CashFlowCalculator::CashFlowCalculator(double rate) 
	: rate_{ rate }
{
}

CashFlowCalculator::CashFlowCalculator(const CashFlowCalculator& v) 
	: rate_{ v.rate_ }, cashPayments_{ v.cashPayments_ }, timePeriods_{ v.timePeriods_ }
{
}


CashFlowCalculator::~CashFlowCalculator()
{
}

CashFlowCalculator& CashFlowCalculator::operator=(const CashFlowCalculator& v)
{
	if (&v != this)
	{
		cashPayments_ = v.cashPayments_;
		timePeriods_ = v.timePeriods_;
		rate_ = v.rate_;
	}

	return *this;
}

void CashFlowCalculator::addCashPayment(double value, int timePeriod)
{
	cashPayments_.push_back(value);
	timePeriods_.push_back(timePeriod);
}

double CashFlowCalculator::presentValue()
{
	double total = 0.0;

	for (int i = 0; i < cashPayments_.size(); ++i)
		total += presentValue(cashPayments_[i], timePeriods_[i]);

	return total;
}
