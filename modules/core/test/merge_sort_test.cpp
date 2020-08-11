//FILENAME: test.cpp
#include "stdafx.h"
#define BOOST_TEST_MODULE isEq Test
#include <boost/test/included/unit_test.hpp>

#include "merge_sort.h"

BOOST_AUTO_TEST_CASE(isEq_test) {
    CRectangle rect;
    rect.set_values(5, 5);
    BOOST_CHECK_EQUAL(rect.isEq(), true);
    rect.set_values(23, 9);
    BOOST_CHECK_EQUAL(rect.isEq(), false);
}