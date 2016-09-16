#include "IntRateCalculator.h"

IntRateCalculator::IntRateCalculator() : rate_{ 0 }
{
}

IntRateCalculator::IntRateCalculator(double rate) : rate_{ rate }
{
}

IntRateCalculator::IntRateCalculator(const IntRateCalculator& v) : rate_{ v.rate_ }
{
}

IntRateCalculator::~IntRateCalculator()
{
}

IntRateCalculator& IntRateCalculator::operator=(const IntRateCalculator& v)
{
	if (&v != this)
		rate_ = v.rate_;

	return *this;
}

double IntRateCalculator::singlePeriod(double value)
{
	return value * (1 + rate_);
}



