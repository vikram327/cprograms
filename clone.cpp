// #include <iostream>

// //using namespace std;

// int main() {
//    std :: cout << "Hello World!";// we can also use std::
//     return 0;
// }
// // g++ file name 
// // .\a.exe for compl 
// #include <iostream>
// using namespace std;

// class hero {

//     //properties
//     int health;
// };
// int main(){
//     // creation of object
//     hero h1;

//     cout << "size:" << sizeof(h1) << endl;
//     return 0;

// }
// 
// #include <iostream>  // getter and setter
// using namespace std;

// class hero {

//      private:
//     int health;
//     char level;
   
//    public:
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
//     // creation of object or static allocation
//     hero vikram;
        

          // dinamically allocation
//     hero *b = new hero;
// //      cout <<"vikram health is " << vikram.gethealth() << endl;

// //      vikram.sethealth(50);
// //      vikram.setlevel ('A');

// //   cout << "health is:" << vikram.gethealth() << endl;
// //   cout << "level is:" << vikram.getlevel() << endl;
//     return 0;

// }
// #include <iostream>  // getter and setter
// using namespace std;

// class hero {

//      private:
//     int health;
//     char level;
   
//    public:
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
//     // static allocation
//     hero vikram;
//     vikram.sethealth(80); //constructure use for value inelisiation
//     vikram.setlevel ('A');
//     cout<< "level is " << vikram.getlevel() <<endl;
//     cout<< "health" << vikram.gethealth()  << endl;
//     // dynamically allocation
//     hero *b = new hero;
//     b->sethealth(70);
//     b->setlevel('A');
//       cout<< "level is " << (*b).getlevel()  << endl;
//       cout<< "health is" << (*b).gethealth()  << endl;

//       cout<< "level is " << b->getlevel() << endl;
//       cout<< "health is" << b->gethealth()  << endl;
     

//     return 0;

// }
//  #include <iostream>  
// using namespace std;

// class hero {

//      private:
//     int health;
    
   
//    public:
//    char level;
   

// //    hero(){
// //     cout<<"constructor called"<<endl;}

//     // paramerterised constructor
//     hero (int health) {
//        // cout <<"this ->"<< this <<endl;

//        this-> health = health;
//     }
//     hero (int health , char level){
//      //cout<<"this->"<< this<<endl;
//      this-> health=health;
//      this-> level=level;
//     }
//    void print(){
//     cout<<level<<endl;
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

//     // object created stratically
//     hero vikram(10);
//     // cout << "address of vikram "<<&vikram<<endl;
//     // vikram.gethealth();
//     vikram.print();


//     // dinamically 
//     hero *h = new hero(11);
//     h->print();
//     hero temp (22,'B');
//     temp.print();    

//     return 0;

// }
 #include <iostream>  
using namespace std;

class hero {

     private:
    int health;
    
   
   public:
   char level;
   

    hero(){
    cout<<"constructor called"<<endl;}

    // paramerterised constructor
    hero (int health) {
       // cout <<"this ->"<< this <<endl;

       this-> health = health;
    }
    hero (int health , char level){
     //cout<<"this->"<< this<<endl;
     this-> health=health;
     this-> level=level;
    }
   void print(){
    cout<<"health"<<this->health<<endl;
    cout<<"level"<<this->level<<endl;
   }
    int gethealth(){
         return health;
    }   
    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;

    }

    void setlevel(char ch){
        level = ch;
    } 


};
int main(){

  
    hero S(70,'C');
    S.print();
    // copy constructor
    hero R(S);
    R.print();
    // cout << "address of vikram "<<&vikram<<endl;
    // vikram.gethealth();
  


    // dinamically 
   // hero *h = new hero(11);
   
    
     

    return 0;

}