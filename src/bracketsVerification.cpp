#include "../inc/bracketsVerification.hpp"
#include <iterator>
#include <stack>

char findEndBracket(std::string::iterator open_bracket) {
  switch (*open_bracket) {
  case '{':
    return '}';
  case '(':
    return ')';
  case '[':
    return ']';
  }
}

bool pairFinder(std::string::iterator &actual_iter,
                const std::string::iterator &end_iter) {
  if ((actual_iter + 1) != end_iter &&
      *(actual_iter + 1) != findEndBracket(actual_iter))
    pairFinder(++actual_iter, end_iter);
  if (*(actual_iter + 1) != findEndBracket(actual_iter))
    throw false;
}

bool bracketsVerification(std::string input) {
  auto it = input.begin();
  try {
    pairFinder(it, input.end());
  } catch (bool is_inbalanced) {
    return is_inbalanced;
  }
  return true;
}
