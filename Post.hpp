#include <iostream>
#include <time.h>
using namespace std;

class Post{
    /**
     * @note: Private Access Identifier,which includes variables that can only changed or accessed through getters and setters
     */
    private:
        string title;
        string body;
        time_t current_time;
    /**
     * 
     * @brief:Public acccess Identifier, which includes all public methods that are accessible for the the user. 
     *        Also includes the constructor which sets the title and body of the post to its respective values, as well 
     *        and stamping the time it was created
     * 
     */
    public:
        string getBody();
        string getTitle();
        string getTimeStamp();
        void setBody(string _body);
        void setTitle(string _Title);
        string displayPost();
        Post(string _title, string _body){
            title = _title;
            body  = _body;
            time(&current_time); //time function which takes in the address of the current time and "stamps it"
        }


};
