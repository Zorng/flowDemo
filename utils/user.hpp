#include "common.hpp"

class User {
    private:
        string userID, userName, userPassword;
    public:
        User (string id, string name, string password) {
            userID = id;
            userName = name;
            userPassword = password;
        }
        void getInfo() {
            cout << userID << " " << userName << endl;
        }
};