#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>

using namespace std;

string cartesian_polar(string r);

int 
main(){
    string rep;
    cout << "Enter representation FORMAT a,b:" << endl;
    cin >> rep;

    string x = cartesian_polar(rep);
    cout << x << endl;
    return 0;
}

// Need to upgrade to use complex numbers
string
cartesian_polar(string r){
    string m, t, tmp;
    size_t pos = 0;
    string div = ",";
    if ((pos = r.find(div)) != std::string::npos){
        m = r.substr(0,pos);
        t = r.substr(pos + 1, r.length() - 1);
    }
    
    double b, a, mod, theta;
    b = atof(t.c_str());
    a = atof(m.c_str());

    cout << b << " " << a << endl;

    mod = (sqrt( pow(a,2) + pow(b,2) ) );
    theta = atan(b / a);

    return to_string(mod) + "," + to_string(theta);
}

string
polar_cartesian(string r){

}