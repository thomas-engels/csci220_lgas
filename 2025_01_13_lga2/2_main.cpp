#include <iostream>

class fraction {
private:
    int* num = nullptr;
    int* den = nullptr;
public:
    // constructor
    fraction(int n, int d = 1) {
        num = new int(n);
        den = new int(d);
    }
    // big 3
    // deep copy constructor: enables copying data in the free store
    fraction(const fraction& source);

    // copy assignment overloaded operator; returning by referencing allows chaining; e.g. a = b = c
    fraction& operator=(const fraction& source);

    // destructor ensures the data in the free is deleted when the fraction object is cleared off the stack
    ~fraction();

    // arithmetic operations
    // member function
    fraction operator+(const fraction& rhs);

    // global friend functions
    // enables access to fraction's private variables eliminating need for getter/setter functions
    friend fraction operator*(const fraction& lhs, const fraction& rhs);
    // printing
    friend std::ostream& operator<<(std::ostream& os, const fraction& f);
};

fraction::fraction(const fraction& source)
{
  // check if source is garbage aka pointing to null
  if (source.num == nullptr || source.den == nullptr)
  {
      this->num = nullptr;
      this->den = nullptr;
  }
  else
  {
    this->num = new int(*source.num);
    this->den = new int(*source.den);
  }
}

fraction::~fraction()
{
  if (this->num != nullptr and this->den != nullptr)
  {
    delete this->num;
    delete this->den;
  }
}

fraction& fraction::operator=(const fraction& source)
{
  if (this == &source)
  {
    return *this;
  }
  delete this->num;
  delete this->den;
  this->num = new int(*source.num);
  this->den = new int(*source.den);
  return *this;
}

std::ostream& operator<<(std::ostream& os, const fraction& rhs)
{
  os << *rhs.num << "/" << *rhs.den;
  return os;
}

fraction fraction::operator+(const fraction& rhs)
{
  *num = ((*num)*(*rhs.den)) + ((*rhs.num)*(*den));
  *den = ((*den)*(*rhs.den));
  return *this;
}

fraction operator*(const fraction& lhs, const fraction& rhs)
{
  int num = (*lhs.num) * (*rhs.num);
  int den = (*lhs.den) * (*rhs.den);
  return fraction(num, den);
}



int main() {
    fraction a(5, 8);
    fraction b(4, 9);
    fraction c = a;
    std::cout   << (a * b) << std::endl; // prints 20/72
    std::cout  << (a + b) << std::endl; // prints 77/72
    std::cout  << (b * c) << std::endl; // prints 20/72
    a = c = b;
    std::cout  << (a * b) << std::endl; // prints 16/81
    return 0;
}
