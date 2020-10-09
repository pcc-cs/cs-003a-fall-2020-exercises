#include <iostream>

/**
 * This makes ALL symbols in the std namespace
 * available without qualifier - DO NOT DO THIS, PLEASE!!!
 */
// using namespace std;

/**
 * Better, but not ideal
 */
using std::cout;
using std::endl;

int main() {
  // OK, because you have "using std::cout, etc."
  cout << "Using cout, not std::cout" << endl;

  /**
   * This is best because you're honoring the namespace
   * and there is no chance of a name clash
   */
  std::cout << "Using std::cout" << std::endl;
}
