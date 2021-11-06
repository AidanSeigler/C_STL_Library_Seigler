//Dr_T Unit 2 COSC-1437 Starter 
/* Task -

Top level solution folder: C_STL_Library_YourLastName

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <stack>
#include <cassert>
#include <set>
#include <utility>
#include <map>
using namespace std; 
typedef map<string, int> MapT;
typedef MapT::const_iterator MapIterT;

bool less_than_7(int value)
{
  return value < 7;
}

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


  // A stack is a container that allows a user to plug in and take out elements from the top of the container
  stack<int> st; // Declaration

  st.push(100); // Adding a number on top of the stack
  assert(st.size() == 1); // Verification that 1 element is in the stack
  assert(st.top() == 100); // Verifying the value of the element on top of the stack

  st.top() = 456; // Assigning the new value
  assert(st.top() == 456); // Verification of that value

  st.pop(); // Removing the element from the stack
  assert(st.empty() == true); // Verification that the stack is empty


  /****Section_Name**** Set*/
  //Write the code as presented in: 3. std::set
  //Write comments that help one better understand what the code is doing.


  // A set is a container that is able to hold unique elements, meaning that it will only hold non-duplicant elements.
  set<int> iset; // Declaration

  // Declaration of elements in set container
  iset.insert(11);
  iset.insert(-11);
  iset.insert(55);
  iset.insert(22);
  iset.insert(22);

  if (iset.find(55) != iset.end() ) // If the value is not already stored, insert value
  {
    iset.insert(55);
  }

  assert(iset.size() == 4); // Double check to make sure the container is working properly

  set<int>::iterator it2;
  for (it2 = iset.begin(); it2 != iset.end(); it2++)
  {
    cout << " " << *it2;
  }


  /****Section_Name****Pair_Structure*/
  //Write the code as presented in: 4. std::pair structure
  //Write comments that help one better understand what the code is doing.


  // A pair is a lot like an array that will store only 2 elements
  pair<string, string> strstr; //Decalaration of pair
  strstr.first = "Hello";
  strstr.second = "World";

  pair<int, string> intstr;//Decalaration of pair
  intstr.first = 1;
  intstr.second = "one";

  pair<string, int> strint("two", 2); //Decalaration of pair
  assert(strint.first == "two");
  assert(strint.second == 2);


  /****Section_Name**** Map_Insert*/
  //Write the code as presented in: 14. std::map::insert
  //Write comments that help one better understand what the code is doing.


  // Insert can be used to add in a new element only if it isn't already present in the array
  MapT amap; // Declaration
  pair<MapIterT, bool> result = amap.insert(make_pair("Fred", 45));

  assert(result.second == true);

  /****Section_Name****Map_Summary*/
  //Write the code as presented in: 16. Map summary
  //Write comments that help one better understand what the code is doing.


  // A map basically allows you to assign a 'key' to an element, and the elements are always sorted by those keys
  map<string, string> phone_book; // Declaration
  phone_book["411"] = "Directory"; // Assigning 411 to Directory
  phone_book["911"] = "Emergency"; // Assigning 911 to Emergency
  phone_book["508-678-2811"] = "BCC"; // Assigning 508-678-2811 to BCC
  if (phone_book.find("411") != phone_book.end())
  {
    phone_book.insert (make_pair(string("411"), string("Directory")));
  } 
  assert(phone_book.size() == 3); // Checking if container size is = to 3
  map<string, string>::const_iterator it3; 
  for (it3 = phone_book.begin(); it3 != phone_book.end(); ++it3)
  {
    cout << " " << it3->first << " " << it3->second << endl; // Printing out container elements
  }

  /****Section_Name**** Sort_Algorithm*/
  //Write the code as presented in: 23. sort example
  //Write comments that help one better understand what the code is doing.


  // The code will sort the range between two iterators.
  int arr[100]; // Declaration
  sort (arr, arr + 100);
  vector<int> v1;
  sort (v1.begin(), v1.end());

  /****Section_Name****Predicate_Algorithm*/
  //Write the code as presented in: 25. count_if and predicate function\
  //Write comments that help one better understand what the code is doing. 
  
  // I wrote less_than_7 function towards top of program
  // 
  vector <int> v3; // Declaration of vector
  int count_less = count_if(v3.begin(), v3.end(), less_than_7); 

  return 0; 
 }
