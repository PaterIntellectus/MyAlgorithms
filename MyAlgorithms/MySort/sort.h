#ifndef SORTING_H
#define SORTING_H

#include <iostream>
#include <iterator>
//#include <algorithm>

// sorting function that template takes only standard array types
template<typename TArray, size_t TSize>
void insertionSortArray(TArray (&container)[TSize])
{
  const auto containerSize{ std::size(container) };
  if (containerSize < 2) { return; }

  for (int i{ 1 }; i < containerSize; ++i) {
    const auto key{ container[i] };
    int j{ i - 1 };
    while (-1 < j && key < container[j]) {
      container[j + 1] = container[j];
      --j;
    }
    container[j + 1] = key;
  }
}

// insertion sort that works with stl containers
template<
typename TContainer,
typename T = std::decay_t<decltype(*begin(std::declval<TContainer>()))>>
void insertionSortStl(TContainer &container)
{
  if (container.size() < 2) { return; }

  // version with iterators and their operators only
  for (auto i{ std::next(container.begin()) }; i != container.end(); ++i) {
    for (auto j{ container.begin() }; j != i; std::advance(j, 1)) {
      if (*j < *i) { continue; }
      auto temp{ *j };
      *j = *i;
      *i = temp;
    }
  }

  // full stl version which works almost the same way
  //for (auto i{ std::next(container.begin()) }; i != container.end(); ++i) {
  //  std::rotate(std::upper_bound(container.begin(), i, *i), i, std::next(i));
  //}
}

#endif // SORTING_H
