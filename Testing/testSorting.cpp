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
void showContainerInlineStl(const T& container, const char* delimiter = ", ")
{
  if (container.empty()) {
    std::cout << "!empty container";
    return;
  }
  const auto lastElement{ std::prev(container.end()) };
  std::cout << "{ ";
  for (auto i{ container.begin() }; i != lastElement; ++i) {
    std::cout << *i << delimiter;
  }
  std::cout << *lastElement << " }";
}

int main()
{
  //cout << "Hello World" << std::endl;

  std::vector<int> vecInt1{ 5, 2, 4, 6, 1, 3 };
  showContainerInlineStl(vecInt1);
  insertionSortContainer(vecInt1);
  std::cout << " -> ";
  showContainerInlineStl(vecInt1);
  std::cout << std::endl;


  std::vector<int> vecInt2;
  showContainerInlineStl(vecInt2);
  insertionSortContainer(vecInt2);
  std::cout << " -> ";
  showContainerInlineStl(vecInt2);
  std::cout << std::endl;

  std::vector<int> vecInt3{ 5, 2, 4, 6, 1, 3 };
  showContainerInlineStl(vecInt3);
  insertionSortContainerStl(vecInt3);
  std::cout << " -> ";
  showContainerInlineStl(vecInt3);
  std::cout << std::endl;

  std::vector<std::string> vecStr{ "meal", "enjoys", "black", "A", "her", "cat" };
  showContainerInlineStl(vecStr);
  insertionSortContainerStl(vecStr);
  std::cout << " -> ";
  showContainerInlineStl(vecStr);
  std::cout << std::endl;

  std::list<std::string> listStr{ "party", "join", "I", "table", "Can", };
  showContainerInlineStl(listStr);
  insertionSortContainerStl(listStr);
  std::cout << " -> ";
  showContainerInlineStl(listStr);
  std::cout << std::endl;

  std::cin.get();
  return 0;
}
 