#include "catch.hpp"
#include "../inc/bracketsVerification.hpp"

SCENARIO("Verify if string is balanced"){
    GIVEN("string \"{\" "){
      std::string s{"{"};
        WHEN("bracketsVerification(s) is called"){
            THEN("Expect false"){
                REQUIRE_FALSE(bracketsVerification(s));
            }

  }
  }





}
