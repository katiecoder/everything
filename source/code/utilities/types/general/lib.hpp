#pragma once
#include <algorithm>
#include <set>
#include <utility>
#include <string>
#include <numeric>

//ask stackoverflow about
//template <typename C, typename F>
//auto Apply_To_All(C & container, F function) -> C&{
//    for (auto & it: container){
//        function(it);
//    }
//    return container;
//}

template <typename T, typename Key>
bool Key_Exists(const T& container, const Key& key)
{
    return (container.find(key) != std::end(container));
}

template <typename C, typename P>
C Filter(C const & container, P pred) {
  C filtered(container);
  filtered.erase(remove_if(filtered.begin(), filtered.end(), pred), filtered.end());
  return filtered;
}

template <typename C, typename F>
void For_Each_Forever(C const & container, F fun) {
  while(true){
    for (auto & it: container){fun(it);}
  }
}

template <typename C, typename I>
bool Contains(C const& c, I const& item){
    return std::find(c.begin(), c.end(), item) != c.end();
}


template<typename Container>
const typename Container::value_type& getNthElement(const Container& container, size_t n) {
  auto itr = cbegin(container);
  for (auto i = 0u; i < n; ++i) {
    ++itr;
  }
  return *itr;
}

template<typename Container>
std::string Get_As_String_With_Char_Between_Each_Element(const Container& container, char c){
      std::string s = std::accumulate(container.begin()+1, container.end(), std::to_string(container[0]),
                         [&](const std::string& a, int b) {
                               return a + c + std::to_string(b);
                         });
      return s;
}

//test if all elements are unique based on element type its self
template<class InputIt>
bool all_unique(InputIt first, InputIt last){
  std::set<typename std::iterator_traits<InputIt>::value_type> s(first,last);
  return s.size() == std::distance(first,last);
}

//test for unique-ness on all elements based off a data member
//all_unique(items.begin(),items.end(),&Item::name);
template<class InputIt, class MemberType>
bool all_unique(InputIt first, InputIt last, MemberType std::iterator_traits<InputIt>::value_type::* member_name){
  
  auto total_length = std::distance(first,last);
  
  //not ideal, but works
  auto i = *first.*member_name;
  std::set<decltype(i)> s;
  
  while(first != last){
    s.insert(*first.*member_name);
    ++first;
  }
  
  return s.size() == total_length;
}


template <typename Container, typename Function>
void Call_Function_On_First_Element(Container c, Function function){
  if (!c.empty()){
    function(c[0]);
  }
}

template <typename Container, typename Function>
void Call_Function_On_All_Elements_Except_First(Container c, Function function){
  if (c.size() >= 2){
    for (auto it = c.begin()+1; it != c.end(); ++it){
      function(*it);
    }
  }
}

template <typename Container, typename Function>
void Call_Function_On_All_Elements_Except_First_And_Last(Container c, Function function){
  if (c.size() >= 2){
    for (auto it = c.begin()+1; it != c.end()-1; ++it){
      function(*it);
    }
  }
}

template <typename Container, typename Function1, typename Function2>
void Call_Function_On_First_Element_And_Then_Function_On_The_Rest_Of_The_Elements(Container c, Function1 function1, Function2 function2){
  Call_Function_On_First_Element(c,function1);
  Call_Function_On_All_Elements_Except_First(c,function2);
}

template <typename Container, typename Function>
void Call_Function_On_Last_Element(Container c, Function function){
  if (!c.empty()){
    function(c[c.size()-1]);
  }
}

template <typename Container, typename Function>
void Call_Function_On_All_Elements_Except_Last(Container c, Function function){
    if (!c.empty()){
      for (auto it = c.begin(); it != c.end()-1; ++it){
        function(*it);
      }
    }
}

template <typename Container, typename Function>
void Call_Function_On_All_Elements(Container c, Function function){
      for (auto it: c){
        function(it);
      }
}

template <typename Container, typename Function1, typename Function2>
void Call_Function_On_All_Elements_Except_Last_Element_Then_Call_Function_On_Last_Element(Container c, Function1 function1, Function2 function2){
  Call_Function_On_All_Elements_Except_Last(c,function1);
  Call_Function_On_Last_Element(c,function2);
}


//perform an action on each element of a container
//takes the container, the function, then all of the fowarded arguments
template <typename Container, typename Function, typename ...Args>
void For_Each(Container && container, Function && function, Args&&... args){
  for (auto const& it: container){
    function(std::forward<decltype(it)>(it),args...);
  }
}



//template <typename T, template <class T> class Container, class MemberType>
//auto To_Vector(Container<T> const& c, MemberType std::iterator_traits<InputIt>::value_type::* member_name) -> std::vector<{
