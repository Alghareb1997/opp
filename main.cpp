#include <iostream>
#include <math.h>
#include<Libarary.h>
#include<Book.h>
#include<Visitor.h>
#include<Employee.h>


using namespace std ;
int main(){
  int choice ;
cout << ">....................>Hello with us >..." <<endl ;
cout << "    >..For books entre number     > 1 "<<endl<<"    >..For visitor entre number  > 2 " <<endl <<"    >..For employee entre       > 3 " <<endl ;
cout << "Entre  your choice  ....." <<endl;
  cin >> choice ;
  if(choice==1){
int i =1;
    while(true){
   string name ,author_name ,category ;
   int edition ;
    Book bi;
    int choice ;
    cout <<"To add new book choice : 1 " << endl;
    cout  <<"To display book details choice : 2 " <<endl;
    cin >> choice ;
    if(choice==1){
    cout << "Name of book:" << i <<endl;
    cin >> name;
    bi.setname(name);
    cout << "Author_name of book :" << i <<endl;
    cin >> author_name;
    bi.setauthor_name(author_name);
    cout << "Edition of book :" << i <<endl;
    cin >> edition;
    bi.setedition(edition);
    cout << "Category of book :" << i <<endl;
    cin >> category;
    bi.setcategory(category);
    }
    else if(choice==2){
     cout << "Enter number of book ";
     cin >> i ;
     bi.display();
    }
    i++;
     }
   }
   else if(choice==2){
    int i =1;
    while(true){
   string name ,phone_number ,email ;
   int age;

    Visitor vi;
    int choice ;
    cout <<"To add new visitor choice : 1 " << endl;
    cout  <<"To display visitor details choice : 2 " <<endl;
    cin >> choice ;
    if(choice==1){
    cout << "Name of visitor:" << i <<endl;
    cin >> name;
    vi.setname(name);
    cout << "Phone number of visitor :" << i <<endl;
    cin >> phone_number;
    vi.setPhone_number(phone_number);
    vi.setEmail(email);
    cout << "Age of visitor :" << i <<endl;
    cin >> age;
    vi.setAge(age);
    }
    else if(choice==2){
     cout << "Enter number of visitor";
     cin >> i ;
     vi.display();
    }
    i++;
     }
   }
}



