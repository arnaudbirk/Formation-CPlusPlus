#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE TestCalcul

#include <boost/test/unit_test.hpp>
#include <Calcul.h>


BOOST_AUTO_TEST_SUITE( TestCalcul )

BOOST_AUTO_TEST_CASE( somme )
{
    Calcul c;
    BOOST_CHECK_EQUAL( c.somme(3,4), 7 );
}

BOOST_AUTO_TEST_CASE( soustraction )
{
    Calcul c;
    BOOST_CHECK_EQUAL( c.soustraction(4,2), 2 );
}

BOOST_AUTO_TEST_SUITE_END()
