//Copyright 2015 Adam Quintero
//This program is distributed under the terms of the GNU General Public License.

#include <QCoreApplication>
#include <iostream>

#include "rational.h"

using namespace std;

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  rational x;
  rational y;

  cout << "Test for Class: rational" << endl << endl;

  cout << "Enter rational number x: " << endl;
  cin >> x;
  cout << endl << "Enter rational number y: " << endl;
  cin >> y;

  cout << "x.print()  :  ";
  x.print();
  cout << endl;
  cout << "y.print()  :  ";
  y.print();
  cout << endl << endl;

  cout << "Active Instances of rational  :  " << x.getActiveInstances() << endl << endl;
  rational tmpX = x;

  cout << "Assignment Operators" << endl;
  x = y;
  cout << "x = y   :  " << x << endl;
  x = tmpX;
  x += y;
  cout << "x += y  :  " << x << endl;
  x = tmpX;
  x -= y;
  cout << "x -= y  :  " << x << endl;
  x = tmpX;
  x /= y;
  cout << "x /= y  :  " << x << endl;
  x = tmpX;
  x *= y;
  cout << "x *= y  :  " << x << endl << endl;
  x = tmpX;

  cout << "Binary Math Operators" << endl;
  x = x + y;
  cout << "x = x + y  :  " << x << endl;
  x = tmpX;
  x = x - y;
  cout << "x = x - y  :  " << x << endl;
  x = tmpX;
  x = x / y;
  cout << "x = x / y  :  " << x << endl;
  x = tmpX;
  x = x * y;
  cout << "x = x * y  :  " << x << endl << endl;
  x = tmpX;

  cout << "Relational and Equality Operators" << endl << endl;
  cout << "x < y   :  ";
  if(x < y)
    cout << "true" << endl;
  else
    cout << "false" << endl;
  cout << "x <= y  :  ";
  if(x <= y)
    cout << "true" << endl;
  else
    cout << "false" << endl;
  cout << "x > y   :  ";
  if(x > y)
    cout << "true" << endl;
  else
    cout << "false" << endl;
  cout << "x >= y  :  ";
  if(x >= y)
    cout << "true" << endl;
  else
    cout << "false" << endl;
  cout << "x == y  :  ";
  if(x == y)
    cout << "true" << endl;
  else
    cout << "false" << endl;
  cout << "x != y  :  ";
  if(x != y)
    cout << "true" << endl << endl;
  else
    cout << "false" << endl << endl;

  cout << "Unary Operators" << endl << endl;
  x++;
  cout << "x++  :  " << x << endl;
  x = tmpX;
  x--;
  cout << "x--  :  " << x << endl;
  x = tmpX;
  ++x;
  cout << "++x  :  " << x << endl;
  x = tmpX;
  --x;
  cout << "--x  :  " << x << endl;
  x = tmpX;
  +x;
  cout << "+x   :  " << x << endl;
  x = tmpX;
  cout << "-x   :  " << -x << endl;
  cout << "!x   :  ";
  if(!x)
    cout << "true" << endl << endl;
  else
    cout << "false" << endl << endl;

  double tmpDub = x.toDouble();
  cout << "Method: x.toDouble()  :  " << tmpDub << endl << endl;
  x = tmpX;
  return a.exec();
}
