/**
 * @author: Dariel A. Martinez
 */
#include "Post.hpp"
#include "Account.hpp"
#include <iostream>
#include <string>
using namespace std;


/**
 * @return: A getter that returns the username of the account created. (As string)
 */
string Account::getUsername(){
    return username;
}
/**
 * @return: A getter that returns the password of the account created. (As string)
 */
string Account::getPassword(){
    return password;
}
/**
 * @param: the string named _username that the user wants to set the username as.
 */
void Account::setUsername(string _username){
    username = _username;
}
/**
 * @param: the string named _password that the user wants to set the password as.
 */
void Account::setPassword(string _password){
    password = _password;
}
/**
 * @param: title, which is the title of the post
 * @param: body, the actual post or the body of the post
 * @return: It returns false if theres no title or body
 * @return: Returns true otherwise and creates a post and adds it to the string vector
 */
bool Account::addPost(string title, string body ){
    if (title == "" || body == "") return false;
    Post person(title, body);
    all_posts.push_back(person.displayPost());
    return true;
}
/**
 * @note: A for loop that prints out the posts in the accounts
 */
void Account::viewPosts(){
    for (int i = 0; i < all_posts.size(); ++i){
        cout << all_posts[i] << endl;
    }
}

