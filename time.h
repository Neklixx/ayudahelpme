#include <string>
using namespace std;

#ifndef TIME_H
#define TIME_H
class Time {
public:
    void setTime(int h,int m,int s);
    string toUniversalString() const;
    string toStandardString() const;
private:
    unsigned int hour{0};
    unsigned int minute{0};
    unsigned int second{0};
};

#endif

