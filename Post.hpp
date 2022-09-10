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
        /**
         * @brief Get the Body object
         * 
         * @return string 
         */
        string getBody();
        /**
         * @brief Get the Title object
         * 
         * @return string 
         */
        string getTitle();
        /**
         * @brief Get the Time Stamp object
         * 
         */
        void getTimeStamp();
        /**
         * @brief Set the Body object
         * 
         * @param _body 
         */
        void setBody(string _body);
        /**
         * @brief Set the Title object
         * 
         * @param _Title 
         */
        void setTitle(string _Title);
        /**
         * @note: method that post that prints the post of the person.
         */
        void displayPost();
        /**
         * @brief Construct a new Post object
         * 
         * @param _title 
         * @param _body 
         */
        Post(string _title, string _body){
            title = _title;
            body  = _body;
            time(&current_time);
        }
        //


};
