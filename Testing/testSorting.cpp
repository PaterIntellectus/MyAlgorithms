#include <iostream>
#include <vector>
#include <string>
#include <list>

#include "sort.h"

template<typename TArray, size_t TSize>
void showContainer(const TArray (&container)[TSize], const char* delimiter = ", ")
{
  if (!std::size(container)) {
    std::cout << "!empty container";
    return;
  }

  const auto lastElementIndex{ std::size(container) -1 };
  std::cout << "{ ";
  for (int i{}; i < lastElementIndex; ++i) {
    std::cout << container[i] << delimiter;
  }
  std::cout << container[lastElementIndex] << " }";
}

template<typename TContainer,
  typename T = std::decay_t<
    decltype(*begin(std::declval<TContainer>()))>>
void showContainerInlineStl(const TContainer &container, const char* delimiter = ", ")
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

  int intArr[]{ 1, 7, 3, 123, 5, -2 };
  showContainer(intArr);
  insertionSortArray(intArr);
  std::cout << " -> ";
  showContainer(intArr);
  std::cout << std::endl;


  char charArray[]{ 'a', '2', '|', '6', ' ' };
  showContainer(charArray);
  insertionSortArray(charArray);
  std::cout << " -> ";
  showContainer(charArray);
  std::cout << std::endl;

  char into[4]{ 4, 2, 3, 1 };
  showContainer(into);
  insertionSortArray(into);
  std::cout << " -> ";
  showContainer(into);
  std::cout << std::endl;


  std::vector<int> vecInt1{ 5, 2, 4, 6, 1, 3 };
  showContainerInlineStl(vecInt1);
  insertionSortStl(vecInt1);
  std::cout << " -> ";
  showContainerInlineStl(vecInt1);
  std::cout << std::endl;


  std::list<int> listInt1;
  showContainerInlineStl(listInt1);
  insertionSortStl(listInt1);
  std::cout << " -> ";
  showContainerInlineStl(listInt1);
  std::cout << std::endl;

  std::list<int> listInt2{ 5, 2213, 4-123, 6-1, -31, 3, 0 };
  showContainerInlineStl(listInt2);
  insertionSortStl(listInt2);
  std::cout << " -> ";
  showContainerInlineStl(listInt2);
  std::cout << std::endl;

  std::vector<std::string> vecStr{ "meal", "enjoys", "black", "A", "her", "cat" };
  showContainerInlineStl(vecStr);
  insertionSortStl(vecStr);
  std::cout << " -> ";
  showContainerInlineStl(vecStr);
  std::cout << std::endl;

  std::list<std::string> listStr{ "party", "join", "I", "table", "Can", };
  showContainerInlineStl(listStr);
  insertionSortStl(listStr);
  std::cout << " -> ";
  showContainerInlineStl(listStr);
  std::cout << std::endl;

  std::cin.get();
  return 0;
}
 