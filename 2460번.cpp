#include<iostream>
using namespace std;

class train{
private:
    int num_of_people;
    int maxp;
public:
    train();
    void append(int);
    void pop(int);
    void max_check();
    int show_max();
};

train::train() {
    num_of_people = 0;
    maxp = 0;
}

void train::append(int x) {
    num_of_people += x;
}

void train::pop(int x) {
    num_of_people -= x;
}

void train::max_check(){
    if (num_of_people > maxp) {
        maxp = num_of_people;
    }
}

int train::show_max() {
    return maxp;
}

istream& operator>>(istream& is, train &a) {
    int temp;
    is>>temp;
    a.pop(temp);
    is>>temp;
    a.append(temp);
    a.max_check();
    return is;
}

int main() {
    train a;
    for (int i = 0; i < 10; i++) {
        cin>>a;
    }
    int temp = a.show_max();
    cout<<temp;
}
