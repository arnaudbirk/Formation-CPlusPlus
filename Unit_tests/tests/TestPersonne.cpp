#define BOOST_TEST_MODULE TestPersonne

#include <boost/test/unit_test.hpp>
#include <Personne.h>

class MyFixturePersonne : public Personne {
public:
    MyFixturePersonne():Personne(37, "BIRK", "Arnaud") {}
};


BOOST_AUTO_TEST_SUITE( TestPersonne )

BOOST_FIXTURE_TEST_CASE( TestAge, MyFixturePersonne )
{
    BOOST_CHECK_EQUAL( age, 37 );
}

BOOST_FIXTURE_TEST_CASE( TestNom, MyFixturePersonne )
{
    BOOST_CHECK( nom == "BIRK" );
}

BOOST_FIXTURE_TEST_CASE( TestPrenom, MyFixturePersonne )
{
    BOOST_CHECK( prenom == "Arnaud" );
}

BOOST_AUTO_TEST_CASE( TestGetAge )
{
    Personne p(37, "BIRK", "Arnaud");
    BOOST_CHECK( p.getAge() == 37 );
}

BOOST_AUTO_TEST_CASE( TestGetNom )
{
    Personne p(37, "BIRK", "Arnaud");
    BOOST_CHECK( p.getNom() == "BIRK" );
}

BOOST_AUTO_TEST_CASE( TestGetPrenom )
{
    Personne p(37, "BIRK", "Arnaud");
    BOOST_CHECK( p.getPrenom() == "Arnaud" );
}


BOOST_AUTO_TEST_SUITE_END()
