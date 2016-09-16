#ifndef _CHAPTER1_INTRATECALCULATOR_H
#define _CHAPTER1_INTRATECALCULATOR_H

class IntRateCalculator
{
private:
	double rate_;

public:
	IntRateCalculator();
	IntRateCalculator(double rate);
	IntRateCalculator(const IntRateCalculator& v);

	~IntRateCalculator();

	IntRateCalculator& operator=(const IntRateCalculator& v);

	double singlePeriod(double value);
};


#endif // !_CHAPTER1_INTRATECALCULATOR_H