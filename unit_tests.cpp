#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "funkcija1.hpp"

TEST_CASE("Klase veikia tikslingai")
{
    Studentas Student;
    REQUIRE(Student.getName().size() == 0);
    REQUIRE(Student.getLastname().size() == 0);
    SECTION("Setteriai ir getteriai veikia tikslingai")
    {
        Student.setName("vardenis");
        Student.setLastname("pavardenis");
        Student.setFinalVid(5.6);
        Student.setFinalMed(5.7);
        Student.setKint1(0);
        REQUIRE(Student.getName() == "vardenis");
        REQUIRE(Student.getLastname() == "pavardenis");
        REQUIRE(Student.getFinalVid() == 5.6);
        REQUIRE(Student.getFinalMed() == 5.7);
        REQUIRE(Student.getKint1() == 0);
    }
}
