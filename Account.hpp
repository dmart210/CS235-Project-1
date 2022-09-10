#include <iostream>
#include <vector>
using namespace std;


class Account{
    /**
     * @note: Private access identifier which includes the username and password of the account, and a vector that includes all the post
     */
    private:
        string username;
        string password;
        vector<string> all_posts;

    /**
     * @note: Public access identifier which includes all the methods, as well as the two contructors of the class. One of which has no 
     *        parameters and just sets the username,password, and all_posts empty. 
     */
    public:
        Account(){
            username = "";
            password = "";
            all_posts.push_back("");
        }
        /**
         * @param: the username and password the user input
         * @note: Sets the username and password the user input as the actual username and password of the account. 
         *        Also "pushes back" a spot for the vector
         */
        Account(string _username, string _password){
            username = _username;
            password = _password;
            all_posts.push_back("");
            
        }
        /**
         * @brief Get the Username object
         * 
         * @return string 
         */
        const string getUsername();
        /**
         * @brief Get the Password object
         * 
         * @return string 
         */
        const string getPassword();
        /**
         * @brief Set the Username object
         * 
         * @param _username 
         */
        void setUsername(string _username);
        /**
         * @brief Set the Password object
         * 
         * @param _password 
         */
        void setPassword(string _password);
        /**
         * @brief: creates a post object with the title and the body the user puts 
         * 
         * @param _title 
         * @param _body 
         * @return true, if title and password both have values that arent empty
         * @return false, if title or  
         */
        bool addPost(string _title, string _body);
        /**
         * @brief: method that loops through the vector and prints out the post the account has
         * 
         */
        void viewPosts();
};


