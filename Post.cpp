#include "Post.hpp"
#include <iostream>
using namespace std;

/**
 * 
 * @note: Getter method that returns the body of the object being called
 * @returns: returns the Posts body
 */
string Post::getBody(){
    return body;
}
/**
 * 
 * @note: Getter method that returns the title of the object being called
 * @returns: returns the Posts title
 */
string Post::getTitle(){
    return title;
}

/**
 * 
 * @note: Getter method that returns the time the post was created
 * @returns: returns the time the Post was created 
 */
string Post::getTimeStamp(){
    return asctime(localtime(&current_time));
}

/**
 * 
 * @param: the body the user inserted, is the methods parameter 
 * @return: the body the user inserted is then set as the Post, private, "body" which can only be accessed using the getBody method
 */
void Post::setBody(string _body){
    _body = body;
}
/**
 * 
 * @param: the title the user inserted, is the methods parameter 
 * @return: the title the user inserted is then set as the Post, private, "title" which can only be accessed using the getTtile method
 */
void Post::setTitle(string _title){
    _title = title;
}

/**
 * @return: this returns a concatenated string which includes the title of the post,
 *          the time it was created(which was casted from integer to string), and the body of the post.  
 * 
 */
string Post::displayPost(){
    string post = title + " posted at " + to_string(current_time) + ": \n" + body + "\n";
    return post;
}

