#include<iostream>
using namespace std;

class number{
private:
    int num;
    int one;
    int two;
    int three;
    int four;
    int five;
    int six;
    int seven;
    int eight;
    int nine;
    int zero;
public:
    number();
    void cal();
    friend istream& operator>>(istream&, number&);
    friend ostream& operator<<(ostream&, const number&);
};

number::number() {
    num = 0;
    one = 0;
    two = 0;
    three = 0;
    four = 0;
    five = 0;
    six = 0;
    seven = 0;
    eight = 0;
    nine = 0;
    zero = 0;
}

void number::cal() {
    while (num != 0) {
        int temp = (num) % 10;
        switch (temp){
        case 0:
            zero++;
            break;
        case 1:
            one++;
            break;
        case 2:
            two++;
            break;
        case 3:
            three++;
            break;
        case 4:
            four++;
            break;
        case 5:
            five++;
            break;
        case 6:
            six++;
            break;
        case 7:
            seven++;
            break;
        case 8:
            eight++;
            break;
        case 9:
            nine++;
            break;
        }
        num /= 10;
    }

}

istream& operator>>(istream& is, number& x) {
    int temp;
    is>>temp;
    x.num += temp;
    is>>temp;
    x.num *= temp;
    is>>temp;
    x.num *= temp;
    return is;
}

ostream& operator<<(ostream& os, const number &x) {
    cout<<x.zero<<endl;
    cout<<x.one<<endl;
    cout<<x.two<<endl;
    cout<<x.three<<endl;
    cout<<x.four<<endl;
    cout<<x.five<<endl;
    cout<<x.six<<endl;
    cout<<x.seven<<endl;
    cout<<x.eight<<endl;
    cout<<x.nine<<endl;
    return os;
}

int main() {
    number x;
    cin>>x;
    x.cal();
    cout<<x;
}
