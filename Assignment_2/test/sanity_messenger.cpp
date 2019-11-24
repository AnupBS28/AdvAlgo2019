#include "../src/the_messenger_implementation.cpp"
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

TEST_CASE("Case 1") {
    the_messenger_implementation obj;
    int result = obj.solve(3, 2, 4, "pqpq");

    CHECK(result == 8);
}

TEST_CASE("Case 2") {
    the_messenger_implementation obj;
    int result = obj.solve(3, 1, 4, "qqqq");

    CHECK(result == 5);
}


TEST_CASE("Case 3") {
    the_messenger_implementation obj;
    int result = obj.solve(3, 2, 1, "p");

    CHECK(result == 3);
}

TEST_CASE("Case 4") {
    the_messenger_implementation obj;
    int result = obj.solve(3, 1, 2, "pq");

    CHECK(result == 6);
}

TEST_CASE("Case 5") {
    the_messenger_implementation obj;
    int result = obj.solve(3, 2, 2, "pp");

    CHECK(result == 5);
}

TEST_CASE("Case 6") {
    the_messenger_implementation obj;
    int result = obj.solve(3, 1, 3, "pqp");

    CHECK(result == 7);
}

TEST_CASE("Case 7") {
    the_messenger_implementation obj;
    int result = obj.solve(3, 2, 2, "pq");

    CHECK(result == 6);
}

TEST_CASE("Case 8") {
    the_messenger_implementation obj;
    int result = obj.solve(3, 1, 0, "");

    CHECK(result == 0);
}

TEST_CASE("Case 9") {
    the_messenger_implementation obj;
    int result = obj.solve(3, 1, 8, "hel lehe");

    CHECK(result == 15);
}

TEST_CASE("Case 10") {
    the_messenger_implementation obj;
    int result = obj.solve(3, 1, 6, "q wq m");

    CHECK(result == 13);
}

TEST_CASE("Case 11") {
    the_messenger_implementation obj;
    int result = obj.solve(3, 1,5, "AbcAb");

    CHECK(result == 10);
}

TEST_CASE("Case 12") {
    the_messenger_implementation obj;
    int result = obj.solve(3, 1, 4, "abc ");

    CHECK(result == 12);
}


TEST_CASE("Case 13") {
    the_messenger_implementation obj;
    int result = obj.solve(3, 1, 5, "hel l");

    CHECK(result == 13);
}
TEST_CASE("Case 14") {
    the_messenger_implementation obj;
    int result = obj.solve(3, 1, 6, "hel le");//hel lehe

    CHECK(result == 14);
}
TEST_CASE("Case 15") {
    the_messenger_implementation obj;
    int result = obj.solve(3, 1, 4, "abc ");

    CHECK(result == 12);
}
TEST_CASE("Case 16") {
    the_messenger_implementation obj;
    int result = obj.solve(3, 1, 4, "abc ");

    CHECK(result == 12);
}
TEST_CASE("Case 17") {
    the_messenger_implementation obj;
    int result = obj.solve(2,5,6, "abcdab");

    CHECK(result == 12);
}

TEST_CASE("Case 18") {
    the_messenger_implementation obj;
    int result = obj.solve(2,5,6, "aaaaaa");

    CHECK(result == 11);
}

TEST_CASE("Case 19") {
    the_messenger_implementation obj;           // aaaa      msg::
    int result = obj.solve(2,5,6, "aaaabc"); // 2+ 2 + 2+ 2

    CHECK(result == 12);
}
