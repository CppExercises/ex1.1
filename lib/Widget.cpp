#include <iostream>
#include <random>

#include <Widget.hpp>

// EX1.1 implementation source

// Add your implementation of all function
// overloads for 'init' declared in Widget.hpp here.

Widget rvref::init(Vector &&vec)
{
  // std::vector<unsigned> vector = std::move(vec);
  // return Widget{vector} = std::move(vec);

  return Widget{std::move(vec)};
}

Widget lvref::init(Vector &vec)
{
  // std::vector<unsigned> vector {vec};
  // return Widget{vector};

  return Widget{vec};
}

Widget value::init(Vector vec)
{
  // std::vector<unsigned> vector {vec};
  // return Widget{vector};

  return Widget{vec};
}
