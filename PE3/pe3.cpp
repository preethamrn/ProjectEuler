#include <iostream>
#include <cmath>
//#define NUM 13195
//#define NUM 600851475143
using namespace std;
typedef long long lli;

int main() {
    bool changed;
    lli NUM = 600851475143;
    do {
        lli limit = sqrt(NUM);
        changed = false;
        for(lli i=2; i<limit; i++) {
            lli limitj = sqrt(i);
            bool prime = true;
            for(lli j=2; j<limitj; j++) {
                if(i%j==0) {
                    prime = false; break;
                }
            }
            if(prime && NUM%i==0) {
                NUM/=i; cout << NUM << endl;
                changed = true; break;
            }
        }
    } while (changed);
    return 0;
}
