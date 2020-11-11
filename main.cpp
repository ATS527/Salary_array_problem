#include <iostream>
#include <vector>
using namespace std;

int main(){
  int number;
  cout << "Enter the number of Employees : ";
  cin >> number;
  cout << endl;

  vector <int> _500to599;
  vector <int> _600to699;
  vector <int> _700to799;
  vector <int> _800to899; 
  vector <int> _900to999;
  vector <int> _1000to;

  int salaries[number];
  for(int i = 0; i < number; i++){
    int gross;
    cout << "Enter the Gross Sales : ";
    cin >> gross;
    salaries[i] = 500 + gross * 0.09;
    cout << "Weekly Salary => " << salaries[i] << endl;
    cout << endl;

    if(salaries[i] >= 1000){
      _1000to.push_back(salaries[i]);
    }
    else if(salaries[i] >= 900){
      _900to999.push_back(salaries[i]);
    }
    else if(salaries[i] >= 800){
      _800to899.push_back(salaries[i]);
    }
    else if(salaries[i] >= 700){
      _700to799.push_back(salaries[i]);
    }
    else if(salaries[i] >= 600){
      _600to699.push_back(salaries[i]);
    }
    else if(salaries[i] >= 500){
      _500to599.push_back(salaries[i]);
    }
  }

  cout << "Filtering the result by range : " << endl;
  cout << endl;

  cout << "Rs.500 to 599 : " << _500to599.size() << endl;
  cout << "Rs.600 to 699 : " << _600to699.size() << endl; 
  cout << "Rs.700 to 799 : " << _700to799.size() << endl; 
  cout << "Rs.800 to 899 : " << _800to899.size() << endl; 
  cout << "Rs.900 to 999 : " << _900to999.size() << endl; 
  cout << "Rs.1000 and over : " << _1000to.size() << endl; 
}