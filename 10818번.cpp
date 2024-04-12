#include<iostream>
using namespace std;

class numbers {
private:
    int num_max;
    int num_min;
public:
    numbers();
    void set_numbers(int);
    void set_max_min(int);
    int show_max();
    int show_min();
};

numbers::numbers() {
    num_max = 0;
    num_min = 0;
}

void numbers::set_numbers(int a) {
    num_max = a;
    num_min = a;
}

void numbers::set_max_min(int a) {
    if (num_max < a) {
        num_max = a;
    }
    else if (num_min > a) {
        num_min = a;
    }
}

int numbers::show_max() {
    return num_max;
}

int numbers::show_min() {
    return num_min;
}

int main() {
    numbers an;
    int n;
    cin>>n;
    int temp;
    cin>>temp;
    an.set_numbers(temp);
    for (int i = 0; i < n - 1; i++) {
        cin>>temp;
        an.set_max_min(temp);
    }
    cout<<an.show_min()<<" "<<an.show_max();

}
