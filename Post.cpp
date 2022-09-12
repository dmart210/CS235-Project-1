#include "Post.hpp"
#include <iostream>
#include <string.h>
using namespace std;

/**
 * 
 * @note: Getter method that returns the body of the object being called
 * @returns: returns the Posts body
 */
const string Post::getBody (){
    return body;
}
/**
 * 
 * @note: Getter method that returns the title of the object being called
 * @returns: returns the Posts title
 */
const string Post::getTitle (){
    return title;
}

/**
 * 
 * @note: Getter method that returns the time the post was created
 * @returns: returns the time the Post was created 
 */
const void Post::getTimeStamp (){
    char * time_pointer =asctime(localtime(&current_time)) ;
    string date_formated;
    for (int i = 0; i < strlen(time_pointer) -9; i++){
        date_formated+=*(time_pointer+i);
    }
    cout << date_formated;
}

/**
 * 
 * @param: the body the user inserted, is the methods parameter 
 * @return: the body the user inserted is then set as the Post, private, "body" which can only be accessed using the getBody method
 */
void Post::setBody(string _body){
    body = _body;
}
/**
 * 
 * @param: the title the user inserted, is the methods parameter 
 * @return: the title the user inserted is then set as the Post, private, "title" which can only be accessed using the getTtile method
 */
void Post::setTitle(string _title){
    title = _title;
}

/**
 * @return: this returns a concatenated string which includes the title of the post,
 *          the time it was created, and the body of the post.  
 * 
 */
void Post::displayPost(){
    char* time_pointer = asctime(localtime(&current_time)) ;
    string date_formatted;
    //A for loop to go through the char pointer and to remove the \n that is attached to the asctime() function. The purpose to is make the date look more appealing
    for (int i = 0; i < strlen(time_pointer) -9; i++){
        date_formatted+=*(time_pointer+i);
    }
    string post = this->title + " posted at " + date_formatted + ":\n"  + this->body; //using the "this" pointer which returns the title and the body of the post.
    cout << post;
}
