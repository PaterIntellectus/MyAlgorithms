#ifndef SORTING_H
#define SORTING_H

#include <iostream>
#include <iterator>

template<typename T>
void insertionSortContainer(T& container)
{
  if (container.size() < 2) { return; }

  for (int i{ 1 }; i < container.size(); ++i) {
    const auto key{ container[i] };
    int j{ i - 1 };
    while (-1 < j && key < container[j]) {
      container[j + 1] = container[j];
      --j;
    }
    container[j + 1] = key;
  }
}

template<typename T>
void insertionSortContainerStl(T& container)
{
  if (container.size() < 2) { return; }

  for (auto i{ std::next(container.begin()) }; i != container.end(); ++i) {
    const auto key{ *i };
    auto j{ std::prev(i) };
    while (j != std::prev(container.begin()) && *j > key) {
      *std::next(j) = *j;
      --j;
    }
    *std::next(j) = key;
  }
}

#endif // SORTING_H
