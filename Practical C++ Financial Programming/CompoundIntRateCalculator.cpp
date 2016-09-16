#include "CompoundIntRateCalculator.h"
#include <cmath>


CompoundIntRateCalculator::CompoundIntRateCalculator() : rate_{ 0.0 }
{
}

CompoundIntRateCalculator::CompoundIntRateCalculator(double rate) : rate_{ rate }
{
}

CompoundIntRateCalculator::CompoundIntRateCalculator(const CompoundIntRateCalculator& v) : rate_{ v.rate_ }
{
}


CompoundIntRateCalculator::~CompoundIntRateCalculator()
{
}

CompoundIntRateCalculator& CompoundIntRateCalculator::operator=(const CompoundIntRateCalculator& v)
{
	if (&v != this)
		rate_ = v.rate_;

	return *this;
}


double CompoundIntRateCalculator::multiPeriod(double value, int numPeriods)
{
	return value * pow(1 + rate_, numPeriods);
}

double CompoundIntRateCalculator::continuousCompounding(double value, int numPeriods)
{
	return value * exp(rate_ * numPeriods);
}

