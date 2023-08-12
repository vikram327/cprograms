// #include <iostream>  
// using namespace std;

// class hero {

//      private:
//     int health;
    
   
//    public:
//    char level;
   

//     hero(){
//     cout<<"constructor called"<<endl;}

//     // paramerterised constructor
//     hero (int health) {

//        this-> health = health;
//     }
//     hero (int health , char level){
//      this-> health=health;
//      this-> level=level;
//     }
//    void print(){
//     cout<<"health"<<this->health<<endl;
//     cout<<"level"<<this->level<<endl;
//    }
//     int gethealth(){
//          return health;
//     }   
//     char getlevel(){
//         return level;
//     }

//     void sethealth(int h){
//         health = h;

//     }

//     void setlevel(char ch){
//         level = ch;
//     } 


// };
// int main(){

  
//     hero S(70,'C');
//     S.print();
//     // copy constructor
//     hero R(S);
//     R.print();

//     return 0;

// } 
//  #include <iostream>  // encapsulation
//   using namespace std;


//  class student {

//      private:   //data members
//      string name; 
//      int age;
//      int health;
    
   
//    public:  //functions
//        int getage(){
//         return this->age;
//        }
//  };

//  int main(){
//     student first;
//     cout<< "sab sahi chal raha hai"<<endl;

//     return 0;
//  }
 /* #include <iostream>  //inheritance
 using namespace std;

class human {
    public: 
    int height;
    int weight;
    int age;

    public:
int getage(){
    return this->age;

}
void setweight(int w){
    this->weight = w;

}
};
//class male: public human {
// class male: protected human {   // we can inherent the data through int getheight inthe male class

class male: private human {
    public:
    string colour;
    void sleep(){
        cout<<"male sleeping"<<endl;
    }
    int getheight(){
        return this-> height;
    }
}; 
int main(){
    male m1;
    cout<<m1.getheight()<<endl;

    male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    cout<<object1.colour<<endl;
     object1.sleep();  
     return 0;

} */
/* #include <iostream>  //polymorfisiam
 using namespace std;

class A {      //  function overloading same name with different argumant type
    public: 
    void sayhello(){
        cout<< "hello love gabbar"<<endl;
    }
   void sayhello(string name){
    cout<<"hello"<<name <<endl;
    }

};

int main(){
    A obj;
    obj.sayhello();
    
    return 0;
} */
#include <iostream>  //polymorfisiam
 using namespace std;

class A {      
    public: 
    void sayhello(){
        cout<< "hello love gabbar"<<endl;
    }
   void sayhello(string name){
    cout<<"hello"<<name <<endl;
    }

};
 class B{
    public:    // it is called opretor overloading
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }
void operator+ (B &obj){
    //int value1 = this-> a;
 //   int value2 = obj.a;
    cout<<"hello gabbar"<<endl;
  // cout<<"output"<<value1 -value2 <<endl;
}

 };

int main(){
    B obj1 , obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1+ obj2;

    return 0;
}