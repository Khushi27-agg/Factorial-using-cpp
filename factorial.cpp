#include <iostream>
using namespace std;

class Fact{
    protected:
    int n;
    
    public:
    Fact(int a){
        n=a;
    }
    int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else{
        return n * factorial(n - 1);
        }
    }
    
    int getfactorial(){
        return factorial(n);
    }
};
int main() {
    Fact f(11);
    cout<<f.getfactorial();

    return 0;
}