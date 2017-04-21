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
