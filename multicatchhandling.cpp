#include<iostream>
using namespace std;

void test(int x) {
    try {
        if (x == 1) {
            throw x;
        }
        else if (x == 0) {
            throw x;
        }
        else if (x == -1) {
            throw 1.0;
        }
        cout << "end of try block" << endl;
    }
    catch (char c) {
        cout << "caught a character" << endl;
    }
    catch (int m) {
        cout << "caught an int" << endl;
    }
    catch (double d) {
        cout << "caught a double" << endl;
    }

    cout << "end of try-catch block" << endl;
}

int main() {
    cout << "x == 1" << endl;
    test(1);

    cout << "x == 0" << endl;
    test(0);

    cout << "x == -1" << endl;
    test(-1);

    cout << "x == 2" << endl;
    test(2);

    return 0;
}
