#include <QCoreApplication>
#include "config.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int port;
        std::string ipAddress;
        std::string username;
        std::string password;
        const char ConfigFile[]= "./config.txt";
        Config configSettings(ConfigFile);

        port = configSettings.Read("port", 0);
        ipAddress = configSettings.Read("ipAddress", ipAddress);
        username = configSettings.Read("username", username);
        password = configSettings.Read("password", password);
        std::string database;
        database = configSettings.Read("database", database);
        double limit = 0.0;
        limit = configSettings.Read("limit", limit);
        int count = 0;
        count = configSettings.Read("count", count);

        int FixedPositionCount = 0;
        FixedPositionCount = configSettings.Read("FixedPositionCount", FixedPositionCount);

//        std::cout<<"port:"<<port<<std::endl;
//        std::cout<<"ipAddress:"<<ipAddress<<std::endl;
//        std::cout<<"database:"<<database<<std::endl;
//        std::cout<<"username:"<<username<<std::endl;
//        std::cout<<"password:"<<password<<std::endl;
//        std::cout<<"-----limit:" <<limit<<std::endl;
//        std::cout<<"count:" << count<<std::endl;

        std::string mount_point = "test1";
        configSettings.Add("mount_point", mount_point);
        configSettings.Remove("port");
        std::cout<< configSettings;

    return a.exec();
}
