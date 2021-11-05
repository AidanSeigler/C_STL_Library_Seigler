//Dr_T Unit 2 COSC-1437 Starter 
/* Task -

Top level solution folder: C_STL_Library_YourLastName

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
using namespace std; 

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " ";
          }    
      } 
};

class MyClassVector2
{
  private:
    vector<int> vec;

  public:
    MyClassVector2(vector<int> v) : vec(v)
    {}
    void print()
    {
      for (int i = 0; i < vec.size(); i++)
      {
        cout << vec[i] << " ";
      }
    }
};

class MyClassVector3
{
  private:
    vector<int>& vec;

  public:
    MyClassVector3(vector<int>& arr) : vec(arr)
    {}
    void print()
    {
      for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    }
};

int main() 
{
  /****Section_Name***Vectors*/ 
  //Write the base code for: 5. std::vector example
  vector<double> vd; //vd elments are floating point numbers
  vector<int> vi; //vi elements are integer numbers 
  vector<string> vs; //vs elements are string objects 

  //Expand this code to:
  //add 3 elements to the vd vector
  vd.push_back(1.11);
  vd.push_back(2.22);
  vd.push_back(3.33);

  //add 3 elements to the vi vector
  vi.push_back(1);
  vi.push_back(2);
  vi.push_back(3);

  // add 3 elements to the vs vector
  vs.push_back("One");
  vs.push_back("Two");
  vs.push_back("Three");

  // display the 3 elements in the vd vector
  cout << "\nValues in vd: \n"; 
  for(double vals : vd)
  {
    cout << vals << endl; 
  }

  //display the 3 elements in the vi vector
  cout << "\nValues in vi: \n";
  for(int vals : vi)
  {
    cout << vals << endl;
  }

  // display the 3 elements in the vs vector
  cout << "\nValues in vs: " << endl; 
  for(int i = 0; i < vs.size(); i++)
  {
    cout << vs[i] << endl; 
  }

  /****Section_Name***Vector_as_Class_Member*/ 
  //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

  cout << "\nVector_as_Class_Member" << endl; 
  vector<int> vec; 
  for (int i = 1; i <= 5; i++) 
    vec.push_back(i); 
  MyClassVector1 obj(vec); 
  obj.print(); 
      
  //Continue with MyClassVector2 and MyClassVector3

  // MyClassVector2 Example
  cout << "\nVector_as_Class_Member 2" << endl;
  vector<int> vec2;
  for (int i = 1; i <= 5; i++)
    vec2.push_back(i);
  MyClassVector2 obj2(vec2);
  obj2.print();

  // MyClassVector3 Example
  cout << "\nVector_as_Class_Member 3" << endl;
  vector<int> vec3;
  for (int i = 1; i <= 5; i++)
    vec3.push_back(i);
  MyClassVector3 obj3(vec3);
  obj3.print();


  /****Section_Name***STL_Iterators*/ 

  cout << endl << endl;
    
  vector<int> vint(10);
  vint[0] = 10;
  vint[1] = 20;
  vint[2] = 30;
  vint[3] = 40;
  vint[4] = 50;
  vint[5] = 60;
  vint[6] = 70;
  vint[7] = 80;
  vint[8] = 90;
  vint[9] = 100;
  vint[10] = 110;

  vector<int>::iterator it;
  for (it = vint.begin(); it != vint.end(); ++it)
  {
    cout << " " << *it;
  }

  /****Section_Name*** Stack*/


  //Write comments that help one better understand what the code is doing.

  /****Section_Name**** Set*/
  //Write the code as presented in: 3. std::set

  //Write comments that help one better understand what the code is doing.

  /****Section_Name****Pair_Structure*/
  //Write the code as presented in: 4. std::pair structure

  //Write comments that help one better understand what the code is doing.

  /****Section_Name**** Map_Insert*/
  //Write the code as presented in: 14. std::map::insert

  //Write comments that help one better understand what the code is doing.

  /****Section_Name****Map_Summary*/
  //Write the code as presented in: 16. Map summary

  //Write comments that help one better understand what the code is doing.

  /****Section_Name**** Sort_Algorithm*/
  //Write the code as presented in: 23. sort example

  //Write comments that help one better understand what the code is doing.

  /****Section_Name****Predicate_Algorithm*/
  //Write the code as presented in: 25. count_if and predicate function

  //Write comments that help one better understand what the code is doing. 

      return 0; 
 }