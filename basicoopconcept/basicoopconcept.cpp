#include <iostream>
#include <string>
using namespace std;



// Encapsulation
class Add {
protected:  //Access Specifiers
    int num;
    int num2;
public:
    
   int getNum() {
        return num;
    }
  void setNum(int num,int num2) {
       this->num = num;
      this-> num2 = num2;
   
    }
 
 int Sum() {
        return num + num2;
    }
  
};

// inheritance 
class multiply : public Add {
public:
    int mul() {
    return num * num2;

    }
};

// polymorphism 
class multiplication : public multiply {
public:
    int mul(int num3) {   //using the same method name
        return num * num2 *num3;
    }
};


int main() {
    Add obj;
   multiply obj2;
   multiplication obj3;

    obj.setNum(2, 3);
    cout << "Sum: " << obj.Sum()<<endl;
    obj2.setNum(2, 3);
    cout << "multiplication of numbers : " <<obj2.mul() << endl;
    obj3.setNum(2, 3);
    cout << "multiplication of 3 numbrs : " <<obj3.mul(2);

    return 0;
}



