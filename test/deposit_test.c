#include <ctest.h>
#include "deposit.h"

CTEST(income_test, pod_0_30)
{
	const int aod = 20000;
	const int pod = 30;

	const int result = income_deposit(aod, pod);

	const int expected = 18000;
	ASSERT_EQUAL(expected, result);
}

CTEST(income_test, pod_31_120_aod_min)
{
	const int aod = 55000;
	const int pod = 31;

	const int result = income_deposit(aod, pod);

	const int expected = 56100;
	ASSERT_EQUAL(expected, result);
}

CTEST(income_test, pod_31_120_aod_max)
{
	const int aod = 181000;
	const int pod = 120;

	const int result = income_deposit(aod, pod);

	const int expected = 186430;
	ASSERT_EQUAL(expected, result);
}

CTEST(income_test, pod_120_240_aod_min)
{
	const int aod = 43000;
	const int pod = 121;

	const int result = income_deposit(aod, pod);

	const int expected = 45580;
	ASSERT_EQUAL(expected, result);
}

CTEST(income_test, pod_120_240_aod_max)
{
	const int aod = 1000000;
	const int pod = 240;

	const int result = income_deposit(aod, pod);

	const int expected = 1080000;
	ASSERT_EQUAL(expected, result);
}

CTEST(income_test, pod_240_365_aod_min)
{
	const int aod = 99999;
	const int pod = 246;

	const int result = income_deposit(aod, pod);

	const int expected = 111987.00;
	ASSERT_EQUAL(expected, result);
}

CTEST(income_test, pod_240_365_aod_max)
{
	const int aod = 243532;
	const int pod = 365;

	const int result = income_deposit(aod, pod);

	const int expected = 280057.00;
	ASSERT_EQUAL(expected, result);
}
