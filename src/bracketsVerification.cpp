#include "../inc/bracketsVerification.hpp"
#include <stack>

bool bracketsVerification(std::string input) {
  std::stack<char> char_stack;
  bool is_balanced = true;
  for (auto bracket : input) {
    switch (bracket) {
    case '}':
      if (!char_stack.empty() && char_stack.top() == '{')
        char_stack.pop();
      else
        is_balanced = false;
      break;

    case ')':
      if (!char_stack.empty() && char_stack.top() == '(')
        char_stack.pop();
      else
        is_balanced = false;
      break;
    default:
      char_stack.push(bracket);
      break;
    }
  }
  if (!char_stack.empty()) {
    is_balanced = false;
  }
  return is_balanced;
}
