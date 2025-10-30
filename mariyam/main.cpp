#include<iostream>
using namespace std;

class employe {
private:

   int salary;

public:
    void setsalary(int s)
{
salary = s;
}
  int getsalary(){
  return salary;
  }
  };
   int main()
{
    employe myobj;
    myobj.setsalary(500000);
    cout<<myobj.getsalary();



return 0;

}



