#include <iostream>

using namespace std;

namespace namespace1{
    void foo(){
        cout<<"Function foo() from namespace1"<<endl;
    }
}

namespace namespace2{
    void foo(){
        cout<<"Function foo() from namespace2"<<endl;
    }
}


int main() {
    //foo(); ERROR- cant resolve foo
    namespace1::foo();
    namespace2::foo();
    return 0;
}