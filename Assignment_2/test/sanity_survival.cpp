#include "../src/survival_of_the_fittest_implementation.cpp"
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

TEST_CASE("Case 1") {
    double range = pow(10, -9);
    survival_of_the_fittest_implementation obj;
    vector<double> result = obj.solve(1, 1, 1);

    CHECK(result[0]-range <= 0.333333333333);
    CHECK(result[0]+range >= 0.333333333333);
    CHECK(result[1]-range <= 0.333333333333);
    CHECK(result[1]+range >= 0.333333333333);
    CHECK(result[2]-range <= 0.333333333333);
    CHECK(result[2]+range >= 0.333333333333);
}

TEST_CASE("Case 2") {
    double range = pow(10, -9);
    survival_of_the_fittest_implementation obj;
    vector<double> result = obj.solve(1, 1, 2);

    CHECK(result[0]-range <= 0.133333333333);
    CHECK(result[0]+range >= 0.133333333333);
    CHECK(result[1]-range <= 0.533333333333);
    CHECK(result[1]+range >= 0.533333333333);
    CHECK(result[2]-range <= 0.333333333333);
    CHECK(result[2]+range >= 0.333333333333);
}


TEST_CASE("Case 3") {
    double range = pow(10, -9);
    survival_of_the_fittest_implementation obj;
    vector<double> result = obj.solve(3,8,5);

    CHECK(result[0]-range <= 0.693513959631);
    CHECK(result[0]+range >= 0.693513959631);
    CHECK(result[1]-range <= 0.235403368765);
    CHECK(result[1]+range >= 0.235403368765);
    CHECK(result[2]-range <= 0.071082671604);
    CHECK(result[2]+range >= 0.071082671604);
}


TEST_CASE("Case 4") {
    double range = pow(10, -9);
    survival_of_the_fittest_implementation obj;
    vector<double> result = obj.solve(10, 5, 8);

    CHECK(result[0]-range <= 0.102885721885);
    CHECK(result[0]+range >= 0.102885721885);
    CHECK(result[1]-range <= 0.430416046830);
    CHECK(result[1]+range >= 0.430416046830);
    CHECK(result[2]-range <= 0.466698231286);
    CHECK(result[2]+range >= 0.466698231286);
}

TEST_CASE("Case 5") {
    double range = pow(10, -9);
    survival_of_the_fittest_implementation obj;
    vector<double> result = obj.solve(100, 100, 100);

    CHECK(result[0]-range <= 0.333333333333);
    CHECK(result[0]+range >= 0.333333333333);
    CHECK(result[1]-range <= 0.333333333333);
    CHECK(result[1]+range >= 0.333333333333);
    CHECK(result[2]-range <= 0.333333333333);
    CHECK(result[2]+range >= 0.333333333333);
}


TEST_CASE("Case 6") {
    double range = pow(10, -9);
    survival_of_the_fittest_implementation obj;
    vector<double> result = obj.solve(100, 10, 10);

    CHECK(result[0]-range <= 0.000001783962);
    CHECK(result[0]+range >= 0.000001783962);
    CHECK(result[1]-range <= 0.000166367347);
    CHECK(result[1]+range >= 0.000166367347);
    CHECK(result[2]-range <= 0.999831848691);
    CHECK(result[2]+range >= 0.999831848691);
}
