#ifndef CORE
#define CORE

#include <sstream>
#include <QString>
QString ascii2str(QString str)
{
    std::stringstream split(str.toStdString());
    std::string num;
    QString ret;
    while(std::getline(split,num,' '))
    {
        std::stringstream ss(num);
        int t; ss >> t;
        ret.append(t);
    }
    return ret;
}
QString str2ascii(QString str)
{
    QString ret;
    std::string str2=str.toStdString();
    for(uint i=0;i<str2.size();i++)
    {
        std::stringstream ss;
        ss << int(str2[i]);
        ret.append(ss.str().c_str());
        ret.append(" ");
    }
    return ret;
}


#endif // CORE

