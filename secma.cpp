#include <iostream>
#include "Post.hpp"
#include "Account.hpp"
using namespace std;

int main(){
    Post person("Your mom", "lorem something");
    cout << person.getBody() << endl;
    cout << person.getTitle() << endl;
    person.setBody("This is the new body");
    person.setTitle("This is the new title");
    cout << person.getBody() << endl;
    cout << person.getTitle() << endl;
    person.getTimeStamp();
}