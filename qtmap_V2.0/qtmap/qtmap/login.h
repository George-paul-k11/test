#ifndef LOGIN_H
#define LOGIN_H

#include<bits/stdc++.h>
#include<QString>
using namespace std;
class login
{
private:
    bool state = false;
public:
    map<string, string> user;
    bool get_state()
    {
        return state;
    }
    void reg()
    {
        QString account = ui->account->text();
        QString password = ui->password->text();
        login my_log;
        my_log.user[account] = password;
    }
    void log_in()
    {
        string account;
        cin >> account;
        string password;
        cin >> password;
        if (user[account] == password)
        {
            state = true;
        }
    }
};

#endif // LOGIN_H
