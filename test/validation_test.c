#include <ctest.h>
#include "deposit.h"

CTEST(vapod_test, wrong_aod_pod)
{
	const int aod = 2;
    const int pod = 366;

    const int result = vapod(aod, pod);

    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(vapod_test, wrong_aod)
{
	const int aod = 2;
    const int pod = 365;

    const int result = vapod(aod, pod);

    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(vapod_test, wrong_pod)
{
	const int aod = 15000;
    const int pod = 367;

    const int result = vapod(aod, pod);

    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}

CTEST(vapod_test, wrong_no)
{
	const int aod = 20000;
    const int pod = 1;

    const int result = vapod(aod, pod);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
