#include "../inc/bracketsVerification.hpp"
#include <stack>

bool popOperation(std::stack<char> &_stack, char correct_prev_bracket) {
  if (!_stack.empty() && _stack.top() == correct_prev_bracket) {
    _stack.pop();
    return true;
  } else {
    return false;
  }
}

void charReader(char bracket, std::stack<char> &_stack, bool &is_balanced) {
  switch (bracket) {
  case '}':
    is_balanced = popOperation(_stack, '{');
    break;
  case ')':
    is_balanced = popOperation(_stack, '(');
    break;
  default:
    _stack.push(bracket);
    break;
  }
}

bool bracketsVerification(std::string input) {
  std::stack<char> char_stack;
  bool is_balanced = true;
  for (auto bracket : input) {
    charReader(bracket, char_stack, is_balanced);
  }
  if (!char_stack.empty()) {
    is_balanced = false;
  }
  return is_balanced;
}
