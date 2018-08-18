#include "../inc/bracketsVerification.hpp"
#include <stack>

bool bracketsVerification(std::string input) {
  for (int n = 0; n < input.size(); n++) {
    if ((input[n] == '{' && input[n + 1] != '}') ||
        (input[n] == '(' && input[n + 1] != ')'))
      return 0;
  }

  return 1;
}
