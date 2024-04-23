#include <iostream>
#include <string>

using namespace std;

template <class ANY_TYPE>
ANY_TYPE maximum(ANY_TYPE a, ANY_TYPE b)
{
  return (a > b) ? a : b;
}

template <class T>
T addition(T a, T b, T c)
{
  return a + b + c;
}

template <class ANY_TYPE>
ANY_TYPE minimum(ANY_TYPE a, ANY_TYPE b)
{
  return (a < b) ? a : b;
}

template <class ANY_TYPE>
ANY_TYPE multiply(ANY_TYPE a, ANY_TYPE b)
{
  return (a * b);
}

template <class ANY_TYPE>
void Cswap(ANY_TYPE &a, ANY_TYPE &b)
{
  ANY_TYPE temp = a;
  a = b;
  b = temp;
}

int main() 
{
  cout << "This is the maximum template function:" << endl;
  cout << "maximum(5, 7) = " << maximum(5, 7) << endl;
  cout << "maximum(10.5, 7.5) = " << maximum(10.5, 7.5) << endl;
  cout << "maximum('z', 'a') = " << maximum('z', 'a') << endl;
  cout << "maximum(hello, world) = " << maximum("hello", "world") << endl;
  cout << "maximum(true, false) = " << maximum(true, false) << endl;
  // there were no issues

  cout << "\nThis is the addition template function:" << endl;
  cout << "addition(5, 6, 10) = " << addition(5, 6, 10) << endl;
  cout << "addition(1.5, 2.5, 3.5) = " << addition(1.5, 2.5, 3.5) << endl;
  cout << "addition('a','b','c') = " << addition('a','b','c') << endl;
  // cout << "addition(hello, world, program) = " << addition("hello", "world", "program") << endl;
  // we got invalid operands to binary expression, so we can't use the addition function with strings
  cout << "addition(true, false, true) = " << addition(true, false, true) << endl;
  // it works but the answer is incorrect, 1 + 0 + 1 = 2

  cout << "\nThis is the minimum template function:" << endl;
  cout << "minimum(8,4) = " << minimum(8,4) << endl;
  cout << "minimum(1.5, 2.5) = " << minimum(1.5, 2.5) << endl;
  cout << "minimum('a', 'z') = " << minimum('a', 'z') << endl;
  cout << "minimum(hello, world) = " << minimum("hello", "world") << endl;
  cout << "minimum(true, false) = " << minimum(true, false) << endl;
  // everything works fine

  cout << "\nThis is the multiply template function:" << endl;
  cout << "multiply(5, 6) = " << multiply(5, 6) << endl;
  cout << "multiply(1.5, 2.5) = " << multiply(1.5, 2.5) << endl;
  cout << "multiply('a','b') = " << multiply('a','b') << endl;
  // it works but does not give correct answer
  // cout << "multiply(hello, world) = " << multiply("hello", "world") << endl;
  // you can't multiply strings
  cout << "multiply(true, false) = " << multiply(true, false) << endl;

  int a = 1, b = 10;
  cout << "\nThis is the swap template function:" << endl;
  cout << "swap(1, 10) = ";

  Cswap(a, b);

  cout << "swap(" << a << " , " << b << ")" << endl;

  double x = 1.5, y = 2.5;
  cout << "swap(1.5, 2.5) = ";
 
  Cswap(x, y);

  cout << "swap(" << x << " , " << y << ")" << endl;

  char u = 'a', v = 'z';
  cout << "swap('a','z') = "; 
    
  Cswap(u,v);

  cout << "swap(" << u << " , " << v << ")" << endl;
    
  cout << "swap(hello, world) = ";

  string t = "hello", i = "world";
  Cswap(t, i);
  
  cout << "swap(" << t << " , " << i << ")" << endl;

  bool k = true, p = false;
  cout << "swap(true, false) = ";
  
  Cswap(k, p);

  cout << "swap(" << k << " , " << p << ")" << endl;
  // it works
  
  return 0;
}