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
        string getUsername();
        string getPassword();
        void setUsername(string _username);
        void setPassword(string _password);
        bool addPost(string _title, string _password);
        void viewPosts();
};


