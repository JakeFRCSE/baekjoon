#include<iostream>
using namespace std;

class fibonacci{
private:
    int fn;
    int fn_1;
    int fn_2;
public:
    fibonacci(): fn(0), fn_1(1), fn_2(1) {};
    void cal_fn();
    int show_res();
};

void fibonacci::cal_fn() {
    int temp = fn;
    fn = fn + fn_1;
    fn_2 = fn_1;
    fn_1 = temp;
}

int fibonacci::show_res() {
    return fn;
}

int main() {
    int n;
    fibonacci x;
    cin>>n;;
    for (int i = 0; i < n; i++) {
        x.cal_fn();
    }
    cout<<x.show_res();
}
