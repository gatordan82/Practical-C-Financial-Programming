#ifndef _CHAPTER1_CASHFLOWCALCULATOR_H
#define _CHAPTER1_CASHFLOWCALCULATOR_H

#include <vector>

class CashFlowCalculator
{
private:
	/// containter of cash payments
	std::vector<double> cashPayments_;

	/// container of time periods, aligned with payments
	std::vector<int> timePeriods_;

	/// simple interest rate
	double rate_;

	/** \brief Calculates the present value for a single payment
	  *	\param futureValue is the value of the payment
	  *	\param timePeriod is how many periods in the future
	  *	\return present value of future payment
	
	  */
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