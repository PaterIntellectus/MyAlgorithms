#include <iostream>
#include <vector>
#include <string>
#include <list>

#include "sort.h"

using namespace std;

template<typename T>
void showContainer(const T& container)
{
  std::cout << "---------------\n";
  for (int i{}; i < container.size(); ++i) {
    std::cout << i << ") " << container.at(i) << '\n';
  }
  std::cout << "\n---------------" << std::endl;
}

template<typename T>
void showContainerInlineStl(const T& container, const char* delimiter = ", ", const char* end = ".")
{
  for (auto i{ container.begin() }; i != std::prev(container.end()); ++i) {
    std::cout << *i << delimiter;
  }
  std::cout << *std::prev(container.end()) << end << std::endl;
}

int main()
{
  //cout << "Hello World" << std::endl;

  std::vector<int> vecInt1{ 5, 2, 4, 6, 1, 3 };

  std::cout << "Before sorting:\n";
  showContainer(vecInt1);
  insertionSortContainer(vecInt1);
  std::cout << "After sorting:\n";
  showContainer(vecInt1);

  /*
  std::vector<int> vecInt2{ 5, 2, 4, 6, 1, 3 };

  std::cout << "Before sorting:\n";
  showContainer(vecInt2);
  insertionSortContainerStl(vecInt2);
  std::cout << "After sorting:\n";
  showContainer(vecInt2);

  std::vector<std::string> vecStr{ "meal", "enjoys", "black", "A", "her", "cat" };
  std::cout << "The words:\t";
  showContainerInlineStl(vecStr);
  insertionSortContainerStl(vecStr);
  std::cout << "The phrase:\t";
  showContainerInlineStl(vecStr);


  std::list<std::string> listStr{ "party", "join", "I", "table", "Can", };
  std::cout << "The words:\t";
  showContainerInlineStl(listStr);
  insertionSortContainerStl(listStr);
  std::cout << "The phrase:\t";
  showContainerInlineStl(listStr);
  */
  return 0;
}
 