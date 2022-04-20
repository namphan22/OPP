#include<bits/stdc++.h>
using namespace std;
class User
{
public:
    /* data */
    string user_name ;

    void print_name()
    {
        cout<< "User name is "<< user_name ;
    }
};
int main()
{
    User user1;
    user1.user_name ="nam phan ";
    user1.print_name();
    return 0;
}
