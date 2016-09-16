#ifndef _CHAPTER1_COMPOUNDINTRATECALCULATOR_H
#define _CHAPTER1_COMPOUNDINTRATECALCULATOR_H


class CompoundIntRateCalculator
{
private:
	double rate_;

public:
	CompoundIntRateCalculator();
	CompoundIntRateCalculator(double rate);
	CompoundIntRateCalculator(const CompoundIntRateCalculator& v);

	~CompoundIntRateCalculator();

	CompoundIntRateCalculator& operator=(const CompoundIntRateCalculator& v);

	double multiPeriod(double value, int numPeriods);
	double continuousCompounding(double value, int numPeriods);
};


#endif // !_CHAPTER1_COMPOUNDINTRATECALCULATOR_H
