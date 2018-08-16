#include "../inc/bracketsVerification.hpp"
#include "catch.hpp"

SCENARIO("Verify if string's brackets are balanced") {
  GIVEN("string \"{\" ") {
    std::string s{"{"};
    WHEN("bracketsVerification(s) is called") {
      THEN("Expect false") { REQUIRE_FALSE(bracketsVerification(s)); }
    }
  }
  GIVEN("string \"{}\" " ){
      std::string s{"{}"};
      WHEN("bracketsVerificaton(s) is called"){
          THEN("Expect true") {REQUIRE(bracketsVerification(s)); }
      }
  }
}
