/*
    Enums are mainly used to assign names to integral constants.
*/

#include <bits/stdc++.h>
using namespace std;

enum week {Sun, Mon, Tue, Wed, Thu, Fri, Sat};
//----------0----1----2----3----4----5----6

// assignment out of order is allowed
enum state { working = 1, idle = 0 };

// Auto assignment of interger value next to previous value
enum day_num { sunday = 1, monday, tuesday = 5, wednesday, thursday = 10, friday, saturday };

// even duplicate values are allowed
enum duplicate { a = 1, b = 2, c = 2, d = 1 };

int main()
{
    enum week day_w;
    enum state stat;;
    enum day_num day_n;
    
    day_w = Mon;
    cout << day_w << endl;

    stat = working;
    cout << stat << endl;

    day_n = monday;
    cout << day_n << endl;

    return 0;
}
